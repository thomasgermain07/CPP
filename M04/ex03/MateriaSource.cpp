/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 23:53:36 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/12 00:20:44 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->stock = new AMateria*[4];
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &ref)
{
	*this = ref;
	return ;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->stock[i];
	delete[] this->stock;
	return ;
}

MateriaSource				&MateriaSource::operator=(MateriaSource const &ref)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->stock[i])
			delete this->stock[i];
		if (ref.stock[i])
			this->stock[i] = ref.stock[i]->clone();
	}
	return *this;
}

void						MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->stock[i])
		{
			this->stock[i] = m->clone();
			return ;
		}
	}
	return ;
}

AMateria					*MateriaSource::createMateria(std::string const &type)
{
	if (!type.size())
		return NULL;
	for (int i = 0; i < 4; i++)
		if (this->stock[i] && !type.compare(this->stock[i]->getType()))
			return this->stock[i]->clone();
	return NULL;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:56:10 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/16 15:03:39 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &_name)
{
	this->name = _name;
	this->inventory = new AMateria*[4];
	return ;
}

Character::Character(Character const &ref)
{
	*this = ref;
	return ;
}

Character::~Character()
{
	int			i = -1;

	while (++i < 4)
		if (this->inventory[i])
			delete this->inventory[i];
	delete[] this->inventory;
	return ;
}

Character					&Character::operator=(Character const &ref)
{
	int			i = -1;

	this->name = ref.name;
	while (++i < 4)
	{
		if (this->inventory[i])
		{
			delete this->inventory[i];
			this->inventory[i] = NULL;
		}
		if (ref.inventory[i])
			this->inventory[i] = ref.inventory[i]->clone();
	}
	return *this;
}

std::string const			&Character::getName() const
{
	return this->name;
}

void						Character::equip(AMateria *m)
{
	int			i = -1;

	if (!m)
		return ;
	while (++i < 4)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return ;
		}
	}
	return ;
}

void						Character::unequip(int index)
{
	if (index < 0 || index > 3 || !this->inventory[index])
		return ;
	this->inventory[index] = NULL;
	return ;
}

void						Character::use(int index, ICharacter &target)
{
	if (index < 0 || index > 3 || !this->inventory[index])
		return ;
	this->inventory[index]->use(target);
	return ;
}
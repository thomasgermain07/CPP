/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:38:52 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/10 21:00:38 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	return ;
}

Cure::Cure(Cure const &ref) : AMateria("cure")
{
	*this = ref;
	return ;
}

Cure				&Cure::operator=(Cure const &ref)
{
	this->setXP(ref.getXP());
	return *this;
}

Cure::~Cure()
{
	return ;
}

AMateria		*Cure::clone() const
{
	AMateria	*newCure = new Cure;

	*newCure = *this;
	return newCure;
}

void			Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* Heals " << target.getName() << "'s wounds *"<< std::endl;
	return ;
}
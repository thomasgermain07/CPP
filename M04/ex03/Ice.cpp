/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:38:52 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/12 00:17:31 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	return ;
}

Ice::Ice(Ice const &ref) : AMateria("ice")
{
	*this = ref;
	return ;
}

Ice				&Ice::operator=(Ice const &ref)
{
	this->setXP(ref.getXP());
	return *this;
}

Ice::~Ice()
{
	return ;
}

AMateria		*Ice::clone() const
{
	AMateria	*newIce = new Ice;

	*newIce = *this;
	return newIce;
}

void			Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* Shots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
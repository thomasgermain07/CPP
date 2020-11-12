/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:26:31 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/11 16:56:47 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	bzero((void *)this, sizeof(*this));
	return ;
}

AMateria::AMateria(std::string const &_type)
{
	this->xp = 0;
	this->type = _type;
	return ;
}

AMateria::AMateria(AMateria const &ref)
{
	*this = ref;
	return ;
}

AMateria				&AMateria::operator=(AMateria const &ref)
{
	this->xp = ref.xp;
	this->type = ref.type;
	return *this;
}

AMateria::~AMateria()
{
	return ;
}

unsigned int			AMateria::getXP() const
{
	return this->xp;
}

void					AMateria::setXP(unsigned int const &value)
{
	this->xp = value;
	return ;
}

std::string const		&AMateria::getType() const
{
	return this->type;
}

void					AMateria::use(ICharacter &target)
{
	(void)target;
	this->setXP(this->getXP() + 10);
	return ;
}
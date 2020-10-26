/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:26:31 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/24 17:39:04 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	bzero((void *)this, sizeof(*this));
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

std::string const		&AMateria::getType() const
{
	return this->type;
}
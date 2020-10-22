/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 01:59:53 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/21 15:13:57 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) { }

PowerFist::PowerFist(PowerFist const &ref)
{
	*this = ref;
	return ;
}

PowerFist				&PowerFist::operator=(PowerFist const &ref)
{
	AWeapon::operator=(ref);
	return *this;
}

PowerFist::~PowerFist()
{
	std::cout << "PowerFist class destructor : " << this->getName() << std::endl;
	bzero((void *)this, sizeof(*this));
	return ;
}

void					PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}
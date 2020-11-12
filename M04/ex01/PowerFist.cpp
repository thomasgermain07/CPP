/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 01:59:53 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/12 16:18:46 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) { return ; }

PowerFist::PowerFist(PowerFist const &ref) : AWeapon(ref.getName(), ref.getApCost(), ref.getDamage())
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 01:33:04 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/12 16:17:00 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) { return ; }

PlasmaRifle::PlasmaRifle(PlasmaRifle const &ref) : AWeapon(ref.getName(), ref.getApCost(), ref.getDamage())
{
	*this = ref;
	return ;
}

PlasmaRifle				&PlasmaRifle::operator=(PlasmaRifle const &ref)
{
	AWeapon::operator=(ref);
	return *this;
}

PlasmaRifle::~PlasmaRifle()
{
	std::cout << "PlasmaRifle class destructor : " << this->getName() << std::endl;
	bzero((void *)this, sizeof(*this));
	return ;
}

void					PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}
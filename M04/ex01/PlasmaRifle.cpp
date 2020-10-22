/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 01:33:04 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/21 15:13:37 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) { }

PlasmaRifle::PlasmaRifle(PlasmaRifle const &ref)
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
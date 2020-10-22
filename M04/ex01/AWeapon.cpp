/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 01:16:10 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/21 15:04:08 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	return ;
}

AWeapon::AWeapon(std::string const &_name, int _apCost, int _damage)
{
	this->name = _name;
	this->apCost = _apCost;
	this->damage = _damage;
	return ;
}

AWeapon::AWeapon(AWeapon const &ref)
{
	*this = ref;
	return ;
}

AWeapon				&AWeapon::operator=(AWeapon const &ref)
{
	this->name = ref.name;
	this->apCost = ref.apCost;
	this->damage = ref.damage;
	return *this;
}

AWeapon::~AWeapon()
{
	bzero((void *)this, sizeof(*this));
	return ;
}

std::string				AWeapon::getName() const
{
	return this->name;
}

int						AWeapon::getApCost() const
{
	return this->apCost;
}

int						AWeapon::getDamage() const
{
	return this->damage;
}
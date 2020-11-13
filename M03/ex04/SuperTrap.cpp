/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:11:19 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/13 16:07:40 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "SuperTrap creation" << std::endl;
	this->hp = 100;
	this->maxHp = 100;
	this->energie = 120;
	this->maxEnergie = 120;
	this->lvl = 1;
	this->name = "default name";
	this->meleeDmg = 60;
	this->rangeDmg = 100;
	this->armor = 5;
	return ;
}

SuperTrap::SuperTrap(std::string const &_name)
{
	std::cout << _name << " is ready to destroy everything" << std::endl;
	this->hp = 100;
	this->maxHp = 100;
	this->energie = 120;
	this->maxEnergie = 120;
	this->lvl = 1;
	this->name = _name;
	this->meleeDmg = 60;
	this->rangeDmg = 100;
	this->armor = 5;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const &ref)
{
	*this = ref;
	return ;
}

SuperTrap::~SuperTrap()
{
	std::cout << this->name << " wasn't ready to destroy everything finally" << std::endl;
	return ;
}

SuperTrap				&SuperTrap::operator=(SuperTrap const &ref)
{
	ClapTrap::operator=(ref);
	return *this;
}

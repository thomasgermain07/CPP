/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:10:07 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/14 00:19:19 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "A default scave joined the game" << std::endl;
	this->hp = 100;
	this->maxHp = 100;
	this->energie = 50;
	this->maxEnergie = 50;
	this->lvl = 1;
	this->name = "Default Name";
	this->meleeDmg = 20;
	this->rangeDmg = 15;
	this->armor = 3;
	return ;
}

ScavTrap::ScavTrap(std::string const &_name)
{
	std::cout << _name << " is know defending the door" << std::endl;
	this->hp = 100;
	this->maxHp = 100;
	this->energie = 50;
	this->maxEnergie = 50;
	this->lvl = 1;
	this->name = _name;
	this->meleeDmg = 20;
	this->rangeDmg = 15;
	this->armor = 3;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &ref)
{
	*this = ref;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << " failed to protect the door" << std::endl;
	return ;
}

ScavTrap			&ScavTrap::operator=(ScavTrap const &ref)
{
	this->hp = ref.hp;
	this->maxHp = ref.maxHp;
	this->energie = ref.energie;
	this->maxEnergie = ref.maxEnergie;
	this->lvl = ref.lvl;
	this->name = ref.name;
	this->meleeDmg = ref.meleeDmg;
	this->rangeDmg = ref.rangeDmg;
	this->armor = ref.armor;
	return *this;
}

void				ScavTrap::challengeNewcomer(std::string const &target)
{
	switch (rand() % 4)
	{
		case 0:
			std::cout << HEADER << "challenged " << target << " to chall1" << std::endl;
			break ;
		case 1:
			std::cout << HEADER << "challenged " << target << " to chall2" << std::endl;
			break ;
		case 2:
			std::cout << HEADER << "challenged " << target << " to chall3" << std::endl;
			break ;
		case 3:
			std::cout << HEADER << "challenged " << target << " to chall4" << std::endl;
			break ;
	}
	return ;
}


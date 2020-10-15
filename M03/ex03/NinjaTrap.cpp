/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 00:47:27 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/15 16:41:56 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	std::cout << "A default ninja joined the game" << std::endl;
	this->hp = 60;
	this->maxHp = 60;
	this->energie = 120;
	this->maxEnergie = 120;
	this->lvl = 1;
	this->name = "Default Name";
	this->meleeDmg = 60;
	this->rangeDmg = 5;
	this->armor = 0;
	return ;
}

NinjaTrap::NinjaTrap(std::string const &_name)
{
	std::cout << _name << " joined the game" << std::endl;
	this->hp = 60;
	this->maxHp = 60;
	this->energie = 120;
	this->maxEnergie = 120;
	this->lvl = 1;
	this->name = _name;
	this->meleeDmg = 60;
	this->rangeDmg = 5;
	this->armor = 0;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const &ref)
{
	*this = ref;
	return ;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->name << " has fallen in the darkness" << std::endl;
	return ;
}

NinjaTrap				&NinjaTrap::operator=(NinjaTrap const &ref)
{
	ClapTrap::operator=(ref);
	return *this;
}


void					NinjaTrap::ninjaShoebox(ClapTrap &ref) const
{
	std::cout << HEADER << "is attacking a brand new ClapTrap " << std::endl;
	ref.takeDamage(this->meleeDmg);
	return ;
}

void					NinjaTrap::ninjaShoebox(ScavTrap &ref) const
{
	std::cout << HEADER << "is launching shurikens to " << ref.getName() << std::endl;
	ref.takeDamage(this->rangeDmg);
	return ;
}

void					NinjaTrap::ninjaShoebox(FragTrap &ref) const
{
	std::cout << HEADER << "is attacking a FragTrap " << ref.getName() << std::endl;
	ref.takeDamage(this->meleeDmg);
	return ;
}

void					NinjaTrap::ninjaShoebox(NinjaTrap &ref) const
{
	std::cout << HEADER << "is helping another ninja called " << ref.getName() << std::endl;
	ref.beRepaired(20);
	return ;
}

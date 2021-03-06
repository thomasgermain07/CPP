/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:19:38 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/12 16:49:50 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "A default robot joined the game" << std::endl;
	this->hp = 100;
	this->maxHp = 100;
	this->energie = 100;
	this->maxEnergie = 100;
	this->lvl = 1;
	this->name = "Default Name";
	this->meleeDmg = 100;
	this->rangeDmg = 100;
	this->armor = 5;
	return ;
}

FragTrap::FragTrap(std::string const &_name)
{
	std::cout << _name << " joined the game" << std::endl;
	this->hp = 100;
	this->maxHp = 100;
	this->energie = 100;
	this->maxEnergie = 100;
	this->lvl = 1;
	this->name = _name;
	this->meleeDmg = 100;
	this->rangeDmg = 100;
	this->armor = 5;
	return ;
}

FragTrap::FragTrap(FragTrap const &ref)
{
	*this = ref;
	return ;
}

FragTrap			&FragTrap::operator=(FragTrap const &ref)
{
	ClapTrap::operator=(ref);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << " has left the game" << std::endl;
	return ;
}


void				FragTrap::volthunter_dot_exe(std::string const &target)
{
	if (this->energie >= 25)
		this->energie -= 25;
	else
	{
		std::cout << HEADER << "not enough energie" << std::endl;
		return ;
	}
	switch (rand() % 5)
	{
		case 0:
			attack1(target);
			break ;
		case 1:
			attack2(target);
			break ;
		case 2:
			attack3(target);
			break ;
		case 3:
			attack4(target);
			break ;
		case 4:
			attack5(target);
			break ;
	}
	return ;
}

void				FragTrap::attack1(std::string const &target) const
{
	std::cout << HEADER << "Catch this rocket " << target << std::endl;
	return ;
}

void				FragTrap::attack2(std::string const &target) const
{
	std::cout << HEADER << "Take this grenade in your face " << target << std::endl;
	return ;
}

void				FragTrap::attack3(std::string const &target) const
{
	std::cout << HEADER << "Come hand to hand combat if you are a robot " << target << std::endl;
	return ;
}

void				FragTrap::attack4(std::string const &target) const
{
	std::cout << HEADER << "Headshot in your face " << target << std::endl;
	return ;
}

void				FragTrap::attack5(std::string const &target) const
{
	std::cout << HEADER << "Eat my new .338 sniper rifle " << target << std::endl;
	return ;
}

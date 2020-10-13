/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:19:38 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/13 15:10:33 by thgermai         ###   ########.fr       */
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

FragTrap::~FragTrap()
{
	std::cout << this->name << " has left the game" << std::endl;
	return ;
}

int					FragTrap::getHp() const
{
	return this->hp;
}

std::string			FragTrap::getName() const
{
	return this->name;
}

int					FragTrap::getMeleeAttackDmg() const
{
	return this->meleeDmg;
}

int					FragTrap::getRangedAttackDmg() const
{
	return this->rangeDmg;
}

void				FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << HEADER << "\"launched a ranged attack at " << target << "\"" << std::endl;
	return ;
}

void				FragTrap::meleeAttack(std::string const &target) const
{
	std::cout << HEADER << "\"launch a melee attack at " << target << "\"" << std::endl;
	return ;
}

void				FragTrap::takeDamage(unsigned int amount)
{
	int			dmg = amount - this->armor;

	std::cout << "< " << this->name << " > took " << dmg << " dmg" << std::endl;
	if (dmg <= 0)
		return ;
	if (this->hp - dmg <= 0)
		this->hp = 0;
	else
		this->hp -= dmg;
	return ;
}

void				FragTrap::beRepaired(unsigned int amount)
{
	if (this->hp + (int)amount > this->maxHp)
	{
		std::cout << HEADER << "has been repaired of " << this->maxHp - this->hp << " unity" << std::endl;
		this->hp = this->maxHp;
	}
	else
	{
		std::cout << HEADER << "has been repaired of " << amount << " unity" << std::endl;
		this->hp += amount;
	}
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
	std::cout << HEADER << "has launch attack 1 at " << target << std::endl; // change output
	return ;
}

void				FragTrap::attack2(std::string const &target) const
{
	std::cout << HEADER << "has launch attack 2 at " << target << std::endl; // change output
	return ;
}

void				FragTrap::attack3(std::string const &target) const
{
	std::cout << HEADER << "has launch attack 3 at " << target << std::endl; // change output
	return ;
}

void				FragTrap::attack4(std::string const &target) const
{
	std::cout << HEADER << "has launch attack 4 at " << target << std::endl; // change output
	return ;
}

void				FragTrap::attack5(std::string const &target) const
{
	std::cout << HEADER << "has launch attack 5 at " << target << std::endl; // change output
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 15:32:58 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/13 15:59:18 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called" << std::endl;
	memset((void *)this, 0, sizeof(*this));
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &ref)
{
	*this = ref;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " ClapTrap destructor called" << std::endl;
	return ;
}

ClapTrap			&ClapTrap::operator=(ClapTrap const &ref)
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

int					ClapTrap::getHp() const
{
	return this->hp;
}

std::string			ClapTrap::getName() const
{
	return this->name;
}

int					ClapTrap::getMeleeAttackDmg() const
{
	return this->meleeDmg;
}

int					ClapTrap::getRangedAttackDmg() const
{
	return this->rangeDmg;
}

void				ClapTrap::rangedAttack(std::string const &target) const
{
	std::cout << HEADER << "\"launched a ranged attack at " << target << "\"" << std::endl;
	return ;
}

void				ClapTrap::meleeAttack(std::string const &target) const
{
	std::cout << HEADER << "\"launch a melee attack at " << target << "\"" << std::endl;
	return ;
}

void				ClapTrap::takeDamage(unsigned int amount)
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

void				ClapTrap::beRepaired(unsigned int amount)
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

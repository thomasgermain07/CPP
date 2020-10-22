/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:20:50 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/21 15:40:57 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	return ;
}

Character::Character(std::string const &_name)
{
	this->name = _name;
	this->ap = 40;
	return ;
}

Character::Character(Character const &ref)
{
	*this = ref;
	return ;
}

Character			&Character::operator=(Character const &ref)
{
	this->name = ref.name;
	this->ap = ref.ap;
	return *this;
}

Character::~Character()
{
	std::cout << this->name << " passed away" << std::endl;
	bzero((void *)this, sizeof(*this));
	return ;
}

void				Character::recoverAP()
{
	if (this->ap < 30)
		this->ap += 10;
	else
		this->ap = 40;
	return ;
}

void				Character::equip(AWeapon *_weapon)
{
	if (_weapon == this->weapon)
	{
		std::cout << _weapon->getName() << " is already equiped" << std::endl;
		return ;
	}
	this->weapon = _weapon;
	return ;
}

void				Character::attack(Enemy *enemy)
{
	if (!enemy || !enemy->getType().size())
	{
		std::cout << "This enemy is already dead" << std::endl;
		return ;
	}
	if (!this->weapon)
	{
		std::cout << "No weapon equiped" << std::endl;
		return ;
	}
	if (this->ap < this->weapon->getApCost())
	{
		std::cout << "Not enough energie to attack" << std::endl;
		return ;
	}
	this->ap -= this->weapon->getApCost();
	std::cout << this->name << " attack " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
	this->weapon->attack();
	enemy->takeDamage(this->weapon->getDamage());
	if (enemy->getHp() == 0 && enemy->getType().size())
		delete enemy;
	return ;
}

AWeapon					*Character::getWeapon() const
{
	if (this->weapon)
		return this->weapon;
	return NULL;
}

std::string				Character::getName() const
{
	return this->name;
}

int						Character::getAp() const
{
	return this->ap;
}

std::ostream			&operator<<(std::ostream &os, Character const &c)
{
	if (c.getWeapon())
		os << c.getName() << " has " << c.getAp() << " AP and carries a " << c.getWeapon()->getName() << std::endl;
	else
		os << c.getName() << " has " << c.getAp() << " AP and is unarmed" << std::endl;
	return os;
}


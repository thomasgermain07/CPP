/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 02:16:49 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/21 15:04:29 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
	return ;
}

Enemy::Enemy(int _hp, std::string const &_type)
{
	this->hp = _hp;
	this->type = _type;
	return ;
}

Enemy::Enemy(Enemy const &ref)
{
	*this = ref;
	return ;
}

Enemy			&Enemy::operator=(Enemy const &ref)
{
	this->hp = ref.hp;
	this->type = ref.type;
	return *this;
}

Enemy::~Enemy()
{
	bzero((void *)this, sizeof(*this));
	return ;
}

int				Enemy::getHp() const
{
	return this->hp;
}

std::string		Enemy::getType() const
{
	return this->type;
}

void			Enemy::takeDamage(int dmg)
{
	if (dmg < 0)
	{
		std::cerr << "Damage cannot be negative" << std::endl;
		return ;
	}
	if (this->hp < dmg)
		this->hp = 0;
	else
		this->hp -= dmg;
	return ;
}

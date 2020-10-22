/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 14:48:32 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/21 15:14:42 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include "Enemy.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything!" << std::endl;
	return ;
}

SuperMutant::SuperMutant(SuperMutant const &ref)
{
	*this = ref;
	return ;
}

SuperMutant			&SuperMutant::operator=(SuperMutant const &ref)
{
	Enemy::operator=(ref);
	return *this;
}

SuperMutant::~SuperMutant()
{
	bzero((void *)this, sizeof(*this));
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

void				SuperMutant::takeDamage(int dmg)
{
	if (dmg > 3)
		dmg -= 3;
	else if (dmg > 0)
		dmg = 0;
	Enemy::takeDamage(dmg);
	return ;
}
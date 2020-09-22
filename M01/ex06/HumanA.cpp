/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 15:10:52 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/22 15:56:43 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon)
{
	this->name = _name;
	this->weapon = &_weapon;
	return ;
}

void			HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	return ;
}

void			HumanA::setWeapon(Weapon &_weapon)
{
	this->weapon = &_weapon;
	return ;
}

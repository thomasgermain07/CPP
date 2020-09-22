/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 12:50:54 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/22 15:06:00 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	this->type = _type;
	return ;
}

const std::string		&Weapon::getType() const
{
	const std::string		&ref = this->type;
	return ref;
}

void					Weapon::setType(std::string _type)
{
	this->type = _type;
	return ;
}

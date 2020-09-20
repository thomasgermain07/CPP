/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:06:36 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/20 21:53:24 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieEvent.hpp"

std::string		names[20] =
{
	"Sheryll",
	"Trish",
	"Socorro",
	"Shakira",
	"Pasquale",
	"Chara",
	"Milly",
	"Herta",
	"Hien",
	"Clelia",
	"Merri",
	"Providencia",
	"Melody",
	"Thurman",
	"Burl",
	"Al",
	"Aletha",
	"Vernia",
	"Daine",
	"Violeta",
};

std::string ZombieEvent::setZombieType = "Runner";

Zombie			*ZombieEvent::newZombie(std::string name)
{
	Zombie		*z = new Zombie;

	z->name = name;
	z->type = setZombieType;
	z->announce();
	return z;
}

Zombie			*ZombieEvent::randomChump()
{
	return ZombieEvent::newZombie(names[std::rand() % (names->size() - 1)]);
}

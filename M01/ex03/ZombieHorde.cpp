/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:00:45 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/26 02:09:29 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

std::string		types[5] =
{
	"Runner",
	"Walker",
	"Crawler",
	"Screamer",
	"Brutes"
};

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

ZombieHorde::ZombieHorde(int n)
{
	this->array = new Zombie[n];
	this->n_zombie = n;

	for (int i = 0; i < n; i++)
	{
		this->array[i].setName(names[std::rand() % 20]);
		this->array[i].setType(types[std::rand() % 5]);
	}
	return ;
}

void			ZombieHorde::announce()
{
	for (int i = 0; i < n_zombie; i++)
		this->array[i].announce();
	return ;
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->array;
	std::cout << "ZombieHorde deleted" << std::endl;
	return ;
}

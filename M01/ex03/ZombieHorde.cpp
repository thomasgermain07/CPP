/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:00:45 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/21 16:19:52 by thgermai         ###   ########.fr       */
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
	array = new Zombie[n];
	n_zombie = n;

	for (int i = 0; i < n; i++)
	{
		array[i].name = names[std::rand() % (names->size() - 1)];
		array[i].type = types[std::rand() % (types->size() - 1)];
	}
	return ;
}

void			ZombieHorde::announce()
{
	for (int i = 0; i < n_zombie; i++)
		array[i].announce();
	return ;
}

ZombieHorde::~ZombieHorde()
{
	delete[] array;
	std::cout << "ZombieHorde deleted" << std::endl;
	return ;
}

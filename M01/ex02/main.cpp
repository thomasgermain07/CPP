/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:07:47 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/20 22:35:06 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

std::string		types[5] =
{
	"Runner",
	"Walker",
	"Crawler",
	"Screamer",
	"Brutes"
};

void			go_hunt_brains(Zombie *z1, Zombie *z2, Zombie *z3)
{
	Zombie		*z4;

	std::cout << "... When they found another zombie\n" << std::endl;
	z4 = ZombieEvent::randomChump();
	z4->salutation();
	std::cout << "\nBut it seems that he wasn't welcome in the horde\n" << std::endl;
	z1->advert();
	z2->advert();
	z3->advert();
	std::cout << "\nIn the fight " << z3->name << " died\n" << std::endl;
	delete z3;
}

int				main()
{
	std::srand(std::time(NULL)); // Important for the random param

	Zombie		z1;
	z1.name = "Daniel";
	z1.type = types[4];
	std::cout << "This is the story of a zombie horde\n" << std::endl;
	z1.announce();
	Zombie		*z2;
	z2 = ZombieEvent::newZombie("Karen");
	ZombieEvent::setZombieType = types[1];
	Zombie		*z3;
	z3 = ZombieEvent::randomChump();
	std::cout << "\nThe horde decided to go hunt for some delicious brains..." << std::endl;
	go_hunt_brains(&z1, z2, z3);
	std::cout << "\nOur zombies found food but lost a friend\n" << std::endl;
	std::cout << "End of the worst story of 2020\n" << std::endl;
	delete z2;
	return 0;
}

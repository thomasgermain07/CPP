/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 01:09:13 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/16 14:50:21 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int				main()
{
	Enemy				*s1 = new RadScorpion;
	Enemy				*m1 = new SuperMutant;
	Character			*c1 = new Character ("Thomas");
	AWeapon				*p1 = new PlasmaRifle;
	AWeapon				*p2 = new PowerFist;

	std::cout << "\n" << *c1 << std::endl;

	std::cout << "---> Attacking the Rad Scorpion :" << std::endl;
	{
		c1->equip(p2);
		std::cout << *c1;
		c1->attack(s1);
		std::cout << *c1;
		std::cout << "-> Change weapons to Plasma Rifle : " << std::endl;
		c1->equip(p1);
		std::cout << *c1;
		c1->attack(s1);
		std::cout << *c1;
		c1->attack(s1);
	}

	std::cout << "\n\n---> Regeneration of Character's AP :" << std::endl;
	{
		std::cout << *c1;
		for (int i = 4; i > 0; i--)
			c1->recoverAP();
		std::cout << *c1;
	}

	std::cout << "\n\n---> Attacking the Super Mutant :" << std::endl;
	{
		for (int i = 4; i > 0; i--)
			c1->attack(m1);
		std::cout << *c1;
		std::cout << "-> Change weapons to Power First : " << std::endl;
		c1->equip(p2);
		std::cout << *c1;
		for (int i = 3; i > 0; i--)
			c1->attack(m1);
		std::cout << "-> " << c1->getName() << " need to recover AP " << std::endl;
		std::cout << "-> and " << m1->getType() << " still have " << m1->getHp() << " HP" << std::endl;
		for (int i = 4; i > 0; i--)
			c1->recoverAP();
		for (int i = 1; i > 0; i--)
			c1->attack(m1);
	}

	std::cout << "\n\n" << "--> " << c1->getName() << " drop his weapon and go to rest" << std::endl;
	c1->equip(NULL);
	c1->recoverAP();
	std::cout << *c1;

	std::cout << "\n---> Deleting Character and Weapons" << std::endl;

	delete c1;
	delete p1;
	delete p2;


	return 0;
}
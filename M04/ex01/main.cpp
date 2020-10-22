/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 01:09:13 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/21 15:52:29 by thgermai         ###   ########.fr       */
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
	RadScorpion	__unused	*s1 = new RadScorpion;
	SuperMutant	__unused	*m1 = new SuperMutant;
	Character	__unused	*c1 = new Character ("Thomas");
	PlasmaRifle __unused	*p1 = new PlasmaRifle;
	PowerFist	__unused	*p2 = new PowerFist;

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

	return 0;
}
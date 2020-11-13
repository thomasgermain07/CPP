/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:30:05 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/13 16:00:48 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <time.h>

int			main()
{
	srand(time(NULL)); // setup rand

	ScavTrap s1("scavTrap");
	FragTrap f1("fragTrap");

	std::cout << f1.getName() << " has " << f1.getHp() << " hp" << std::endl;

	for (int i = 0; i < 3; i++)
	{
		s1.challengeNewcomer(f1.getName());
		f1.takeDamage(s1.getRangedAttackDmg());
		std::cout << std::endl;
	}

	std::cout << f1.getName() << " has " << f1.getHp() << " hp left" <<std::endl;
	return 0;
}

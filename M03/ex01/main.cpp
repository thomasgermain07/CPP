/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:30:05 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/13 15:56:15 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <time.h>

int			main()
{
	srand(time(NULL)); // setup rand

	FragTrap		r1("Alex");
	ScavTrap		s1("Scav");

	s1.challengeNewcomer(r1.getName());
	s1.rangedAttack(r1.getName());
	r1.takeDamage(s1.getRangedAttackDmg());
	std::cout << r1.getName() << " has " << r1.getHp() << " hp" << std::endl;
	r1.meleeAttack(s1.getName());
	s1.takeDamage(r1.getMeleeAttackDmg());
	std::cout << s1.getName() << " has " << s1.getHp() << " hp" << std::endl;

	return 0;
}

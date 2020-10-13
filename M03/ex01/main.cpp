/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:30:05 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/13 14:59:58 by thgermai         ###   ########.fr       */
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
	FragTrap		r2("Nico");

	r1.meleeAttack(r2.getName());
	r2.takeDamage(r1.getMeleeAttackDmg());
	r2.rangedAttack(r1.getName());
	r1.takeDamage(r2.getRangedAttackDmg());
	r1.beRepaired(10);
	std::cout << r1.getName() << " has " << r1.getHp() << " hp" << std::endl;
	r1.volthunter_dot_exe(r1.getName());
	r1.volthunter_dot_exe(r1.getName());
	r1.volthunter_dot_exe(r1.getName());
	r1.volthunter_dot_exe(r1.getName());
	r1.volthunter_dot_exe(r1.getName());
	r1.beRepaired(100);

	std::cout << "\n\t--- Now testing ScavTrap ---\n" << std::endl;

	ScavTrap		s1("Test");

	s1.challengeNewcomer(r1.getName());
	s1.rangedAttack(r1.getName());
	r1.takeDamage(s1.getRangedAttackDmg());
	std::cout << r1.getName() << " has " << r1.getHp() << " hp" << std::endl;
	r1.meleeAttack(s1.getName());
	s1.takeDamage(r1.getMeleeAttackDmg());
	std::cout << s1.getName() << " has " << s1.getHp() << " hp" << std::endl;

	return 0;
}

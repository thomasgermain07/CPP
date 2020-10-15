/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:30:05 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/14 14:54:04 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <time.h>

int			main()
{
	srand(time(NULL)); // setup rand

	ScavTrap		s1("Dimitri");
	FragTrap		f1("Nikolai");
	NinjaTrap		n1("NIIIIINJA");
	NinjaTrap		n2("tamere");

	n1.ninjaShoebox(s1);
	std::cout << s1.getHp() << std::endl;
	n2.takeDamage(30);
	n1.ninjaShoebox(n2);
	n1.ninjaShoebox(f1);
	std::cout << f1.getHp() << std::endl;

	return 0;
}

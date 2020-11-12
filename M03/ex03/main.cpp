/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:30:05 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/12 17:04:50 by thgermai         ###   ########.fr       */
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

	ScavTrap		s1("scav1");
	FragTrap		f1("frag1");
	NinjaTrap		n1("ninja1");
	NinjaTrap		n2("ninja2");

	n1.ninjaShoebox(s1);
	std::cout << s1.getName() << " has " << s1.getHp() << std::endl;
	n2.takeDamage(30);
	n1.ninjaShoebox(n2);
	std::cout << n2.getName() << " has " << n2.getHp() << std::endl;
	n1.ninjaShoebox(f1);
	std::cout << f1.getName() << " has " << f1.getHp() << std::endl;

	return 0;
}

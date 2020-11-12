/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:01:19 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/12 16:25:50 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int			main()
{
	Squad			*s1 = new Squad;
	Squad			*s2 = new Squad;
	ISpaceMarine	*m1 = new AssaultTerminator;
	ISpaceMarine	*m2 = new AssaultTerminator;
	ISpaceMarine	*m3 = new TacticalMarine;
	ISpaceMarine	*m4 = new TacticalMarine;
	ISpaceMarine	*m5 = new TacticalMarine;

	s1->push(m1);
	s1->push(m3);

	s2->push(m4);
	s2->push(m2);

	std::cout << "\n\t--- *s2 = *s1 ---" << std::endl;
	*s2 = *s1;
	std::cout << "Copy deleted the content of s2 before copying s1\n" << std::endl;

	s2->push(m5);

	std::cout << "\t--- Calling method from s1 ---" << std::endl;
	for (int i = 0; i < s1->getCount(); i++)
	{
		ISpaceMarine	*current = s1->getUnit(i);
		current->battleCry();
	}

	std::cout << "\n\t--- Calling method from s2 ---" << std::endl;
	for (int i = 0; i < s2->getCount(); i++)
	{
		ISpaceMarine	*current = s2->getUnit(i);
		current->battleCry();
	}

	std::cout << "\n\t--- Delete s1 ---" << std::endl;
	delete s1;

	std::cout << "\n\t--- Delete s2 ---" << std::endl;
	delete s2;

	s1 = NULL;
	s2 = NULL;
	m1 = NULL;
	m2 = NULL;
	m3 = NULL;
	m4 = NULL;

	return 0;
}
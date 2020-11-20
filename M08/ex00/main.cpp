/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 05:22:43 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/19 06:12:44 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"

int			main(int ac, char **av)
{
	(void)ac;
	(void)av;

	std::cout << "Testing with list" << std::endl;
	{
		std::list<int>				cont;
		std::list<int>::iterator 	it;

		cont.push_back(12);
		cont.push_back(412);
		cont.push_back(28);
		cont.push_back(-14);
		cont.push_back(42);
		cont.push_back(127);

		std::cout << "look for 42 -> ";
		if ((it = easyfind(cont, 42)) != cont.end())
			std::cout << "found " << *it << std::endl;
		else
			std::cout << "no result" << std::endl;

		std::cout << "look for 2 -> ";
		if ((it = easyfind(cont, 2)) != cont.end())
			std::cout << "found " << *it << std::endl;
		else
			std::cout << "no result" << std::endl;
	}
	std::cout << "\nTesting with vector" << std::endl;
	{
		std::vector<int>				cont;
		std::vector<int>::iterator		it;

		cont.push_back(12);
		cont.push_back(412);
		cont.push_back(28);
		cont.push_back(-14);
		cont.push_back(42);
		cont.push_back(127);

		std::cout << "look for 42 -> ";
		if ((it = easyfind(cont, 42)) != cont.end())
			std::cout << "found " << *it << std::endl;
		else
			std::cout << "no result" << std::endl;

		std::cout << "look for 2 -> ";
		if ((it = easyfind(cont, 2)) != cont.end())
			std::cout << "found " << *it << std::endl;
		else
			std::cout << "no result" << std::endl;
	}

	std::cout << "\nTesting with deque" << std::endl;
	{
		std::deque<int>				cont;
		std::deque<int>::iterator	it;

		cont.push_back(12);
		cont.push_back(412);
		cont.push_back(28);
		cont.push_back(-14);
		cont.push_back(42);
		cont.push_back(127);

		std::cout << "look for 42 -> ";
		if ((it = easyfind(cont, 42)) != cont.end())
			std::cout << "found " << *it << std::endl;
		else
			std::cout << "no result" << std::endl;

		std::cout << "look for 2 -> ";
		if ((it = easyfind(cont, 2)) != cont.end())
			std::cout << "found " << *it << std::endl;
		else
			std::cout << "no result" << std::endl;
	}

	return 0;
}
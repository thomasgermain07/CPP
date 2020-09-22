/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:56:05 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/21 16:21:27 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

int				main()
{
	std::srand(time(NULL));

	std::cout << "First horde presentation :" << std::endl;
	ZombieHorde		h1(5);
	h1.announce();

	std::cout << "\nSecond horde presentation :" << std::endl;
	ZombieHorde		*h2 = new ZombieHorde(5);
	h2->announce();

	std::cout << "\nNow we delete the seconde horde :" << std::endl;
	delete h2;

	std::cout << "\nAnd here the first horde will be delete when the prog will leave" << std::endl;
	std::cout << "\nLeaving the main\n" << std::endl;
	return 0;
}

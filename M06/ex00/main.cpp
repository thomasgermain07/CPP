/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 14:59:40 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/17 06:44:22 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convert.hpp"
#include <unistd.h>

static void		headerMsg(std::string const &param)
{
	std::cout << "\e[32m\e[1mTesting : '" << param << "'\e[0m" << std::endl;
}

static void		convInput(std::string const &param)
{
	Convert		c;

	headerMsg(param);
	try
	{
		c = Convert(param);
		std::cout << c << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << "\n" << std::endl;
	}
}

static void		makeTest()
{
	convInput("0");
	std::cin.get();
	convInput("42.0f");
	std::cin.get();
	convInput("120.0f");
	std::cin.get();
	convInput("-120");
	std::cin.get();
	convInput("1234545");
	std::cin.get();
	convInput("-1234545");
	std::cin.get();
	convInput("2147483647");
	std::cin.get();
	convInput("-2147483648");
	std::cin.get();
	convInput("2147483648");
	std::cin.get();
	convInput("-2147483649");
	std::cin.get();
	convInput("1568.0456");
	std::cin.get();
	convInput("1568.0456f");
	std::cin.get();
	convInput("-8794156.048");
	std::cin.get();
	convInput("-8794156.048f");
	std::cin.get();
	convInput("inff");
	std::cin.get();
	convInput("-inf");
	std::cin.get();
	convInput("nan");
	std::cin.get();
	convInput("");
	std::cin.get();
	convInput("test");
	std::cin.get();
}

int				main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "\e[32m\e[1mNo input executing standard test :" << std::endl;
		std::cout << "Press enter to go to the next test\e[0m" << std::endl;
		std::cin.get();
		makeTest();
	}
	else
		convInput(static_cast<std::string>(av[1]));
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:32:02 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/17 04:28:55 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat		*createBureaucrat(std::string name, int grade)
{
	Bureaucrat	*b = NULL;

	try
	{
		b = new Bureaucrat(name, grade);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return b;
}

int				main()
{
	Bureaucrat		*b;

	std::cout << "\t --- Create a bureaucrate with invalid grade (155, -2) ---" << std::endl;
	if (!(b = createBureaucrat("Didier", 155)))
		std::cerr << "Error : creation failed" << std::endl;
	else
	{
		std::cout << *b;
		delete b;
	}

	if (!(b = createBureaucrat("Didier", -2)))
		std::cerr << "Error : creation failed" << std::endl;
	else
	{
		std::cout << *b;
		delete b;
	}

	/* ****************************************************************************** */

	std::cout << "\t --- Increase a grade normal then 1 ---" << std::endl;
	b = createBureaucrat("Thomas", 2);

	std::cout << *b;
	/* *** First try to increase grade -> will success *** */
	try
	{
		b->increaseGrade();
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << '\n';
		std::cerr << "Increase failed 1" << std::endl;
	}
	std::cout << *b;
	/* *** Second try to increase grade -> will fail *** */
	try
	{
		b->increaseGrade();
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << '\n';
		std::cerr << "Increase failed 2" << std::endl;
	}
	std::cout << *b;
	delete b;

	/* ****************************************************************************** */

	std::cout << "\t --- Decrease a grade normal then 150 ---" << std::endl;
	b = createBureaucrat("Thomas", 149);
	std::cout << *b;
	/* *** First try to decrease grade -> will success *** */
	try
	{
		b->decreaseGrade();
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << '\n';
		std::cerr << "Decrease failed 1" << std::endl;
	}
	std::cout << *b;
	/* *** First try to decrease grade -> will fail *** */
	try
	{
		b->decreaseGrade();
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << '\n';
		std::cerr << "Decrease failed 2" << std::endl;
	}
	std::cout << *b;
	delete b;

	return 0;
}


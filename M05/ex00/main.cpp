/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:32:02 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/14 01:12:04 by thgermai         ###   ########.fr       */
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
	std::cout << "\t --- Increase a grade normal then 1 ---" << std::endl;
	if (!(b = createBureaucrat("Thomas", 2)))
		std::cerr << "Error : creation failed" << std::endl;
	else
	{
		std::cout << *b;
		b->increaseGrade();
		std::cout << *b;
		b->increaseGrade();
		std::cout << *b;
		delete b;
	}
	std::cout << "\t --- Decrease a grade normal then 150 ---" << std::endl;
	if (!(b = createBureaucrat("Thomas", 149)))
		std::cerr << "Error : creation failed" << std::endl;
	else
	{
		std::cout << *b;
		b->decreaseGrade();
		std::cout << *b;
		b->decreaseGrade();
		std::cout << *b;
		delete b;
	}

	// std::cout << "\n" << std::endl;
	// system("leaks a.out");
	return 0;
}
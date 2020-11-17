/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:32:02 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/17 05:07:23 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

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

Form		*createForm(std::string name, int signGrade, int execGrade)
{
	Form		*f = NULL;

	try
	{
		f = new Form(name, signGrade, execGrade);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cerr << "Form creation failed" << std::endl;
	}
	if (f)
		std::cout << *f;
	return f;
}

int				main()
{
	Form		*f;
	Bureaucrat	*b;

	std::cout << "\t--- Form creation with invalide grades ---" << std::endl;
	f = createForm("form0", 180, 115);
	f = createForm("form0", 120, -2);

	std::cout << "\t--- Bureaucrat creation ---" << std::endl;
	b = createBureaucrat("Thomas", 50);
	std::cout << *b;

	std::cout << "\t--- Sign with good grade ---" << std::endl;
	f = createForm("form0", 75, 150);
	b->signForm(f);
	std::cout << *f;
	delete f;

	std::cout << "\t--- Sign with wrong grade ---" << std::endl;
	f = createForm("form0", 10, 150);
	b->signForm(f);
	std::cout << *f;
	delete f;
	delete b;

	return 0;
}
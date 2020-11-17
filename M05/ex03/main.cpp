/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:32:02 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/17 05:22:49 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void		testIntern(std::string const &type, std::string const &target)
{
	Intern			i;
	Form			*f = NULL;
	Bureaucrat		b("Thomas", 1);

	try
	{
		f = i.makeForm(type, target);
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch (std::exception const &e)
	{
		std::cerr << "Error while calling makeForm : " << e.what() << std::endl;
	}
	return ;
}

int 		main()
{
	std::cout << "\t--- Testing with \"shrubbery creation\" and \"house\"" << std::endl;
	testIntern("shrubbery creation", "house");

	std::cout << "\t--- Testing with \"robOtomY requEst\" and \"blender\"" << std::endl;
	testIntern("robOtomY requEst", "blender");

	std::cout << "\t--- Testing with \"presidential pardon\" and \"Micheal Jackson\"" << std::endl;
	testIntern("presidential pardon", "Micheal Jackson");

	std::cout << "\t--- Testing with \"random thing\" and \"error\"" << std::endl;
	testIntern("random thing", "error");

	std::cout << "\t--- Testing with \"random stuff\" and \"error\"" << std::endl;
	testIntern("random stuff", "error");

	return 0;
}

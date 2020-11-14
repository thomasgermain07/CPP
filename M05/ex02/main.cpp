/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:32:02 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/14 23:00:24 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int 		main()
{
	Bureaucrat		*b = new Bureaucrat("Thomas", 1);
	Form			*s = new ShrubberyCreationForm("home");
	Form			*r = new RobotomyRequestForm("phone");
	Form			*p = new PresidentialPardonForm("my uncle");

	std::cout << "\t--- Trying to exectue all forms without signing them before ---" << std::endl;
	b->executeForm(*s);
	b->executeForm(*r);
	b->executeForm(*p);

	std::cout << "\n\t--- Signing and executing all forms without problems ---" << std::endl;
	b->signForm(*s);
	b->executeForm(*s);
	b->signForm(*r);
	b->executeForm(*r);
	b->signForm(*p);
	b->executeForm(*p);

	delete b;
	b = new Bureaucrat("Thomas", 150);

	std::cout << "\n\t--- Trying execute all signed forms but with wrong grades ---" << std::endl;
	b->executeForm(*s);
	b->executeForm(*r);
	b->executeForm(*p);

	delete b;
	delete s;
	delete r;
	delete p;

	return 0;
}

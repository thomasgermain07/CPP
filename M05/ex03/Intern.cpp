/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 23:02:08 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/16 01:13:03 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <sstream>

Intern::Intern()
{
	return ;
}

Intern::Intern(Intern const &ref)
{
	*this = ref;
	return ;
}

Intern					&Intern::operator=(Intern const &ref)
{
	(void)ref;
	return *this;
}

Intern::~Intern()
{
	return ;
}

Form					*Intern::makeForm(std::string _type, std::string const &_target) const
{
	std::string			knownType[3] = {"SHRUBBERY CREATION", "ROBOTOMY REQUEST", "PRESIDENTIAL PARDON"};
	Form				*(Intern::*forms[3])(std::string const &_target) const = {&Intern::createSCF, &Intern::createRQF, &Intern::createPPF};
	std::string			copyType = _type;

	for (int i = 0; _type[i]; i++)
		_type[i] = toupper(_type[i]);
	for (int i = 0; i < 3; i++)
	{
		if (_type == knownType[i])
		{
			std::cout << "Intern created " << copyType << std::endl;
			return (this->*forms[i])(_target);
		}
	}
	throw Intern::FormUnknownException(copyType);
	return NULL;
}

Form					*Intern::createSCF(std::string const &_target) const
{
	return new ShrubberyCreationForm(_target);
}

Form					*Intern::createRQF(std::string const &_target) const
{
	return new RobotomyRequestForm(_target);
}

Form					*Intern::createPPF(std::string const &_target) const
{
	return new PresidentialPardonForm(_target);

}

Intern::FormUnknownException::FormUnknownException(std::string const &_type)
{
	this->errorType = _type;
	return ;
}

Intern::FormUnknownException::~FormUnknownException() throw()
{
	return ;
}

const char				*Intern::FormUnknownException::what() const throw()
{
	std::string		str = this->errorType + " is an unknown form";
	return str.c_str();
}
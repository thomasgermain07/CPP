/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 23:02:08 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/15 00:23:07 by thgermai         ###   ########.fr       */
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
	std::string			copyType = _type;

	for (int i = 0; _type[i]; i++)
		_type[i] = toupper(_type[i]);
	for (int i = 0; i < 3; i++)
	{
		if (_type == knownType[i])
		{
			std::cout << "Intern created " << copyType << std::endl;
			return this->formCreator(_target, i);
		}
	}
	throw Intern::FormUnknownException(copyType);
	return NULL;
}

Form					*Intern::formCreator(std::string const &_target, int _type) const
{
	Form		*f = NULL;

	switch (_type)
	{
		case 0:
			f = new ShrubberyCreationForm(_target);
			break;
		case 1:
			f = new RobotomyRequestForm(_target);
			break;
		case 2:
			f = new PresidentialPardonForm(_target);
			break;
	}
	return f;
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
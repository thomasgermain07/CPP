/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:32:17 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/17 05:09:30 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("defaultName")
{
	this->grade = 150;
	return ;
}

Bureaucrat::Bureaucrat(std::string const &_name, int const _grade) : name(_name)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = _grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &ref) : name(ref.name)
{
	*this = ref;
	return ;
}

Bureaucrat				&Bureaucrat::operator=(Bureaucrat const &ref)
{
	this->grade = ref.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

std::string const		Bureaucrat::getName() const
{
	return this->name;
}

int						Bureaucrat::getGrade() const
{
	return this->grade;
}

void					Bureaucrat::increaseGrade()
{
	if (this->grade != 1)
		this->grade -= 1;
	else
		throw Bureaucrat::GradeTooHighException();
	return ;
}

void					Bureaucrat::decreaseGrade()
{
	if (this->grade != 150)
		this->grade += 1;
	else
		throw Bureaucrat::GradeTooLowException();
	return ;
}

void					Bureaucrat::signForm(Form *f) const
{
	try
	{
		f->beSigned(this);
		std::cout << this->name << " signed " << f->getName() << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout << this->name << " cannot sign " << f->getName() << " because it require a grade of " << f->getSignGrade() << " minimun" << std::endl;
	}
	return ;
}

/* *********** ********* ***********  */
/* *********** exception ***********  */
/* *********** ********* ***********  */

const char				*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char				*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

/* *********** ********* ***********  */
 /* ********** operator ***********  */
/* *********** ********* ***********  */

std::ostream				&operator<<(std::ostream &os, Bureaucrat const &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return os;
}
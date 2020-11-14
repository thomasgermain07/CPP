/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 23:40:39 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/14 01:08:26 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("defaultName"), signGrade(150), execGrade(150)
{
	this->status = false;
	return ;
}

Form::Form(std::string const &_name, int _signGrade, int _execGrade) : name(_name), signGrade(_signGrade), execGrade(_execGrade)
{
	if (this->signGrade < 1 || this->execGrade < 1)
		throw Form::GradeTooHighException();
	if (this->signGrade > 150 || this->execGrade > 150)
		throw Form::GradeTooLowException();
	this->status = false;
	return ;
}

Form::Form(Form const &ref) : name(ref.name), signGrade(ref.signGrade), execGrade(ref.execGrade)
{
	this->status = ref.status;
	return ;
}

Form					&Form::operator=(Form const &ref)
{
	this->status = ref.status;
	return *this;
}

Form::~Form()
{
	return ;
}

std::string				Form::getName() const
{
	return this->name;
}

bool					Form::getStatus() const
{
	return this->status;
}

int						Form::getSignGrade() const
{
	return this->signGrade;
}
int						Form::getExecGrade() const
{
	return this->execGrade;
}

void					Form::beSigned(Bureaucrat const *b)
{
	if (this->signGrade < b->getGrade())
		throw Form::GradeTooLowException();
	this->status = true;
	return ;
}

/* *********** ********* ***********  */
/* *********** exception ***********  */
/* *********** ********* ***********  */

const char				*Form::GradeTooHighException::what() const throw()
{
	return "Grade to high";
}

const char				*Form::GradeTooLowException::what() const throw()
{
	return "Grade to low";
}

/* *********** ********* ***********  */
 /* ********** operator ***********  */
/* *********** ********* ***********  */

std::ostream			&operator<<(std::ostream &os, Form const &f)
{
	std::string			status;

	if (f.getStatus() == true)
		status = "signed";
	else
		status = "unsigned";
	os << "[" << f.getName() << "] -> status : " << status << "\nPermission -> sign : " << f.getSignGrade() << " - exec : " << f.getExecGrade() << std::endl;
	return os;
}
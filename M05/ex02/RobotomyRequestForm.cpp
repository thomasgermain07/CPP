/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 20:46:50 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/14 20:59:27 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <unistd.h>

RobotomyRequestForm::RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &_target) : Form("RobotomyRequestForm", 72, 45)
{
	this->setTarget(_target);
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &ref) : Form("RobotomyRequestForm", 72, 45)
{
	*this = ref;
	return ;
}

RobotomyRequestForm					&RobotomyRequestForm::operator=(RobotomyRequestForm const &ref)
{
	Form::operator=(ref);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

void								RobotomyRequestForm::execSub() const
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << "* rizzzzzz, bzzzzzzzzzz *" << std::endl;
		usleep(500 * 1000);
	}
	switch (rand() % 2)
	{
		case 0 :
			std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
			break ;
		case 1 :
			std::cout << this->getTarget() << " robotomization failed again ..." << std::endl;
			break ;
	}
	return ;
}
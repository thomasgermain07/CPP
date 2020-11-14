/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 21:05:30 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/15 00:25:45 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &_target) : Form("presidential pardon", 25, 5)
{
	this->setTarget(_target);
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ref) : Form("presidential pardon", 25, 5)
{
	*this = ref;
	return ;
}

PresidentialPardonForm					&PresidentialPardonForm::operator=(PresidentialPardonForm const &ref)
{
	Form::operator=(ref);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

void								PresidentialPardonForm::execSub() const
{
	std::cout << this->getTarget() << " has been pardonned by Zafod Beeblebrox, everything is alright now" << std::endl;
	return ;
}
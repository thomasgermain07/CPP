/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:07:31 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/12 16:06:21 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
	return ;
}

Victim::Victim(std::string const &_name)
{
	std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
	this->name = _name;
	return ;
}

Victim::Victim(Victim const &ref)
{
	*this = ref;
	return ;
}

Victim::~Victim()
{
	std::cout << "The victim " << this->name << " died for no apparent reasons!" << std::endl;
	return ;
}

Victim				&Victim::operator=(Victim const &ref)
{
	this->name = ref.name;
	return *this;
}

std::string			Victim::getName() const
{
	return this->name;
}

void				Victim::introducte() const
{
	std::cout << "I'm " << this->name << " and I like otters!" << std::endl;
	return ;
}

void				Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
	return ;
}

std::ostream		&operator<<(std::ostream &os, Victim const &victim)
{
	os << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return os;
}

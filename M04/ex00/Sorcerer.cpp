/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 13:13:23 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/16 14:31:45 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	return ;
}

Sorcerer::Sorcerer(std::string const &_name, std::string const &_title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
	this->name = _name;
	this->title = _title;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const &ref)
{
	std::cout << ref.name << ", " << ref.title << ", is born!" << std::endl;
	*this = ref;
	return ;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
	return ;
}

Sorcerer			&Sorcerer::operator=(Sorcerer const &ref)
{
	this->name = ref.name;
	this->title = ref.title;
	return *this;
}

std::string			Sorcerer::getName() const
{
	return this->name;
}

std::string			Sorcerer::getTitle() const
{
	return this->title;
}

void				Sorcerer::introducte() const
{
	std::cout << "I am " << this->name << ", " << this->title << ", and i like ponies!" << std::endl;
}

void				Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
	return ;
}

std::ostream		&operator<<(std::ostream &os, Sorcerer const &sorcerer)
{
	os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and i like ponies!" << std::endl;
	return os;
}


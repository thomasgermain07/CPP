/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pumkin.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:37:44 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/16 14:39:20 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pumkin.hpp"

Pumkin::Pumkin() : Victim(NULL)
{
	return ;
}

Pumkin::Pumkin(std::string const &_name) : Victim(_name)
{
	std::cout << "I'm a pumkin i don't make noise" << std::endl;
	return ;
}

Pumkin::Pumkin(Pumkin const &ref) : Victim(ref.getName())
{
	std::cout << "I'm a pumkin i don't make noise" << std::endl;
	return ;
}

Pumkin::~Pumkin()
{
	std::cout << this->getName() << " get back to the dirt" << std::endl;
	return ;
}

Pumkin			&Pumkin::operator=(Pumkin const &ref)
{
	Victim::operator=(ref);
	return *this;
}

void			Pumkin::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a soup!" << std::endl;
	return ;
}

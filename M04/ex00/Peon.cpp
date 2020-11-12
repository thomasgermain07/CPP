/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:19:41 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/12 16:07:20 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() : Victim(NULL)
{
	return ;
}

Peon::Peon(std::string const &_name) : Victim(_name)
{
	std::cout << "Zog zog" << std::endl;
	return ;
}

Peon::Peon(Peon const &ref) : Victim(ref.name)
{
	std::cout << "Zog zog" << std::endl;
	return ;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon			&Peon::operator=(Peon const &ref)
{
	Victim::operator=(ref);
	return *this;
}

void			Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
	return ;
}

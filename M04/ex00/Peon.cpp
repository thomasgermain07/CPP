/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:19:41 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/19 14:38:13 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() : Victim()
{
	return ;
}

Peon::Peon(std::string const &_name) : Victim(_name)
{
	std::cout << "Zog zog" << std::endl;
	return ;
}

Peon::Peon(Peon const &ref)
{
	std::cout << "Zog zog" << std::endl;
	*this = ref;
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

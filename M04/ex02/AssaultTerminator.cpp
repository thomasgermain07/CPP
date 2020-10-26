/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 21:56:03 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/22 22:30:35 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* Teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &ref)
{
	std::cout << "* Teleports from space *" << std::endl;
	*this = ref;
	return;
}

AssaultTerminator			&AssaultTerminator::operator=(AssaultTerminator const &ref)
{
	(void)ref;
	return *this;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back ..." << std::endl;
	return ;
}

ISpaceMarine			*AssaultTerminator::clone() const
{
	AssaultTerminator		*newTac = new AssaultTerminator;
	return newTac;
}

void					AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. Puryfy it!" << std::endl;
	return ;
}

void					AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
	return ;
}

void					AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with a chainfist *" << std::endl;
	return ;
}
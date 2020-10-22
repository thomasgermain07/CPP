/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 21:56:03 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/21 22:19:12 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for action" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const &ref)
{
	std::cout << "Tactical Marine ready for action" << std::endl;
	*this = ref;
	return;
}

TacticalMarine			&TacticalMarine::operator=(TacticalMarine const &ref)
{
	return *this;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

ISpaceMarine			*TacticalMarine::clone() const
{
	TacticalMarine		*newTac = new TacticalMarine;
	return newTac;
}

void					TacticalMarine::battleCry() const
{
	std::cout << "For the Holy PLOT!" << std::endl;
	return ;
}

void					TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
	return ;
}

void					TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainword *" << std::endl;
	return ;
}
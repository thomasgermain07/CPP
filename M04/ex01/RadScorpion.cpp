/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:13:38 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/21 15:02:05 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include "Enemy.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(RadScorpion const &ref)
{
	*this = ref;
	return ;
}

RadScorpion			&RadScorpion::operator=(RadScorpion const &ref)
{
	Enemy::operator=(ref);
	return *this;
}

RadScorpion::~RadScorpion()
{
	bzero((void *)this, sizeof(*this));
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}
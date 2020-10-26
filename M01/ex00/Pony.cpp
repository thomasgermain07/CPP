/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 00:49:01 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/26 01:26:22 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

int	Pony::n_instance = 0;

Pony::Pony()
{
	this->m_name = "Petit Tonnerre";
	this->m_color = "white";
	this->n_instance++;
	return ;
}

Pony::Pony(std::string name, std::string color)
{
	this->m_name = name;
	this->m_color = color;
	this->n_instance++;
	return ;
}

Pony::~Pony()
{
	this->n_instance--;
	std::cout << "Deleting " << this->m_name << std::endl;
	return ;
}

void			Pony::feed_the_pony() const
{
	std::cout << "Giving an apple to " << this->m_name << std::endl;
	return ;
}

void			Pony::presentation() const
{
	std::cout << "I'am a " << this->m_color << " pony named " << this->m_name << std::endl;
	return ;
}
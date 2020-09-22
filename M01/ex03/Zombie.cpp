/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 17:08:36 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/21 16:13:13 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::~Zombie()
{
	std::cout << this->name << " is getting deleted" << std::endl;
	return ;
}

void			Zombie::announce()
{
	std::cout << "Hi !! I'm " << this->name << " a " << this->type << " zombie" << std::endl;
	return ;
}

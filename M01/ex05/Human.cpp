/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:48:26 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/21 22:34:07 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string		Human::identify() const
{
	return this->brain.identify();
}

const Brain		&Human::getBrain() const
{
	return this->brain;
}

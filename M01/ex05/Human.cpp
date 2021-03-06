/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:48:26 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/26 02:16:41 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string		Human::identify() const
{
	return this->brain.identify();
}

Brain const		&Human::getBrain() const
{
	return this->brain;
}

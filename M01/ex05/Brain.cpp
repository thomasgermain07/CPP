/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:47:55 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/26 02:13:51 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>

std::string			Brain::identify() const
{
	const void			*address = this;
	std::stringstream	ss;
	ss << address;
	std::string			string = ss.str();
	return string;
}


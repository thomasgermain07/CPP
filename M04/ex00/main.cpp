/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 14:16:37 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/16 14:40:05 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Pumkin.hpp"
#include <iostream>
#include <sstream>

int				main()
{
	Sorcerer		robert("Robert", "the Magnificent");

	Victim			jim("Jimmy");
	Peon			joe("Joe");
	Pumkin			pum("Pum");

	std::cout << robert << jim << joe << pum;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(pum);

	return 0;
}

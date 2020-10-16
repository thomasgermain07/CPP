/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 14:16:37 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/16 16:56:35 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <iostream>
#include <sstream>

int				main()
{
	Sorcerer	s1("s1", "title 1");
	Peon		p1("p1");
	Victim		v1("v1");

	std::cout << s1 << p1 << v1;

	std::cout << "\nPost test" << std::endl;
	s1.polymorph(p1);
	s1.polymorph(v1);
	std::cout << "Past test\n" << std::endl;

	return 0;
}

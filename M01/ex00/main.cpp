/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 00:49:03 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/20 02:01:13 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void			print_address(Pony *p)
{
	std::cout << p << std::endl;
}


void			ponyOnTheStack()
{
	Pony		p("Tornade", "Grey");

	p.presentation();
	std::cout << "I am allocated in the stack at the address ";
	print_address(&p);
	std::cout << "and my n_instance = " << p.n_instance << std::endl;
	p.feed_the_pony();
	return ;
}

void			ponyOnTheHeap()
{
	Pony		*p = new Pony;

	p->presentation();
	std::cout << "I am allocated in the heap at the address ";
	print_address(p);
	std::cout << "and my n_instance = " << p->n_instance << std::endl;
	p->feed_the_pony();
	delete p;
	return ;
}


int				main()
{
	ponyOnTheStack();
	std::cout << Pony::n_instance << std::endl << std::endl;
	ponyOnTheHeap();
	std::cout << Pony::n_instance << std::endl << std::endl;
	return (0);
}

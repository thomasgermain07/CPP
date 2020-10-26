/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 00:49:03 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/26 01:30:56 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

void			ponyOnTheStack()
{
	Pony		p("Tornade", "Grey");

	p.presentation();
	std::cout << "I am allocated in the stack at the address " << (void *)&p << std::endl;
	std::cout << "And my n_instance = " << p.n_instance << std::endl;
	p.feed_the_pony();
	return ;
}

void			ponyOnTheHeap()
{
	Pony		*p = new Pony;

	p->presentation();
	std::cout << "I am allocated in the heap at the address " << p << std::endl;
	std::cout << "And my n_instance = " << p->n_instance << std::endl;
	p->feed_the_pony();
	std::cout << "\nHere i call a PonyOnTheStack inside ponyOnTheHeap\n" << std::endl;
	ponyOnTheStack();
	std::cout << "We see that we get 2 instances and 1 has been deleted when left the scope of the function" << std::endl;
	std::cout << "Current n_instance = " << p->n_instance << "\n" << std::endl;
	std::cout << "Deleting the pony with delete" << std::endl;
	delete p;
	return ;
}

int				main()
{
	ponyOnTheStack();
	std::cout << "After calling PonyOnTheStack n_instance = " << Pony::n_instance << std::endl << std::endl;
	ponyOnTheHeap();
	std::cout << "\nAt the end n_instance = " << Pony::n_instance << std::endl << std::endl;
	return (0);
}

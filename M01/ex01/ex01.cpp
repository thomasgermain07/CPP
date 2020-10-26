/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 02:05:15 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/26 01:35:40 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void			memoryLeak()
{
	std::string*			panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;
	delete panthere;
}

int				main()
{
	memoryLeak();
	system("leaks a.out");
	return 0;
}

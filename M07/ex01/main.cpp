/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 04:40:42 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/19 02:43:19 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "iter.hpp"

/* *** Testing function to send in param *** */
template<typename T>
void		print(T &arg)
{
	std::cout << arg << std::endl;
}

void		addOne(int &v)
{
	std::cout << v++ << " -> ";
	std::cout << v <<  std::endl;
}

template<typename T>
void		doubleV(T &v)
{
	std::cout << v << " -> ";
	v = v * 2;
	std::cout << v <<  std::endl;
}
/* *** *** *** */

int				main()
{
	int				iArray[3] = {0, 1, 2};
	char			cArray[5] = {'s', 'a', 'l', 'u', 't'};
	std::string 	strArray[3] = {"bonjour", "ce sont des strings", "au revoir"};
	Fixed			fixedArray[4] = {12, 0, -14, 42.42f};
	int				*iNull= NULL;

	std::cout << "\t---> Int Array with func print" << std::endl;
	::iter(iArray, 3, &print);
	std::cout << "\t---> Int Array with func addOne" << std::endl;
	::iter(iArray, 3, &addOne);
	std::cout << "\t---> Int Array with func print" << std::endl;
	::iter(iArray, 3, &print);
	std::cout << "\t---> Char Array with func print" << std::endl;
	::iter(cArray, 5, &print);
	std::cout << "\t---> String Array with func print" << std::endl;
	::iter(strArray, 3, &print);
	std::cout << "\t---> Fixed Array with func print" << std::endl;
	::iter(fixedArray, 4, &print);
	std::cout << "\t---> Fixed Array with func doubleV" << std::endl;
	::iter(fixedArray, 4, &doubleV);
	std::cout << "\t---> Null pointer with fun print" << std::endl;
	::iter(iNull, 4, print);

	return 0;
}
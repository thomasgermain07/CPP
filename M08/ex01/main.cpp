/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 06:29:45 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/19 20:37:31 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <fcntl.h>
#include "Span.hpp"

int			main(int ac, char **av)
{
	(void)ac;
	(void)av;
	srand(time(NULL));

	std::cout << "\t---> Span with 15 values" << std::endl;
	Span			s(15);

	for (int i = 0; i < 15; i++)
			s.addNumber(rand() % 30);
	std::cout << s << std::endl;
	std::cout << "shortest value is = " << s.shortestSpan() << std::endl;
	std::cout << "longest value is = " << s.longestSpan() << std::endl;

	std::cout << "\nPress enter to continue to the 150'000 values test" << std::endl;
	std::cin.get();

	std::cout << "\t---> Span with 150'000 values" << std::endl;

	std::ofstream			of;
	Span					s2(150000);
	for (int i = 0; i < 150000; i++)
			s2.addNumber(rand() % 300000);

	of.open("result.txt");
	of << s2 << std::endl;
	of.close();

	std::cout << "shortest value is = " << s2.shortestSpan() << std::endl;
	std::cout << "longest value is = " << s2.longestSpan() << std::endl;
	std::cout << "Printing the number of elem in the Span : " << std::endl;
	system("cat result.txt | grep -o , | wc -l");
	return 0;
}
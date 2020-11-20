/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 06:29:45 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/20 22:21:02 by thgermai         ###   ########.fr       */
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
	Span			s(10);

	for (int i = 0; i < 10; i++)
			s.addNumber(rand() % 3000);

	std::cout << s << std::endl;
	std::cout << "shortest span is = " << s.shortestSpan() << std::endl;
	std::cout << "longest span is = " << s.longestSpan() << std::endl;

	std::cout << "\t---> Span with 0 values" << std::endl;
	Span			s2;

	try
	{
		s2.addNumber(12);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		s2.addNumber(5, 12, 12);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nPress enter to continue to the 150'000 values test" << std::endl;
	std::cin.get();

	std::cout << "\t---> Span with 150'000 values" << std::endl;

	std::ofstream			of;
	Span					s3(150000);

	s3.addNumber(0, 70000, -20);
	s3.addNumber(70000, 130000, 10);
	s3.addNumber(130000, 149999, 42);

	of.open("result.txt");
	of << s3 << std::endl;
	of.close();

	std::cout << "shortest span is = " << s3.shortestSpan() << std::endl;
	std::cout << "longest span is = " << s3.longestSpan() << std::endl;
	std::cout << "Number of element in Span : " << s3.size() << std::endl;
	return 0;
}
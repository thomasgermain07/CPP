/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 21:36:26 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/18 04:37:53 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Whatever.hpp"
#include "Fixed.hpp"


static void		testSwap()
{
	std::string s1 = "salut";
	std::string s2 = "bonsoir";

	int			i = 10;
	int			j = 20;

	float		f1 = 101.123f;
	float		f2 = 42.42f;

	std::cout << "swap :  ";
	std::cout << s1 << " " << s2 << std::endl;
	::swap(s1, s2);
	std::cout << "\t" << s1 << " " << s2 << std::endl;

	std::cout << "swap :  ";
	std::cout << i << " " << j << std::endl;
	::swap(i, j);
	std::cout << "\t" << i << " " << j << std::endl;

	std::cout << "swap :  ";
	std::cout << f1 << " " << f2 << std::endl;
	::swap(f1, f2);
	std::cout << "\t" << f1 << " " << f2 << std::endl;
}

static void		testMin()
{
	std::string s1 = "salut";
	std::string s2 = "bonsoir";

	int			i = 10;
	int			j = 20;

	float		f1 = 101.123f;
	float		f2 = 42.42f;

	std::cout << "min value : " << ::min(s1, s2) << std::endl;
	std::cout << "min value : " << ::min(i, j) << std::endl;
	std::cout << "min value : " << ::min(f1, f2) << std::endl;
}

static void		testMax()
{
	std::string s1 = "salut";
	std::string s2 = "bonsoir";

	int			i = 10;
	int			j = 20;

	float		f1 = 101.123f;
	float		f2 = 42.42f;

	std::cout << "max value : " << ::max(s1, s2) << std::endl;
	std::cout << "max value : " << ::max(i, j) << std::endl;
	std::cout << "max value : " << ::max(f1, f2) << std::endl;
}

static void		customClass()
{
	Fixed		f1 = 12;
	Fixed		f2 = 8;

	std::cout << "min value : " << ::min<Fixed>(f1, f2) << std::endl;
	std::cout << "max value : " << ::max<Fixed>(f1, f2) << std::endl;

	std::cout << "swap :  ";
	std::cout << f1 << " " << f2 << std::endl;
	::swap<Fixed>(f1, f2);
	std::cout << "\t" << f1 << " " << f2 << std::endl;
}

int				main()
{
	std::cout << "\t---> Test Swap function" << std::endl;
	testSwap();
	std::cout << "\n\t---> Test Min function" << std::endl;
	testMin();
	std::cout << "\n\t---> Test Min function" << std::endl;
	testMax();
	std::cout << "\n\t---> Test all functions with custom class" << std::endl;
	customClass();

	return 0;
}
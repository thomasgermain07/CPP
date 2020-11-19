/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 04:40:42 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/19 02:28:31 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int				main()
{
	srand(time(NULL));

	Array<int>   	a(12);
	for (int i = 0; i < 12; i++)
		a[i] = rand() % 20;

	Array<int>  	x(8);
	for (int i = 0; i < 8; i++)
		x[i] = rand() % 20;

	Array<float>	b(3);
	b[0] = 42.42f;
	b[1] = 120.41f;
	b[2] = 0.12f;

	Array<std::string>	strs(3);
	strs[0] = "Salut";
	strs[1] = "comment";
	strs[2] = "vas tu";

	Array< Array<int> >		matrix(2);
	matrix[0] = a;
	matrix[1] = x;

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "strs is " << strs << std::endl;
	std::cout << "matrix is " << matrix << std::endl;

	std::cout << "a size = " << a.size() << std::endl;
	std::cout << "b size = " << b.size() << std::endl;
	std::cout << "strs size = " << strs.size() << std::endl;
	std::cout << "matrix size = " << matrix.size() << std::endl;

	std::cout << "\n\t--->Try to access over the range of an Array" << std::endl;
	try
	{
		std::cout << "Try to access b[213] : ";
		b[213] = 2;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n\t--->Assigning array to another" << std::endl;
	std::cout << "x = " << x << "\nnow x = a" << std::endl;
	x = a;
 	std::cout << "x is " << x << std::endl;
	std::cout << "a is " << a << std::endl;

	std::cout << "\n\t--->Create a default array" << std::endl;
	Array<int>		p;
	std::cout << p << std::endl;

	std::cout << "\n\t--->Create an array of 5 int with no value inside" << std::endl;
	Array<int>		r(5);
	std::cout << r << std::endl;

	std::cout << "\n\t--->Create an array of const int and try modifie it" << std::endl;
	Array<const int>	constA(x);
	std::cout << constA << std::endl;
	std::cout << "Access on constA values enable in reading only -> constA[2] = " << constA[2] << std::endl;
	// constA[2] = 8; // This line is commented cause it would cause an error compilation

	return 0;
}
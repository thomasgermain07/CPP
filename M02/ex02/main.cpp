/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 01:39:49 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/30 13:38:14 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int				main()
{
	Fixed		f1 = 10;
	Fixed		f2 = 2.2f;
	Fixed		f3 = 8;
	Fixed		f0;

	std::cout << "Calcule test" << std::endl;
	{
		Fixed result = f1 + f2;
		std::cout << f1 << " + " << f2 << " = " << result << std::endl;

		result = f1 - f2;
		std::cout << f1 << " - " << f2 << " = " << result << std::endl;

		result = f1 * f2;
		std::cout << f1 << " * " << f2 << " = " << result << std::endl;

		result = f1 / f2;
		std::cout << f1 << " / " << f2 << " = " << result << std::endl;

		result = f1 - f2 + f3;
		std::cout << f1 << " - " << f2 << " + " << f3 << " = " << result << std::endl;
	}

	std::cout << "\nMax Min test" << std::endl;
	std::cout << Fixed::min(f1, f3) << std::endl;
	std::cout << Fixed::max(f1, f3) << std::endl;

	std::cout << "\nIncrementation test" << std::endl;
	std::cout << f0++ << " " << f0 << std::endl;
	std::cout << f0-- << " " << f0 << std::endl;
	std::cout << ++f0 << " " << f0 << std::endl;
	std::cout << --f0 << " " << f0 << std::endl;

	std::cout << f1++ << " " << f1 << std::endl;
	std::cout << f1-- << " " << f1 << std::endl;
	std::cout << ++f1 << " " << f1 << std::endl;
	std::cout << --f1 << " " << f1 << std::endl;

	return 0;
}

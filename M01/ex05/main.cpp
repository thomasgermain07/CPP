/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:48:02 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/21 22:38:23 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"
#include "Brain.hpp"

int				main()
{
	Human		bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:24:24 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/26 02:10:56 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int				main()
{
	std::string		string = "HI THIS IS BRAIN";
	std::string		*ptr = &string;
	std::string		&ref = string;

	std::cout << "ptr : " << *ptr << std::endl;
	std::cout << "ref : " << ref << std::endl;
	return 0;
}

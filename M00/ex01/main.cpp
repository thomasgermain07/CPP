/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 00:38:26 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/19 22:23:17 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhoneBook.hpp"
#include <iostream>
#include <string>

int				main(void)
{
	PhoneBook		phoneBook;
	std::string		buffer;

	while (1)
	{
		std::cout << "Enter a command : ADD, SEARCH, EXIT" << std::endl;
		getline(std::cin, buffer);
		if (!buffer.compare("ADD"))
			phoneBook.add_contact();
		else if (!buffer.compare("SEARCH"))
			phoneBook.search_contact();
		else if (!buffer.compare("EXIT"))
			break ;
		else
			std::cout << "Wrong command" << std::endl;
	}
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 16:04:18 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/19 23:01:35 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhoneBook.hpp"
#include "ClassContact.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook()
{
	n_contact = 0;
	return ;
}

void			PhoneBook::add_contact()
{
	if (n_contact == 8)
	{
		std::cout << "PhoneBook is full. Can't add contact anymore.";
		return ;
	}
	contacts[n_contact].create_contact();
	n_contact++;
	return ;
}

static void		display_line(std::string str)
{
	if (str.size() > 10)
		std::cout << str.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << str << "|";
	return ;
}

void			PhoneBook::search_contact()
{
	int			index;

	std::cout << "     index|first name| last name|     login|" << std::endl;
	for (int i = 0; i < n_contact; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		display_line(contacts[i].info[Contact::first_name]);
		display_line(contacts[i].info[Contact::last_name]);
		display_line(contacts[i].info[Contact::login]);
		std::cout << std::endl;
	}
	std::cout << "Select index" << std::endl;
	while (1)
	{
		std::cin >> index;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		if (index > 0 && index <= n_contact)
		{
			std::cout << std::endl;
			contacts[index - 1].get_info();
			return ;
		}
		else
			std::cout << "Invalid input" << std::endl;
	}
	std::cout << "Back to main menu\n" << std::endl;
	return ;
}

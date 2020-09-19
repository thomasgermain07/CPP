/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 15:49:25 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/19 22:22:03 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"
#include <iostream>

std::string		labels[11] =
{
	"first name",
	"last name",
	"nickname",
	"login",
	"postal address",
	"email address",
	"phone number",
	"birthday date",
	"favorite meal",
	"underwear color",
	"darkest secret"
};

void			Contact::get_info()
{
	for (int i = 0; i < 11; i++)
		std::cout << labels[i] << " : " << info[i] << std::endl;
	std::cout << std::endl;
	return ;
}

void			Contact::create_contact()
{
	std::string		buff;

	std::cout << "Conctact Creation :" << std::endl;
	for (int i = 0; i < 11; i++)
	{
		std::cout << "Please enter " << labels[i] << std::endl;
		getline(std::cin, buff);
		if (!buff.compare(""))
		{
			std::cout << "Invalid input" << std::endl;
			i--;
		}
		else
			info[i] = buff;
	}
	std::cout << info[first_name] << " " << info[last_name] << " created successfully !\n" << std::endl;
	return ;
}


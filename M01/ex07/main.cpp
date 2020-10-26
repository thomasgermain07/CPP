/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 16:08:07 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/26 02:35:51 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#define SYNTAX_ERR "Error: replace: syntax [Filename, string1, string2]"
#define EMPTY_ERR "Error: replace: parameter can't be empty"
#define NO_FILE_ERR "Error: replace: file doesn't exist"
#define OPEN_ERR "Error: replace: opening file failed"

static int		err_handle(std::string err)
{
	std::cerr << err << std::endl;
	return EXIT_FAILURE;
}

static int		check_param(const int ac, const char **av)
{
	if (ac != 4)
		return err_handle(SYNTAX_ERR);
	for (int i = 1; i < 4; i++)
	{
		std::string		str = av[i];
		if (!str.size())
			return err_handle(EMPTY_ERR);
	}
	return EXIT_SUCCESS;
}

std::string		replace_name(std::string filename)
{
	size_t			find;

	find = filename.find_last_of(".");
	if (find != std::string::npos)
		filename.replace(find, 9 ,".replace");
	else
		filename.append(".replace");
	return filename;
}

int				main(int ac, const char **av)
{
	std::ifstream		input;
	std::ofstream		output;
	std::string			buff;

	if (check_param(ac, av))
		return EXIT_FAILURE;
	input.open(av[1]);
	if (input.fail())
		return err_handle(NO_FILE_ERR);
	output.open(replace_name(av[1]));
	if (output.fail())
		return err_handle(OPEN_ERR);
	while (getline(input, buff))
	{
		while (buff.find(av[2]) != std::string::npos)
			buff.replace(buff.find(av[2]), strlen(av[2]), av[3]);
		output << buff << std::endl;
	}
	input.close();
	output.close();
	return EXIT_SUCCESS;
}

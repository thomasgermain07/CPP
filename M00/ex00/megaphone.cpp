/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 22:51:38 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/19 15:16:52 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int			main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AN UNBREARABLE FEEDNBACK NOISE *\n";
	else
	{
		for (int i = 1; av[i]; i++)
		{
			for (int j = 0; av[i][j]; j++)
				av[i][j] = toupper(av[i][j]);
			if (i == ac - 1)
				std::cout << av[i] << std::endl;
			else
				std::cout << av[i] << ' ';
		}
	}
	return 0;
}

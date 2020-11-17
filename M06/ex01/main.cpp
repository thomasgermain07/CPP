/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 06:50:27 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/17 12:14:07 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct		Data
{
	std::string		s1;
	int				n;
	std::string		s2;
};

void			*serialize(void)
{
	char			*ptr = new char[20];
	std::string 	randomValue = "abcdefghijklmnopqrstuvwxyz0123456789";
	int				*iptr = (int *)(ptr + 8);
 	char			*s2 = &ptr[12];

	*iptr = rand();

	for (int i = 0; i < 8; i++)
	{
		ptr[i] = randomValue.at(rand() % 36);
		s2[i] = randomValue.at(rand() % 36);
	}

	return static_cast<void *>(ptr);
}

Data			*deserialize(void *raw)
{
	Data		*data = new Data;
	char		*ptr = reinterpret_cast<char *>(raw);
	int			*iptr;

	iptr = reinterpret_cast<int *>(ptr + 8);
	data->s1 = reinterpret_cast<char *>(ptr);
	data->s1 = data->s1.substr(0, 8);
	data->n = *iptr;
	data->s2 = reinterpret_cast<char *>((ptr + 12));

	return data;
}

int				main()
{
	srand(time(NULL));

	void		*raw;
	Data		*d;

	raw = serialize();
	d = deserialize(raw);

	std::cout << d->s1 << std::endl;
	std::cout << d->n << std::endl;
	std::cout << d->s2 << std::endl;
	return 0;
}
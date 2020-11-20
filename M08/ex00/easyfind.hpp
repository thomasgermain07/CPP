/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 05:33:56 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/20 13:18:00 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND
# define EASYFIND

# include <iostream>
# include <list>
# include <vector>
# include <deque>
# include <iterator>
# include <algorithm>

struct			NoFoundValueException : std::exception
{
	virtual const char	*what() const throw()
	{
		return "Didnt find the value";
	}
};

struct			EmptyContainerException : std::exception
{
	virtual const char	*what() const throw()
	{
		return "Container is empty";
	}
};

template<typename T>
typename T::iterator		easyfind(T &cont, int const value)
{
	typename T::iterator	it;

	if (cont.empty())
		throw EmptyContainerException();
	it = find(cont.begin(), cont.end(), value);
	if (it == cont.end())
		throw NoFoundValueException();
	return it;
}

#endif
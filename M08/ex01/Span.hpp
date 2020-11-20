/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 06:29:34 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/19 13:08:19 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN
# define SPAN

# include <iostream>
# include <vector>
# include <utility>

class		Span
{
	public:
		Span();
		Span(unsigned int const N);
		Span(Span const &ref);
		~Span();
		Span 					&operator=(Span const &ref);

		int						getCapacity() const;
		std::vector<int>		getTab() const;

		void					addNumber(int const value);

		int						shortestSpan() const;
		int						longestSpan() const;

		struct			FullArrayException : std::exception
		{
			virtual const char	*what() const throw();
		};

		struct			NotEnoughValueException : std::exception
		{
			virtual const char	*what() const throw();
		};

	private :
		std::vector<int>		tab;
		int						capacity;
};

std::ostream 				&operator<<(std::ostream &os, Span const &ref);

#endif
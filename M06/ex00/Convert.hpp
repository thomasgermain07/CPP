/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 15:21:54 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/15 23:45:07 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT
# define CONVERT

# include <iostream>
# include <limits>
# include <iomanip>
# include <math.h>

class		Convert
{
	public:
		Convert();
		Convert(std::string const &_value);
		Convert(Convert const &ref);
		~Convert();
		Convert 			&operator=(Convert const &ref);

		double				getValue() const;

		struct 				ImpossibleConversionException : std::exception
		{
			virtual const char *what() const throw();
		};

	private :
		double				value;
};

std::ostream 				&operator<<(std::ostream &os, Convert const &ref);

#endif
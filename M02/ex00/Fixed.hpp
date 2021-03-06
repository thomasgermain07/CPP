/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 01:28:22 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/31 10:30:07 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
# define FIXED

class		Fixed
{
	public :
		Fixed();
		Fixed(Fixed const &ref);
		Fixed				&operator=(Fixed const &ref);
		~Fixed();
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
	private :
		int					fixedPointValue;
		static const int	n_bits = 8;
};

#endif

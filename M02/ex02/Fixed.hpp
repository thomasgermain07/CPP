/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 01:28:22 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/30 13:28:20 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED
# define FIXED

#include <iostream>

class		Fixed
{
	public :
		Fixed();
		Fixed(int const n);
		Fixed(float const n);
		Fixed(Fixed const &ref);
		~Fixed();

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		int					toInt(void) const;
		float				toFloat(void) const;

		Fixed				&operator=(Fixed const &ref);
		bool				operator<(Fixed const &f2) const;
		bool				operator<=(Fixed const &f2) const;
		bool				operator>(Fixed const &f2) const;
		bool				operator>=(Fixed const &f2) const;
		bool				operator==(Fixed const &f2) const;
		bool				operator!=(Fixed const &f2) const;

		Fixed				operator+(Fixed const &f2) const;
		Fixed				operator-(Fixed const &f2) const;
		Fixed				operator*(Fixed const &f2) const;
		Fixed				operator/(Fixed const &f2) const;

		Fixed				&operator++();
		Fixed				operator++(int);
		Fixed				&operator--();
		Fixed				operator--(int);

		static Fixed const	&min(Fixed const &f1, Fixed const &f2);
		static Fixed const	&max(Fixed const &f1, Fixed const &f2);

	private :
		int					fixedPointValue;
		static const int	n_bits = 8;
};

std::ostream		&operator<<(std::ostream &stream, Fixed const &ref);
Fixed const			&min(Fixed const &f1, Fixed const &f2);
Fixed const			&max(Fixed const &f1, Fixed const &f2);

#endif

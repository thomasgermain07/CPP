/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 01:28:22 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/31 10:55:59 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <tgmath.h>

Fixed::Fixed()
{
	this->fixedPointValue = 0;
	return ;
}

Fixed::Fixed(Fixed const &ref)
{
	*this = ref;
	return ;
}

Fixed::Fixed(int const n)
{
	this->fixedPointValue = n << this->n_bits;
	return ;
}

Fixed::Fixed(float const f)
{
	this->fixedPointValue = roundf(f * (1 << this->n_bits));
	return ;
}

Fixed::~Fixed()
{
	return ;
}


///////////////////////////// Member function ////////////////////////////////


int				Fixed::getRawBits(void) const
{
	return this->fixedPointValue;
}

void			Fixed::setRawBits(int const raw)
{
	this->fixedPointValue = raw;
	return ;
}

int				Fixed::toInt(void) const
{
	return this->fixedPointValue >> this->n_bits;
};

float			Fixed::toFloat(void) const
{
	return (float)this->fixedPointValue / (1 << this->n_bits);
};


///////////////////// Overload Operator ////////////////////////////////////////


Fixed			&Fixed::operator=(Fixed const &ref)
{
	this->fixedPointValue = ref.getRawBits();
	return *this;
}

bool			Fixed::operator<(Fixed const &f2) const
{
	if (this->getRawBits() < f2.getRawBits())
		return true;
	return false;
};

bool			Fixed::operator<=(Fixed const &f2) const
{
	if (this->getRawBits() <= f2.getRawBits())
		return true;
	return false;
};

bool			Fixed::operator>(Fixed const &f2) const
{
	if (this->getRawBits() > f2.getRawBits())
		return true;
	return false;
};

bool			Fixed::operator>=(Fixed const &f2) const
{
	if (this->getRawBits() >= f2.getRawBits())
		return true;
	return false;
};

bool			Fixed::operator==(Fixed const &f2) const
{
	if (this->getRawBits() == f2.getRawBits())
		return true;
	return false;
};

bool			Fixed::operator!=(Fixed const &f2) const
{
	if (this->getRawBits() != f2.getRawBits())
		return true;
	return false;
};

std::ostream	&operator<<(std::ostream &stream, Fixed const &ref)
{
	stream << ref.toFloat();
	return stream;
}

Fixed			Fixed::operator+(Fixed const &ref) const
{
	Fixed		newFixed;
	int			newFixedValue;

	newFixedValue = this->getRawBits() + ref.getRawBits();
	newFixed.setRawBits(newFixedValue);
	return newFixed;
}

Fixed			Fixed::operator-(Fixed const &ref) const
{
	Fixed		newFixed;
	int			newFixedValue;

	newFixedValue = this->getRawBits() - ref.getRawBits();
	newFixed.setRawBits(newFixedValue);
	return newFixed;
}

Fixed			Fixed::operator*(Fixed const &ref) const
{
	Fixed		newFixed;
	int			newFixedValue;

	newFixedValue = this->toFloat() * (float)ref.getRawBits();
	newFixed.setRawBits(newFixedValue);
	return newFixed;
}

Fixed			Fixed::operator/(Fixed const &ref) const
{
	Fixed		newFixed;
	int			newFixedValue;
	Fixed		dividor;

	newFixedValue = roundf((this->toFloat() / ref.toFloat()) * (1 << ref.n_bits));
	newFixed.setRawBits(newFixedValue);
	return newFixed;
}

///////////////////// Non member function  ////////////////////////////////////////

Fixed const			&min(Fixed const &f1, Fixed const &f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

Fixed const			&Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1 < f2)
		return f1;
	return f2;
}

Fixed const			&max(Fixed const &f1, Fixed const &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}

Fixed const			&Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1 > f2)
		return f1;
	return f2;
}

Fixed				&Fixed::operator++()
{
	if (fixedPointValue > (1 << n_bits))
		fixedPointValue += (1 << n_bits);
	return *this;
}

Fixed				Fixed::operator++(int)
{
	Fixed			temp;

	temp = *this;
	if (fixedPointValue > (1 << n_bits))
		++*this;
	return temp;
}

Fixed				&Fixed::operator--()
{
	if (fixedPointValue > (1 << n_bits))
		fixedPointValue -= (1 << n_bits);
	return *this;
}

Fixed				Fixed::operator--(int)
{
	Fixed			temp;

	temp = *this;
	if (fixedPointValue > (1 << n_bits))
		--*this;
	return temp;
}

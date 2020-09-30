/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 01:28:22 by thgermai          #+#    #+#             */
/*   Updated: 2020/09/27 22:43:43 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <tgmath.h>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPointValue = 0;
	return ;
}

Fixed::Fixed(Fixed const &ref)
{
	std::cout << "Copy constructor called" << std::endl;
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
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed			&Fixed::operator=(Fixed const &ref)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixedPointValue = ref.getRawBits();
	return *this;
}

int				Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
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

float				Fixed::toFloat(void) const
{
	return (float)this->fixedPointValue / (1 << this->n_bits);
};

std::ostream		&operator<<(std::ostream &stream, Fixed const &ref)
{
	stream << ref.toFloat();
	return stream;
}

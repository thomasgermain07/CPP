/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 15:21:52 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/16 00:33:44 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
	return ;
}

Convert::Convert(std::string const &_value)
{
	if (_value.size() == 1 && !isnumber(_value.at(0)))
	{
		if (!isprint(_value.at(0)))
			throw Convert::ImpossibleConversionException();
		this->value = _value.at(0);
	}
	else
	{
		try
		{
			this->value = std::stod(_value);
		}
		catch (std::exception const &e)
		{
			throw Convert::ImpossibleConversionException();
		}
	}
	return ;
}

Convert::Convert(Convert const &ref)
{
	*this = ref;
	return ;
}

Convert					&Convert::operator=(Convert const &ref)
{
	this->value = ref.value;
	return *this;
}

Convert::~Convert()
{
	return ;
}

double					Convert::getValue() const
{
	return this->value;
}

const char				*Convert::ImpossibleConversionException::what() const throw()
{
	return "Impossible convertion, type passed in parameter isn't a numerical representation";
}

std::ostream			&operator<<(std::ostream &os, Convert const &ref)
{
	int				iValue = static_cast<int>(ref.getValue());

	/* *** print char *** */
	if (iValue <= std::numeric_limits<char>::max() &&
		iValue >= std::numeric_limits<char>::lowest())
	{
		if (isprint(iValue))
			os << "char = '" << static_cast<char>(iValue) << "'" << std::endl;
		else
			os << "char = non displayable" << std::endl;
	}
	else
		os << "char = impossible" << std::endl;

	/* *** print int *** */
	if (ref.getValue() <= static_cast<double>(std::numeric_limits<int>::max()) &&
		ref.getValue() >= static_cast<double>(std::numeric_limits<int>::lowest()))
		os << "int = " << iValue << std::endl;
	else
		os << "int = impossible" << std::endl;

	/* *** set format for float and double *** */
	os << std::fixed << std::setprecision(2);

	/* *** print float *** */
	if (ref.getValue() <= static_cast<double>(std::numeric_limits<float>::max()) &&
		ref.getValue() >= static_cast<double>(std::numeric_limits<float>::lowest()))
		os << "float = " << static_cast<float>(ref.getValue()) << "f" << std::endl;
	else if (isinf(ref.getValue()) || isnan(ref.getValue()))
		os << "float = " << static_cast<float>(ref.getValue()) << "f" << std::endl;
	else
		os << "float = impossible" << std::endl;
	/* *** print double *** */
	os << "double = " << ref.getValue() << std::endl;

	return os;
}
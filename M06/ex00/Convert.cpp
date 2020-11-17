/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 15:21:52 by thgermai          #+#    #+#             */
/*   Updated: 2020/11/17 12:10:19 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <cstdlib>

Convert::Convert()
{
	return ;
}

Convert::Convert(std::string const &_value)
{
	unsigned long	i = 0;
	std::string		str;
	char			*endptr = NULL;

	if (_value.size() > 1)
	{
		if (_value.find_first_not_of(' ') == std::string::npos)
			throw Convert::ImpossibleConversionException();
		str = &_value.at(_value.find_first_not_of(' '));
	}
	else
		str = _value;
	if (str.size() == 1 && !isdigit(str.at(0)))
	{
		if (!isprint(str.at(0)))
			throw Convert::ImpossibleConversionException();
		this->value = str.at(0);
	}
	else
	{
		if ((i = str.find('.')) != std::string::npos &&
			str.find('.', i + 1) != std::string::npos)
			throw Convert::ImpossibleConversionException();
		if (i == str.size() - 1 || str.at(i + 1) == 'f' || i == 0)
			throw Convert::ImpossibleConversionException();
		this->value = std::strtod(str.c_str(), &endptr);
		if ((*endptr && *endptr != 'f') || (*endptr && endptr[1]))
			throw Convert::ImpossibleConversionException();
		if (*endptr == 'f' && i == std::string::npos && !isinf(this->value) && !isnan(this->value))
			throw Convert::ImpossibleConversionException();
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
	os << std::fixed << std::setprecision(1);

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
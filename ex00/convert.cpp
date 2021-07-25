/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 09:59:41 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/23 09:23:41 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

/* **************************** Coplien ******************************* */

// Default Constructor
Convert::Convert(std::string value) : _Value(value)
{
	
}

// Copy Constructor
Convert::Convert(const Convert &src)
{
	*this = src;
}

// Destructor
Convert::~Convert()
{
	
}

// Assignment Operator
Convert &Convert::operator=(const Convert &rhs)
{
	if (this != &rhs)
		_Value = rhs._Value;
	return (*this);
}

/* ***************************** Methods ****************************** */

float Convert::toFloat()
{
	float valueFloat = atof(_Value.c_str()); // string to double
	return (valueFloat);
}

char Convert::toChar()
{
	char charValue = static_cast<char>(toFloat()); // float to char
	return (charValue);
}

int Convert::toInt()
{
	return (static_cast<int>(toFloat())); // float to int
}

double Convert::toDouble()
{
	return (static_cast<double>(toFloat()));
}

void Convert::convert()
{
	if (toFloat() < std::numeric_limits<char>::min() || toFloat() > std::numeric_limits<char>::max() || isnan(toFloat()))
		std::cout << RED << "char: impossible" << RESET << std::endl;
	else if (isprint(toChar()))
		std::cout << BLUE << "char: '" << toChar() << "'" << RESET << std::endl;
	else
		std::cout << RED << "char: Non displayable" << RESET << std::endl;

	if (toFloat() < std::numeric_limits<int>::min() || toFloat() > std::numeric_limits<int>::max() || isnan(toFloat()))
		std::cout << RED << "int: impossible" << RESET << std::endl;
	else
		std::cout << BLUE << "int: " << toInt() << RESET << std::endl;
		
	if (toFloat() - toInt() == 0)
	{
		std::cout << BLUE << "float: " << toFloat() << ".0" << "f" << RESET << std::endl;
		std::cout << BLUE << "double: " << toDouble() << ".0" << RESET << std::endl;
	}
	else
	{
		std::cout << BLUE << "float: " << toFloat() << "f" << RESET << std::endl;
		std::cout << BLUE << "double: " << toDouble() << RESET << std::endl;
	}
}

/* ******************************************************************** */

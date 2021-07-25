/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 09:59:52 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/23 09:22:07 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <cstring>
#include <math.h>

class Convert
{
	public:
		/* **************************** Coplien ******************************* */
		Convert(std::string value);				// Default Constructor
		Convert(const Convert &src);            // Copy Constructor
		~Convert();                             // Destructor
		Convert &operator=(const Convert &rhs); // Assignment Operator
		/* ***************************** Methods ****************************** */
		float toFloat();
		char toChar();
		void convert();
		int toInt();
		double toDouble();
		/* ******************************************************************** */

	private:
		std::string _Value;
};

/* **************************** Color ******************************* */
#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"
/* ******************************************************************** */

#endif
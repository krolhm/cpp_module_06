/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 18:32:40 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/25 18:51:40 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstring>

class Base
{
	public:
		virtual ~Base(){};
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base *generate();
void identify_from_pointer(Base *p);
void identify_from_reference(Base &p);

/* **************************** Color ******************************* */
#define RESET "\033[0m"
#define BOLD "\033[1m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PINK "\033[35m"
/* ******************************************************************** */

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 18:33:07 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/25 19:01:07 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.hpp"

Base *generate()
{
	int a = rand() % 3;
	
	if (a == 0)
		return (new A);
	else if (a == 1)
		return (new B);
	else if (a == 2)
		return (new C);
		
	return (NULL);
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << BOLD GREEN << "A" << RESET << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << BOLD GREEN << "B" << RESET << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << BOLD GREEN  << "C" << RESET << std::endl;
	else
		std::cout << BOLD RED << "Pas de Type !" << RESET << std::endl;
}

void identify_from_reference(Base &p)
{
	try
	{
		A &		a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << BOLD GREEN << "A" << RESET << std::endl;
	}
	catch (const std::exception &e)
	{
		(void)(e);
	}
	try
	{
		B &		b = dynamic_cast<B &>(p);
		(void)(b);
		std::cout << BOLD GREEN << "B" << RESET << std::endl;
	}
	catch (const std::exception &e)
	{
		(void)e;
	}
	try
	{
		C &		c = dynamic_cast<C &>(p);
		(void)(c);
		std::cout << BOLD GREEN << "C" << RESET << std::endl;
	}
	catch (const std::exception &e)
	{
		(void)e;
	}
}
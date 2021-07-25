/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 09:28:32 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/25 18:29:01 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int main()
{
	Data *data = new Data;

	std::cout << "adresse data: " << data << std::endl;
	std::cout << "après serialization : " << serialize(data) << std::endl;
	std::cout << "après déserialization: " << deserialize(serialize(data)) << std::endl;

	// std::cout << sizeof(*data) << std::endl;

	delete data;

	return (0);
}
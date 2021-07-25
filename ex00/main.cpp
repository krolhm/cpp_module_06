/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 12:14:54 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/22 10:26:15 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int argc, char* argv[])
{
    if (argc != 2)
        std::cout << RED << "Error: Bad arguments" << RESET << std::endl;
    else {
        Convert value(argv[1]);
        value.convert();
    }

    return (0);
}
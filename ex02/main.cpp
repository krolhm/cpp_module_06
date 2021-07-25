/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 18:32:18 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/25 18:57:20 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.hpp"

int main()
{
    srand(time(NULL));

    Base *base = generate();

    identify_from_pointer(base);

    identify_from_reference(*base);
    
    delete base;

    return (0);
}
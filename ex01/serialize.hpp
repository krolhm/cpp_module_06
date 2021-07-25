/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 09:28:17 by rbourgea          #+#    #+#             */
/*   Updated: 2021/07/25 18:27:36 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <cstring>

typedef struct s_Data
{
    int test1;
    float test2;
    char value3;
    std::string test4;

} Data;

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 01:01:29 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/19 18:15:05 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <stdint.h>
#include "Data.hpp"

int	main(void)
{
	{
		Data		data;
		uintptr_t	raw;
		Data		*data_ptr;

		data.a = 'a';
		data.b = 42;
		data.c = 42.42;
		raw = serialize(&data);
		data_ptr = deserialize(raw);
		std::cout
			<< data << std::endl
			<< *data_ptr << std::endl;
		if (&data != data_ptr)
			return (1);
	}
	{
		Data		*data_ptr;

		data_ptr = deserialize(serialize(NULL));
		if (NULL != data_ptr)
			return (1);
	}
	return (0);
}

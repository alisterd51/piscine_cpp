/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:35:41 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/19 17:43:27 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "Data.hpp"

Data::Data(void) :
	a('\0'),
	b(0),
	c(0.0)
{
	return ;
}

Data::Data(Data const &src)
{
	*this = src;
	return ;
}

Data::~Data(void)
{
	return ;
}

Data	&Data::operator=(Data const &rhs)
{
	if (this != &rhs)
	{
		this->a = rhs.a;
		this->b = rhs.b;
		this->c = rhs.c;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Data const &i)
{
	o << "a: " << i.a << ", b: " << i.b << ", c: " << i.c;
	return (o);
}

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

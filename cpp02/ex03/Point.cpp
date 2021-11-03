/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:55:30 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/03 20:53:31 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "Point.hpp"

Point::Point(void) :
	x(0),
	y(0)
{
	return ;
}

Point::Point(Point const &src)
{
	*this = src;
	return ;
}

Point::Point(Fixed const &x_init, Fixed const &y_init) :
	x(x_init),
	y(y_init)
{
	return ;
}

Point::~Point(void)
{
	return ;
}

float	Point::getX(void) const
{
	return (this->x.toFloat());
}

float	Point::getY(void) const
{
	return (this->y.toFloat());
}

Point	&Point::operator=(Point const &rhs)
{
	if (this != &rhs)
	{
		*(Fixed *)&this->x = rhs.x;
		*(Fixed *)&this->y = rhs.y;
	}
	return (*this);
}

std::ostream    &operator<<(std::ostream &o, Point const &i)
{
    o << "x:" << i.getX() << ", y:" << i.getX();
    return (o);
}

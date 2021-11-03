/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 01:15:21 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/03 20:56:03 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
	Point	a;
	Point	b;
	Point	c;
	Point	point;

	a = Point(Fixed(1.0f), Fixed(1.0f));
	b = Point(Fixed(0.0f), Fixed(0.0f));
	c = Point(Fixed(2.0f), Fixed(0.0f));
	point = Point(Fixed(1.0f), Fixed(0.5f));
	std::cout
		<< "point a: " << a << std::endl
		<< "point b: " << b << std::endl
		<< "point c: " << c << std::endl
		<< "point point: " << point << std::endl
		<< bsp(a, b, c, point) << std::endl;
	point = Point(Fixed(4.0f), Fixed(4.0f));
	std::cout
		<< "point a: " << a << std::endl
		<< "point b: " << b << std::endl
		<< "point c: " << c << std::endl
		<< "point point: " << point << std::endl
		<< bsp(a, b, c, point) << std::endl;
	return (0);
}

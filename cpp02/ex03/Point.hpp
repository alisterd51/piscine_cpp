/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:57:50 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/03 20:34:35 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class	Point
{
	public:
		Point(void);
		Point(Point const &src);
		Point(Fixed const &x_init, Fixed const &y_init);
		virtual	~Point(void);

		Point	&operator=(Point const &rhs);

		float	getX(void) const;
		float	getY(void) const;
	private:
		Fixed const	x;
		Fixed const	y;
};

std::ostream	&operator<<(std::ostream &o, Point const &i);

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif

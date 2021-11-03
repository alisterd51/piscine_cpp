/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:25:37 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/03 20:06:29 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	sign(Point const pa, Point const pb, Point const pc)
{
	return ((pa.getX() - pc.getX()) * (pb.getY() - pc.getY())
			- (pb.getX() - pc.getX()) * (pa.getY() - pc.getY()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	d1;
	Fixed	d2;
	Fixed	d3;
	bool	neg;
	bool	pos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);
	neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	return (!(neg && pos));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 01:24:20 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/14 14:58:01 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) :
	_value(0)
{
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	return ;
}

Fixed::Fixed(int const &value)
{
	this->_value = value << this->_fractionalBits;
	return ;
}

Fixed::Fixed(float const &value)
{
	this->_value = roundf(value * (1 << this->_fractionalBits));
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	this->_value = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->_value > rhs._value);
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->_value < rhs._value);
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->_value >= rhs._value);
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->_value <= rhs._value);
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->_value == rhs._value);
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_value != rhs._value);
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	this->_value = this->_value + 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	post(*this);

	operator++();
	return (post);
}

Fixed	&Fixed::operator--(void)
{
	this->_value = this->_value - 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	post(*this);

	operator--();
	return (post);
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_value) / (1 << this->_fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (this->_value >> this->_fractionalBits);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

const int	Fixed::_fractionalBits = 8;

std::ostream	&operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 01:24:20 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/03 17:39:57 by anclarma         ###   ########.fr       */
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

Fixed::Fixed(int const &i)
{
	this->_value = i << this->_fractional_bits;
	return ;
}

Fixed::Fixed(float const &f)
{
	this->_value = roundf(f * (1 << this->_fractional_bits));
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->_value = rhs._value;
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
	return ((float)this->_value / (1 << this->_fractional_bits));
}

int	Fixed::toInt(void) const
{
	return (this->_value >> this->_fractional_bits);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a <= b)
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

const int	Fixed::_fractional_bits = 8;

std::ostream	&operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 01:24:20 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/14 13:56:38 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) :
	_value(0)
{
	std::cout
		<< "Default constructor called"
		<< std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout
		<< "Copy constructor called"
		<< std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(int const &value)
{
	std::cout
		<< "Int constructor called"
		<< std::endl;
	this->_value = value << this->_fractionalBits;
	return ;
}

Fixed::Fixed(float const &value)
{
	std::cout
		<< "Float constructor called"
		<< std::endl;
	this->_value = roundf(value * (1 << this->_fractionalBits));
	return ;
}

Fixed::~Fixed(void)
{
	std::cout
		<< "Destructor called"
		<< std::endl;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout
		<< "Copy assignation operator called"
		<< std::endl;
	this->_value = rhs._value;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout
		<< "getRawBits member function called"
		<< std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout
		<< "setRawBits member function called"
		<< std::endl;
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

const int	Fixed::_fractionalBits = 8;

std::ostream	&operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 02:18:20 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/18 05:57:46 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include <iostream>
#include "Span.hpp"

Span::Span(void) :
	_size(0)
{
	return ;
}

Span::Span(unsigned int const &n) :
	_size(n)
{
	return ;
}

Span::Span(Span const &src) :
	_size(src._size),
	_lst(src._lst)
{
	return ;
}

Span::~Span(void)
{
	return ;
}

Span	&Span::operator=(Span const &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

void    Span::addNumber(int const &number)
{
	if (this->_lst.size() + 1 > this->_size)
		throw Span::tooMuchValueException();
	this->_lst.push_front(number);
	return ;
}

void    Span::addNumber(unsigned int const &nbIteration, int const &value)
{
	unsigned int	i;

	i = 0;
	if (this->_lst.size() + nbIteration > this->_size)
		throw Span::tooMuchValueException();
	while (i < nbIteration)
	{
		this->_lst.push_front(value);
		i++;;
	}
	return ;
}

unsigned int	Span::shortestSpan(void)
{
	std::list<int>::iterator	it;
	std::list<int>::iterator	ite;
	unsigned int				diff;

	it = this->_lst.begin();
	ite = this->_lst.end();
	diff = UINT_MAX;
	while (it != ite)
	{
		unsigned int	local_diff;
		int				val1;
		int				val2;

		val1 = *it;
		it++;
		val2 = *it;
		if (val1 > val2)
			local_diff = val1 - val2;
		else
			local_diff = val2 - val1;
		if (local_diff < diff && it != ite)
			diff = local_diff;
	}
	return (diff);
}

unsigned int	Span::longestSpan(void)
{
	std::list<int>::iterator	it;
	std::list<int>::iterator	ite;
	unsigned int				diff;

	it = this->_lst.begin();
	ite = this->_lst.end();
	diff = 0;
	while (it != ite)
	{
		unsigned int	local_diff;
		int				val1;
		int				val2;

		val1 = *it;
		it++;
		val2 = *it;
		if (val1 > val2)
			local_diff = val1 - val2;
		else
			local_diff = val2 - val1;
		if (local_diff > diff && it != ite)
			diff = local_diff;
	}
	return (diff);
}

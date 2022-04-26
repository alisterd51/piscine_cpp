/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 02:18:20 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/21 23:46:44 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include <iostream>
#include <algorithm>
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

void    Span::addNumber(unsigned int const &nbIteration, int (*f)(void))
{
	unsigned int	i;

	i = 0;
	if (this->_lst.size() + nbIteration > this->_size)
		throw Span::tooMuchValueException();
	while (i < nbIteration)
	{
		this->_lst.push_front((*f)());
		i++;;
	}
	return ;
}

void    Span::addNumber(std::list<int>::const_iterator begin, std::list<int>::const_iterator end)
{
	while (begin != end)
	{
		if (this->_lst.size() + 1 > this->_size)
			throw Span::tooMuchValueException();
		this->_lst.push_front(*begin);
		begin++;
	}
	return ;
}

unsigned int	Span::shortestSpan(void) const
{
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite;
	unsigned int					diff;

	it = this->_lst.begin();
	ite = this->_lst.end();
	if (it != ite)
		diff = UINT_MAX;
	else
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
		if (local_diff < diff && it != ite)
			diff = local_diff;
	}
	return (diff);
}

unsigned int	Span::longestSpan(void) const
{
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite;
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

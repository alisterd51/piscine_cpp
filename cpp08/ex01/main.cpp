/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 01:18:19 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/22 00:06:19 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <climits>
#include <algorithm>
#include "Span.hpp"

#define BLACK		"\033[1;30m"
#define RED			"\033[1;31m"
#define GREEN		"\033[1;32m"
#define YELLOW		"\033[1;33m"
#define BLUE		"\033[1;34m"
#define MAGENTA		"\033[1;35m"
#define CYAN		"\033[1;36m"
#define WHITE		"\033[1;37m"
#define RESET		"\033[0m"

int	main(void)
{
	srand(time(NULL));
	std::cout
		<< MAGENTA
		<< "-Span(5) {5, 3, 17, 9, 11}---------------------"
		<< RESET
		<< std::endl;
	{
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		try
		{
			sp.addNumber(42);
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		std::cout
			<< "shortest span: " << sp.shortestSpan() << std::endl
			<< "longest span: " << sp.longestSpan() << std::endl;
	}
	std::cout
		<< MAGENTA
		<< "-Span(50000) {21, 49999 * 42}------------------"
		<< RESET
		<< std::endl;
	{
		Span sp = Span(50000);

		sp.addNumber(21);
		sp.addNumber(49999, 42);
		try
		{
			sp.addNumber(42);
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		try
		{
			sp.addNumber(42, 42);
		}
		catch(const std::exception& e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		std::cout
			<< "shortest span: " << sp.shortestSpan() << std::endl
			<< "longest span: " << sp.longestSpan() << std::endl;
	}
	std::cout
		<< MAGENTA
		<< "-Span(50000) {rand, ...}-----------------------"
		<< RESET
		<< std::endl;
	{
		Span sp = Span(50000);

		sp.addNumber(50000, rand);
		std::cout
			<< "shortest span: " << sp.shortestSpan() << std::endl
			<< "longest span: " << sp.longestSpan() << std::endl;
	}
	std::cout
		<< MAGENTA
		<< "-Span(3) {" << INT_MAX << ", " << INT_MIN << ", 0}----------"
		<< RESET
		<< std::endl;
	{
		Span sp = Span(3);

		sp.addNumber(INT_MAX);
		sp.addNumber(INT_MIN);
		sp.addNumber(0);
		std::cout
			<< "shortest span: " << sp.shortestSpan() << std::endl
			<< "longest span: " << sp.longestSpan() << std::endl;
	}
	std::cout
		<< MAGENTA
		<< "-Span(3) {" << INT_MIN << ", " << INT_MAX << ", 0}----------"
		<< RESET
		<< std::endl;
	{
		Span sp = Span(3);

		sp.addNumber(INT_MIN);
		sp.addNumber(INT_MAX);
		sp.addNumber(0);
		std::cout
			<< "shortest span: " << sp.shortestSpan() << std::endl
			<< "longest span: " << sp.longestSpan() << std::endl;
	}
	std::cout
		<< MAGENTA
		<< "-Span(5) {list<int>(5) {42, 21, 22, 23, 24}}---"
		<< RESET
		<< std::endl;
	{
		std::list<int>	l;
		Span			sp = Span(5);

		l.push_back(42);
		l.push_back(21);
		l.push_back(22);
		l.push_back(23);
		l.push_back(24);
		sp.addNumber(l.begin(), l.end());
		std::cout
			<< "shortest span: " << sp.shortestSpan() << std::endl
			<< "longest span: " << sp.longestSpan() << std::endl;
	}
	std::cout
		<< MAGENTA
		<< "-const Span(5) {0}-----------------------------"
		<< RESET
		<< std::endl;
	{
		const Span			sp(5);

		std::cout
			<< "shortest span: " << sp.shortestSpan() << std::endl
			<< "longest span: " << sp.longestSpan() << std::endl;
	}
	return (0);
}

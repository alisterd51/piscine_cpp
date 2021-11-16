/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:57:24 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/16 14:35:38 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <time.h>
#include <exception>
#include "Base.hpp"

Base::~Base(void)
{
	return ;
}

Base	*generate(void)
{
	int	r;

	srand(time(NULL));
	r = rand() % 3;
	if (r == 0)
		return (new A);
	if (r == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A &ref_A = dynamic_cast<A &>(p);
		(void)ref_A;
		std::cout << "A" << std::endl;
	}
	catch (std::exception &bc)
	{
	}
	try
	{
		B &ref_B = dynamic_cast<B &>(p);
		(void)ref_B;
		std::cout << "B" << std::endl;
	}
	catch (std::exception &bc)
	{
	}
	try
	{
		C &ref_C = dynamic_cast<C &>(p);
		(void)ref_C;
		std::cout << "C" << std::endl;
	}
	catch (std::exception &bc)
	{
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:57:24 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/16 13:14:49 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <time.h>
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
	(void)p;
}

void	identify(Base &p)
{
	(void)p;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:27:52 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/20 16:26:48 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

class Awesome
{
	public:
		Awesome(void) :
			_n(42)
		{
			return;
		}
		int get(void) const
		{
			return (this->_n);
		}
	private:
		int _n;
};

std::ostream & operator<<(std::ostream &o, Awesome const &rhs)
{
	o << rhs.get();
	return (o);
}

template<typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
	return;
}

template<typename T>
void inc(T &x)
{
	x++;
	return;
}

int main(void)
{
	int		tab[] = {0, 1, 2, 3, 4};
	Awesome	tab2[5];

	iter(tab, 5, print);
	iter(tab, 5, inc);
	iter(tab, 5, print);
	iter(tab2, 5, print);
	return (0);
}

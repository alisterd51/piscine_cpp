/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:27:52 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/21 11:08:38 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

class	A
{
	public:
		A() :
			_i(42)
		{
			return ;
		}
		A(int i) :
			_i(i)
		{
			return ;
		}
		int	getI(void) const
		{
			return (this->_i);
		}
	private:
		int	_i;
};

std::ostream	&operator<<(std::ostream &o, A const &i)
{
	o << i.getI();
	return (o);
}

int main(void)
{
	std::cout << "-Array<int>------------------------------------" << std::endl;
	{
		Array<int>	array(2);

		array[1] = 21;
		try
		{
			std::cout
				<< "size: " << array.size() << std::endl
				<< "array[0]: "<< array[0] << std::endl
				<< "array[1]: " << array[1] << std::endl
				<< "array[2]: " << array[2] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-const Array<int>------------------------------" << std::endl;
	{
		const Array<int>	array(2);

		try
		{
			std::cout
				<< "size: " << array.size() << std::endl
				<< "array[0]: "<< array[0] << std::endl
				<< "array[1]: " << array[1] << std::endl
				<< "array[2]: " << array[2] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-Array<int const>------------------------------" << std::endl;
	{
		Array<int const>	array(2);

		try
		{
			std::cout
				<< "size: " << array.size() << std::endl
				<< "array[0]: "<< array[0] << std::endl
				<< "array[1]: " << array[1] << std::endl
				<< "array[2]: " << array[2] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-const Array<int const>------------------------" << std::endl;
	{
		const Array<int const>	array(2);

		try
		{
			std::cout
				<< "size: " << array.size() << std::endl
				<< "array[0]: "<< array[0] << std::endl
				<< "array[1]: " << array[1] << std::endl
				<< "array[2]: " << array[2] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-Array<A>--------------------------------------" << std::endl;
	{
		Array<A>	array(2);

		array[1] = A(21);
		try
		{
			std::cout
				<< "size: " << array.size() << std::endl
				<< "array[0]: "<< array[0] << std::endl
				<< "array[1]: " << array[1] << std::endl
				<< "array[2]: " << array[2] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-const Array<A>--------------------------------" << std::endl;
	{
		const Array<A>	array(2);

		try
		{
			std::cout
				<< "size: " << array.size() << std::endl
				<< "array[0]: "<< array[0] << std::endl
				<< "array[1]: " << array[1] << std::endl
				<< "array[2]: " << array[2] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-Array<A const>--------------------------------" << std::endl;
	{
		Array<A const>	array(2);

		try
		{
			std::cout
				<< "size: " << array.size() << std::endl
				<< "array[0]: "<< array[0] << std::endl
				<< "array[1]: " << array[1] << std::endl
				<< "array[2]: " << array[2] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "-const Array<A const>--------------------------" << std::endl;
	{
		Array<A const>	array(2);

		try
		{
			std::cout
				<< "size: " << array.size() << std::endl
				<< "array[0]: "<< array[0] << std::endl
				<< "array[1]: " << array[1] << std::endl
				<< "array[2]: " << array[2] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}

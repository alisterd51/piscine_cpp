/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:34:23 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/18 00:00:49 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <deque>
#include "easyfind.hpp"

int	main(void)
{
	{
		std::list<int>	lst1;

		lst1.push_back(1);
		lst1.push_back(2);
		lst1.push_back(3);
		try
		{
			std::list<int>::iterator	it;

			it = easyfind(lst1, 2);
			std::cout << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::list<int>::iterator	it;

			it = easyfind(lst1, 4);
			std::cout << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::deque<int>	deq1;

		deq1.push_back(1);
		deq1.push_back(2);
		deq1.push_back(3);
		try
		{
			std::deque<int>::iterator	it;

			it = easyfind(deq1, 2);
			std::cout << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::deque<int>::iterator	it;

			it = easyfind(deq1, 4);
			std::cout << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}

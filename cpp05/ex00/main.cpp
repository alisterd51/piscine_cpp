/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:29:22 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/18 15:21:15 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	kevin("kevin", 42);

	std::cout << kevin << std::endl;
	try
	{
		kevin = Bureaucrat("kevin", 0);
		std::cout
			<< kevin
			<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout
			<< e.what()
			<< std::endl;
	}
	std::cout << kevin << std::endl;
	try
	{
		kevin = Bureaucrat("kevin", 151);
		std::cout
			<< kevin
			<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout
			<< e.what()
			<< std::endl;
	}
	std::cout << kevin << std::endl;
	try
	{
		kevin = Bureaucrat("kevin", 10);
		std::cout
			<< "after construction:\t"
			<< kevin
			<< std::endl;
		std::cout
			<< "return of kevin++:\t"
			<< kevin++
			<< std::endl;
		std::cout
			<< "after kevin++:\t\t"
			<< kevin
			<< std::endl;
		std::cout
			<< "return of ++kevin:\t"
			<< ++kevin
			<< std::endl;
		std::cout
			<< "after ++kevin:\t\t"
			<< kevin
			<< std::endl;
		std::cout
			<< "return of kevin--:\t"
			<< kevin--
			<< std::endl;
		std::cout
			<< "after kevin--:\t\t"
			<< kevin
			<< std::endl;
		std::cout
			<< "return of --kevin:\t"
			<< --kevin
			<< std::endl;
		std::cout
			<< "after --kevin:\t\t"
			<< kevin
			<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout
			<< e.what()
			<< std::endl;
	}
	std::cout << kevin << std::endl;
	try
	{
		kevin = Bureaucrat("kevin", 3);
		std::cout
			<< kevin
			<< std::endl
			<< "return of ++kevin:\t"
			<< ++kevin
			<< std::endl
			<< "return of ++kevin:\t"
			<< ++kevin
			<< std::endl
			<< "return of ++kevin:\t"
			<< ++kevin
			<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout
			<< e.what()
			<< std::endl;
	}
	std::cout << kevin << std::endl;
	try
	{
		kevin = Bureaucrat("kevin", 148);
		std::cout
			<< kevin
			<< std::endl
			<< "return of --kevin:\t"
			<< --kevin
			<< std::endl
			<< "return of --kevin:\t"
			<< --kevin
			<< std::endl
			<< "return of --kevin:\t"
			<< --kevin
			<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout
			<< e.what()
			<< std::endl;
	}
	std::cout << kevin << std::endl;
	return (0);
}

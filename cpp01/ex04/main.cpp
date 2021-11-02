/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:57:01 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/02 23:01:36 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

std::string	ReplaceAll(std::string str, const std::string& from,
	const std::string& to)
{
    size_t	start_pos;

	start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos)
	{
		str.insert(start_pos, to);
        start_pos += to.length();
		str.erase(start_pos, from.length());
    }
    return str;
}

int	main(int ac, char **av)
{
	std::string			filename;
	std::ifstream		infile;
	std::ofstream		outfile;
	std::stringstream	buffer;

	if (ac != 4)
	{
		std::cerr
			<< "Error, number of arguments incorrect."
			<< std::endl;
		return (1);
	}
	filename = av[1];
	infile.open(filename);
	if (infile.is_open())
	{
		std::cout << "ouverture infile ok" << std::endl;
		buffer << infile.rdbuf();
	}
	else
	{
		std::cout << "ouverture infile ko" << std::endl;
		return (1);
	}
	outfile.open(filename + ".replace");
	if (outfile.is_open())
	{
		std::cout << "ouverture outfile ok" << std::endl;
	}
	else
	{
		std::cout << "ouverture outfile ko" << std::endl;
		return (1);
	}
	outfile << ReplaceAll(buffer.str(), std::string(av[2]), std::string(av[3]));
	outfile.close();
	infile.close();
	return (0);
}

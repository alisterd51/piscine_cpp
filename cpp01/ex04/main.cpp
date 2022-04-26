/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 16:57:01 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/13 20:34:20 by anclarma         ###   ########.fr       */
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
    return (str);
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
	if (!av[2][0] || !av[3][0])
	{
		std::cerr
			<< "Error, s1 or s2 is empty."
			<< std::endl;
		return (1);
	}
	filename = av[1];
	infile.open(filename.c_str());
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
	filename.append(".replace");
	outfile.open(filename.c_str());
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

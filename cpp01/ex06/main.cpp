/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:29:27 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/05 15:21:55 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av)
{
	Karen	karen;
	int		level;

	if (ac != 2)
		level = 4;
	else
		level = karen.get_level(av[1]);
	switch (level)
	{
		case 0:
			karen.complain("DEBUG");
			karen.complain("INFO");
			karen.complain("WARNING");
			karen.complain("ERROR");
			break;
		case 1:
			karen.complain("INFO");
			karen.complain("WARNING");
			karen.complain("ERROR");
			break;
		case 2:
			karen.complain("WARNING");
			karen.complain("ERROR");
			break;
		case 3:
			karen.complain("ERROR");
			break;
		default:
			karen.complain("default");
	}
	return (0);
}

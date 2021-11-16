/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:48:23 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/16 14:26:48 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"

int	main(void)
{
	Base	*base;

	{
		base = generate();
		identify(base);
		identify(*base);
		delete base;
	}
	{
		identify(NULL);
		identify(NULL);
	}
	return (0);
}

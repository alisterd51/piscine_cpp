/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:55:20 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/16 17:34:04 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T, typename U, typename V>
void	iter(T add, U length, void (*f)(V))
{
	U	i;

	i = 0;
	while (i < length)
	{
		(*f)(&(static_cast<V>(add)[i]));
		i++;
	}
	return ;
}

#endif


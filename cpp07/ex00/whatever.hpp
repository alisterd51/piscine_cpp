/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:30:44 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/20 15:10:32 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T const &x, T const &y)
{
	(void)x;
	(void)y;
	return ;
}

template<typename T>
void	swap(T &x, T &y)
{
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
	return ;
}

template<typename T>
T	min(T const &x, T const &y)
{
	return (x < y ? x : y);
}

template<typename T>
T	max(T const &x, T const &y)
{
	return (x > y ? x : y);
}

#endif

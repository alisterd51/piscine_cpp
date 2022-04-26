/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:37:25 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/20 16:25:16 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	iter(T const *tab, size_t const size, void (*f)(T const &))
{
	for (size_t i = 0; i < size; i++)
		f(tab[i]);
}

template<typename T>
void	iter(T *tab, size_t const size, void (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
		f(tab[i]);
}

#endif

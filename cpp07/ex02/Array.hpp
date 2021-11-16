/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:11:43 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/17 00:23:32 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class	Array
{
	public:
		Array(void)
		{
			return ;
		}
		Array(T const &rhs)
		{
			(void)rhs;
		}
		Array(Array const &src)
		{
			(void)src;
			return ;
		}
		virtual	~Array(void)
		{
			return ;
		}
		Array	&operator=(T const & rhs)
		{
			(void)rhs;
			return (*this);
		}
		T	&operator[](size_t pos)
		{
			return (this->_tab[pos]);
		}
	protected:

	private:
		T	_tab[1000];
};

#endif

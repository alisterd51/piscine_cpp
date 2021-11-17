/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:11:43 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/17 17:55:55 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template<typename T>
class	Array
{
	public:
		Array(void) :
			_size(0),
			_tab(NULL)
		{
			return ;
		}
		Array(unsigned int size) :
			_size(size),
			_tab(new T[size])
		{
			return ;
		}
		Array(Array const &src) :
			_size(src._size),
			_tab(NULL)
		{
			unsigned int	i;

			if (src._size == 0)
				return ;
			this->_tab = new T[src._size];
			i = 0;
			while (i < src._size)
			{
				this->_tab[i] = src._tab[i];
				i++;
			}
			return ;
		}
		virtual	~Array(void)
		{
			if (this->_tab != NULL)
				delete [] this->_tab;
			return ;
		}
		Array	&operator=(Array const &rhs)
		{
			*this = rhs;
		}
		T	&operator[](size_t pos)
		{
			if (pos >= this->_size)
			{
				throw Array::OutsideArrayException();
			}
			return (this->_tab[pos]);
		}
		T	&size(void) const
		{
			return (this->_size);
		}
		class	OutsideArrayException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("index outside array");
				}
		};
	protected:

	private:
		unsigned int	_size;
		T				*_tab;
};

#endif

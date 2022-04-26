/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:30:29 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/21 10:55:47 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class	Array
{
	public:
		Array<T>(void) :
			_size(0),
			_array(NULL)
		{
			return ;
		}
		Array<T>(Array<T> const &src) :
			_size(0),
			_array(NULL)
		{
			*this = src;
			return ;
		}
		Array<T>(unsigned int n) :
			_size(n),
			_array(new T[n]())
		{
			return ;
		}
		virtual	~Array<T>(void)
		{
			delete [] this->_array;
		}
		Array<T>	&operator=(Array<T> const &rhs)
		{
			if (this != &rhs)
			{
				delete [] this->_array;
				this->_size = rhs._size;
				this->_array = new T[rhs._size]();
				for (unsigned int i = 0; i < rhs._size; i++)
					this->_array[i] = rhs._array[i];
			}
			return (*this);
		}
		unsigned int	size(void) const
		{
			return (this->_size);
		}
		T	&operator[](unsigned int pos)
		{
			if (pos >= this->_size)
				throw Array::OutsideArrayException();
			return (this->_array[pos]);
		}
		T const	&operator[](unsigned int pos) const
		{
			if (pos >= this->_size)
				throw Array::OutsideArrayException();
			return (this->_array[pos]);
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
		T				*_array;
};

#endif

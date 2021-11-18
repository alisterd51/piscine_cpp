/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 01:20:14 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/18 06:05:58 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <list>

class	Span
{
	public:
		Span(void);
		Span(unsigned int const &n);
		Span(Span const &src);
		virtual	~Span(void);

		Span	&operator=(Span const &rhs);
		void	addNumber(int const &number);
		void	addNumber(unsigned int const &nbIteration, int const &value);
		void	addNumber(unsigned int const &nbIteration, int (*f)(void));
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

		class	tooMuchValueException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("addition of new value not possible");
				}
		};
	protected:

	private:
		unsigned int	_size;
		std::list<int>	_lst;
};

#endif

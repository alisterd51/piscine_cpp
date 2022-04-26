/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:45:33 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/21 18:37:49 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

class	EasyfindException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("easyfind failed");
		}
};

template<typename T>
typename T::iterator	easyfind(T &a, int const &b)
{
	typename T::iterator	it;

	it = find(a.begin(), a.end(), b);
	if (it == a.end())
		throw EasyfindException();
	return (it);
}

template<typename T>
typename T::const_iterator	easyfind(T const &a, int const &b)
{
	typename T::const_iterator	it = find(a.begin(), a.end(), b);

	if (it == a.end())
		throw EasyfindException();
	return (it);
}

#endif

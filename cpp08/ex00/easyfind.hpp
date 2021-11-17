/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:35:14 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/17 23:51:44 by anclarma         ###   ########.fr       */
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
	if (*it != b)
		throw EasyfindException();
	return (it);
}

#endif

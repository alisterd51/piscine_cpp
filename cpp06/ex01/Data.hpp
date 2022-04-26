/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:33:22 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/19 17:42:37 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

struct	Data
{
	public:
		Data(void);
		Data(Data const &src);
		virtual	~Data(void);

		Data	&operator=(Data const &rhs);

		char	a;
		int		b;
		double	c;
	protected:

	private:

};

std::ostream	&operator<<(std::ostream &o, Data const &i);

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif

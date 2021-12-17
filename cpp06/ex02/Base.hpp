/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:50:31 by anclarma          #+#    #+#             */
/*   Updated: 2021/12/17 15:30:41 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class	Base
{
	public:
		virtual	~Base(void);
};

class	A : public Base
{
};

class	B : public Base
{
};

class	C : public Base
{
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif

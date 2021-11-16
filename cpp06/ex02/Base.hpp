/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:50:31 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/16 12:58:50 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class	Base
{
	public:
		virtual	~Base(void);
	protected:

	private:
		
};

class	A : public Base
{
	public:

	protected:

	private:
		
};

class	B : public Base
{
	public:

	protected:

	private:
		
};

class	C : public Base
{
	public:

	protected:

	private:
		
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif

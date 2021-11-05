/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:54:02 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/05 22:13:13 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class	Brain
{
	public:
		Brain(void);
		Brain(Brain const &src);
		virtual	~Brain(void);

		Brain	&operator=(Brain const &rhs);
	protected:
		std::string	ideas[100];
	private:
		
};

#endif

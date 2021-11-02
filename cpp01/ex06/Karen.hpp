/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:31:05 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/02 17:38:36 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class Karen
{
	public:
		Karen();
		~Karen();

		void	complain(std::string level);
		int		get_level(std::string level);
	private:
		void		(Karen::*_f[4])(void) const;
		std::string	_levels[4];

		void		debug(void) const;
		void		info(void) const;
		void		warning(void) const;
		void		error(void) const;
};

#endif

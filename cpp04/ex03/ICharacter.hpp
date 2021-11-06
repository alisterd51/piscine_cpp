/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:41:20 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/06 17:25:46 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <string>
# include "AMateria.hpp"

class	ICharacter
{
	public:
		virtual	~ICharacter() {}
		virtual std::string	const &getName() const = 0;
		virtual void		equip(AMateria* m) = 0;
		virtual void		unequip(int idx) = 0;
		virtual void		use(int idx, ICharacter& target) = 0;
	protected:

	private:
		
};

#endif

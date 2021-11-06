/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:57:23 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/06 17:22:27 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"

class	Character : public ICharacter
{
	public:
		Character(void);
		Character(Character const &src);
		Character(std::string const &type);
		virtual ~Character();
		
		Character	&operator=(Character const &rhs);
		virtual std::string	const &getName() const;
		virtual void		equip(AMateria* m);
		virtual void		unequip(int idx);
		virtual void		use(int idx, ICharacter& target);
	protected:

	private:
		
};

#endif

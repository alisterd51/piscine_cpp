/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:51:45 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/07 19:50:22 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class	Character : public ICharacter
{
	public:
		Character(void);
		Character(Character const &src);
		Character(std::string const &name);
		virtual	~Character(void);

		Character	&operator=(Character const &rhs);

		virtual std::string const	&getName() const;
		virtual void	equip(AMateria *m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter &target);
	protected:
		virtual void	to_history(AMateria *m);
		virtual void	increase_history(void);
		std::string const	_name;
		int					_size_of_history;
		AMateria			*_equipment[4];
		AMateria			**_history;
	private:
		
};

#endif

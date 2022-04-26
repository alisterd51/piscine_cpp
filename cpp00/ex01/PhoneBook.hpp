/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 02:00:21 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/11 05:03:28 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook(void);
		PhoneBook(PhoneBook const &src);
		virtual	~PhoneBook(void);

		PhoneBook	&operator=(PhoneBook const &rhs);

		void	add(void);
		void	search(void);
	private:
		Contact	_tab[8];
		int		_index;
		int		_nbContact;
};

#endif

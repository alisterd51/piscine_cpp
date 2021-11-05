/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:02:05 by anclarma          #+#    #+#             */
/*   Updated: 2021/11/05 13:59:29 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "contact.class.hpp"

class	Phonebook
{
	public:
		int		conctact_number;
		Contact	conctact_tab[8];

		Phonebook(void);
		virtual ~Phonebook(void);

		void	add(void);
		void	search(void);
};

#endif

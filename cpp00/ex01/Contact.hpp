/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anclarma <anclarma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 02:11:13 by anclarma          #+#    #+#             */
/*   Updated: 2022/02/11 07:32:02 by anclarma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class	Contact
{
	public:
		Contact(void);
		Contact(Contact const &src);
		virtual	~Contact(void);

		Contact	&operator=(Contact const &rhs);

		void	add(int index);
		void	print(void);
		void	printAll(void) const;

	private:
		std::string	printMax(std::string str, std::size_t width);
		std::string	getValidValue(std::string question);

		int			_index;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};

#endif

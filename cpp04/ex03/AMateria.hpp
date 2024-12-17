/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:31:31 by umosse            #+#    #+#             */
/*   Updated: 2024/12/17 16:44:47 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP

# define ICHARACTER_HPP

#include <iostream>

class ICharacter;

class AMateria {
	public:
		AMateria();
		AMateria(std::string const & _type);
		AMateria(const AMateria &other);
		virtual ~AMateria();
		AMateria&	operator=(const AMateria &other);
		std::string	const	&getType()const;
		virtual	AMateria*	clone()const = 0;
		virtual	void	use(ICharacter& target);
	private:
	protected:
		std::string	_type;
};

#endif
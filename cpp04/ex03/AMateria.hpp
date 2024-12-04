/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:31:31 by umosse            #+#    #+#             */
/*   Updated: 2024/12/04 14:46:32 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP

# define AMATERIA_HPP

# include <iostream>

class AMateria {
	public:
		AMateria();
		AMateria(std::string _name);
		AMateria(const AMateria &other);
		virtual ~AMateria();
		AMateria&	operator=(const AMateria &other);
	private:
	protected:
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:41:36 by umosse            #+#    #+#             */
/*   Updated: 2024/12/04 14:22:40 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

# include <iostream>

class Animal {
	public:
		Animal();
		Animal(std::string _name);
		Animal(const Animal &other);
		virtual ~Animal();
		Animal&	operator=(const Animal &other);
		void	virtual makeSound()const;
		std::string	getType()const;
	private:
	protected:
		std::string	_type;
};

#endif
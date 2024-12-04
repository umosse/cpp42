/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:06:32 by umosse            #+#    #+#             */
/*   Updated: 2024/12/03 14:07:28 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP

# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(std::string _name);
		WrongAnimal(const WrongAnimal &other);
		~WrongAnimal();
		WrongAnimal&	operator=(const WrongAnimal &other);
		void	makeSound()const ;
		std::string	getType()const ;
	private:
	protected:
		std::string	_type;
};

#endif
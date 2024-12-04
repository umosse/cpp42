/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:31:21 by umosse            #+#    #+#             */
/*   Updated: 2024/12/03 13:59:39 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(std::string _name);
		Dog(const Dog &other);
		~Dog();
		Dog&	operator=(const Dog &other);
		void	makeSound()const ;
	private:
};
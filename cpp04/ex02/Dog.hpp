/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:31:21 by umosse            #+#    #+#             */
/*   Updated: 2024/12/03 17:52:43 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(std::string _name);
		Dog(const Dog &other);
		~Dog();
		Dog&	operator=(const Dog &other);
		void	makeSound()const;
		void	printIdea();
		void	setIdea(const std::string &idea);
	private:
		Brain	*_brain;
};
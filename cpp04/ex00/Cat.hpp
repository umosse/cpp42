/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:31:30 by umosse            #+#    #+#             */
/*   Updated: 2024/12/03 14:03:57 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(std::string _name);
		Cat(const Cat &other);
		~Cat();
		Cat&	operator=(const Cat &other);
		void	makeSound()const ;
	private:
};

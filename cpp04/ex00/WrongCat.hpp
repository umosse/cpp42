/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:05:37 by umosse            #+#    #+#             */
/*   Updated: 2024/12/03 14:06:03 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		WrongCat(std::string _name);
		WrongCat(const WrongCat &other);
		~WrongCat();
		WrongCat&	operator=(const WrongCat &other);
		void	makeSound()const ;
	private:
};
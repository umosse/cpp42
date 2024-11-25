/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:17:26 by umosse            #+#    #+#             */
/*   Updated: 2024/11/12 16:49:29 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce();
		void	setName(const std::string &name);
	private:
		std::string	_name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif
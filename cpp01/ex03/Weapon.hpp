/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:07:31 by umosse            #+#    #+#             */
/*   Updated: 2024/11/12 19:38:19 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

# include <iostream>

class Weapon {
	public:
		Weapon(std::string name);
		~Weapon();
		void		setType(const std::string& type);
		std::string	&getType();
		void		attack();
	private:
		std::string	_type;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:03:59 by umosse            #+#    #+#             */
/*   Updated: 2024/11/26 16:27:15 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(std::string name, int attackDamage, int energyPoints, int hitPoints);
		ClapTrap(const ClapTrap &other);
		~ClapTrap();
		ClapTrap&	operator=(const ClapTrap &other);
		void		virtual attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName();
	private:
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif
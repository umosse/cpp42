/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:31:24 by umosse            #+#    #+#             */
/*   Updated: 2024/11/26 16:28:29 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
	public:
		DiamondTrap();
		DiamondTrap(std::string _name);
		DiamondTrap(const DiamondTrap &other);
		~DiamondTrap();
		DiamondTrap&	operator=(const DiamondTrap &other);
		void	whoAmI();
	private:
		std::string	_name;
};
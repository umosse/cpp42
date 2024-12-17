/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:08:38 by umosse            #+#    #+#             */
/*   Updated: 2024/12/05 16:09:01 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Ice : public AMateria{
	public:
		Ice();
		Ice(std::string _name);
		Ice(const Ice &other);
		~Ice();
		Ice&	operator=(const Ice &other);
	private:
};

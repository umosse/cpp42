/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:08:38 by umosse            #+#    #+#             */
/*   Updated: 2024/12/17 16:42:23 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Ice : public AMateria{
	public:
		Ice();
		Ice(const Ice &other);
		~Ice();
		Ice&	operator=(const Ice &other);
		AMateria*	clone()const;
		void	use(ICharacter& target);
	private:
};

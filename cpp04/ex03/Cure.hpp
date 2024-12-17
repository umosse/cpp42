/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:08:44 by umosse            #+#    #+#             */
/*   Updated: 2024/12/17 16:45:06 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();
		Cure(const Cure &other);
		~Cure();
		Cure&	operator=(const Cure &other);
		AMateria*	clone()const;
		void	use(ICharacter& target);
	private:
};

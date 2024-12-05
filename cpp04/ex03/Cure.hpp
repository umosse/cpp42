/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:08:44 by umosse            #+#    #+#             */
/*   Updated: 2024/12/05 16:10:02 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();
		Cure(std::string _name);
		Cure(const Cure &other);
		~Cure();
		Cure&	operator=(const Cure &other);
	private:
};
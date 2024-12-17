/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umosse <umosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:14:29 by umosse            #+#    #+#             */
/*   Updated: 2024/12/17 16:44:19 by umosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		~MateriaSource();
		MateriaSource&	operator=(const MateriaSource &other);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
	private:
		std::size_t	_index;
		AMateria	*_materias[4];
};

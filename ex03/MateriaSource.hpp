/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:18:41 by jkollner          #+#    #+#             */
/*   Updated: 2023/10/27 13:36:02 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria* _materia[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		~MateriaSource();

		MateriaSource & operator=(MateriaSource const & rhs);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

};


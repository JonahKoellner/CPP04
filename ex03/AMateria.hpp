/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:21:30 by jkollner          #+#    #+#             */
/*   Updated: 2023/10/27 13:41:55 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
class AMateria;
#include "ICharacter.hpp"

class AMateria {
	protected:
		std::string _type;
		AMateria(); // abstract
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

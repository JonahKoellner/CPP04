/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:11:29 by jkollner          #+#    #+#             */
/*   Updated: 2023/10/27 13:43:26 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria() {
	std::cout << "Cure Constructor called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(Cure const & src) : AMateria(src) {
	std::cout << "Cure Copy Constructor called" << std::endl;
	*this = src;
}

Cure &Cure::operator=(Cure const &rhs) {
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

AMateria* Cure::clone () const {
	return new Cure(*this);
}

void Cure::use (ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure () {
	std::cout << "Cure Destructor called" << std::endl;
}

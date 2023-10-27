/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:55:01 by jkollner          #+#    #+#             */
/*   Updated: 2023/10/27 13:43:01 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria() {
	std::cout << "Ice Constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(Ice const & src) : AMateria(src) {
	std::cout << "Ice Copy Constructor called" << std::endl;
	*this = src;
}

Ice::~Ice () {
	std::cout << "Ice Destructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &rhs) {
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

AMateria* Ice::clone () const {
	return new Ice(*this);
}

void Ice::use (ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

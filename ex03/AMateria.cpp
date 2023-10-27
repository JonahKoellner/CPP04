/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:52:13 by jkollner          #+#    #+#             */
/*   Updated: 2023/10/27 13:46:01 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) {
	std::cout << "AMateria Constructor called" << std::endl;
	this->_type = type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
}

std::string const & AMateria::getType() const {
	return this->_type;
}

AMateria::~AMateria() {
	std::cout << "AMateria Destructor called" << std::endl;
}

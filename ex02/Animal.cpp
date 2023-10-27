/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:34:28 by jonahkollne       #+#    #+#             */
/*   Updated: 2023/10/25 10:50:11 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "Animal constructor called" << std::endl;
}

void Animal::makeSound() const {
		std::cout << "Happy frend noises :)" << std::endl;
}

std::string Animal::getType() const {
	return (_type);
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

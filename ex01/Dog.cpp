/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:31:56 by jonahkollne       #+#    #+#             */
/*   Updated: 2023/10/25 14:13:12 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
    _brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

void Dog::makeSound(void) const{
    std::cout <<
			 "               ___\n"
             "          __/_  `.  .-\"\"\"-.\n"
             "     Woof \\_,` | \\-'  /   )`-')\n"
             "           \"\") `\"`    \\  ((`\"`\n"
             "          ___Y  ,    .'7 /|\n"
             "         (_,___/...-` (_/_/ \n"				///art by sk
			 << std::endl;
}

Dog::~Dog() {
    delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

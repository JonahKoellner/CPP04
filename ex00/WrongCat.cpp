/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:31:20 by jkollner          #+#    #+#             */
/*   Updated: 2023/10/25 13:54:04 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	_type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

void WrongCat::makeSound(void) const{
    std::cout <<
			 "               ___\n"
             "          __/_  `.  .-\"\"\"-.\n"
             "     MEOW \\_,` | \\-'  /   )`-')\n"
             "           \"\") `\"`    \\  ((`\"`\n"
             "          ___Y  ,    .'7 /|\n"
             "         (_,___/...-` (_/_/ \n"				///art by sk
			 << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

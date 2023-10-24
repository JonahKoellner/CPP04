/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:49:19 by jonahkollne       #+#    #+#             */
/*   Updated: 2023/10/24 13:46:25 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void Cat::makeSound(void) const{
	std::cout <<
		"           \\\\`*-.\n"
		"            )  _`-.\n"
		"           .  : `. .\n"
		"           : _   '  \\\n"
		"           ; *` _.   `*-._\n"
		"      Meow  `-.-'          `-.\n"
		"             ;       `       `.\n"
		"             :.       .        \\\n"
		"             . \\\\  .   :   .-'   .\n"
		"             '  `+.;  ;  '      :\n"
		"             :  '  |    ;       ;-.\n"
		"             ; '   : :`-:     _.`* ;\n"
		"          .*' /  .*' ; .*`- +'  `*'\n"
		"          `*-*   `*-*  `*-*)\n"			///Art by Blazej Kozlowski
		<< std::endl;
}

//void Cat::makeSound(void) const{
//	std::cout <<
//	"\\    /\\      ____\n" <<
//	" )  ( ')    (Meow)\n" <<
//	"(  /  )      ----\n" <<
//	" \\(__)|" << std::endl;
//}

Cat::Cat() : Animal() {
	_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

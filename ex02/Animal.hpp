/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:33:13 by jonahkollne       #+#    #+#             */
/*   Updated: 2023/10/27 12:20:44 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal {
	//private:
	protected:
		Brain *_brain;
		std::string _type;
		Animal();
	public:
		Animal(const Animal &copy);
		virtual ~Animal();
		Animal &operator=(const Animal &copy);
		std::string getType() const;
		virtual void makeSound() const;
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:34:12 by jkollner          #+#    #+#             */
/*   Updated: 2023/10/27 13:40:18 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria* _inventory[4];
	public:
		Character(std::string name);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

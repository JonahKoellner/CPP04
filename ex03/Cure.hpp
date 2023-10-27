/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:09:58 by jkollner          #+#    #+#             */
/*   Updated: 2023/10/27 13:11:18 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(Cure const & src);
		~Cure();

		Cure & operator=(Cure const & rhs);

		AMateria* clone() const;
		void use(ICharacter& target);
};

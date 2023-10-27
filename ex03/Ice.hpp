/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:54:02 by jkollner          #+#    #+#             */
/*   Updated: 2023/10/27 13:11:15 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(Ice const & src);
		~Ice();

		Ice & operator=(Ice const & rhs);

		AMateria* clone() const;
		void use(ICharacter& target);
};

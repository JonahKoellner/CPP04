/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:53:35 by jonahkollne       #+#    #+#             */
/*   Updated: 2023/10/27 12:20:52 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	Animal* animals[10] = {new Dog(), new Dog(), new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat(), new Cat(), new Cat()};
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	//const Animal* a = new Animal();

	delete j;//should not create a leak
	delete i;

	//a->makeSound();

	for (int i = 0; i < 10; i++) {
		std::cout << "Animal " << i + 1 << " : " << std::endl;
		delete animals[i];
		std::cout << std::endl;

	}
	return 0;
}

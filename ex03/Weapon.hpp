/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 00:09:20 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/21 05:05:09 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Implement a Weapon class that has:
// • A private attribute type, which is a string.
// • A getType() member function that returns a const reference to type.
// • A setType() member function that sets type using the new one passed as parameter.

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>
#include <iomanip>
#include <iostream>
// #include "HumanA.hpp"

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string &getType() const;
		void setType(std::string newtype);
	private:
		std::string	type;
};

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}
#endif
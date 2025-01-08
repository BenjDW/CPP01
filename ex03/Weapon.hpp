/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 00:09:20 by bde-wits          #+#    #+#             */
/*   Updated: 2025/01/08 05:45:06 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>
#include <iomanip>
#include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		std::string const &getType();
		void setType(std::string newtype);
	private:
		std::string	type;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 04:45:08 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/21 05:07:35 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType() const
{
	return type;
}

void Weapon::setType(std::string newtype)
{
	type = newtype;
}
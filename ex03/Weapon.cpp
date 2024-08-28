/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:46:11 by tabreia-          #+#    #+#             */
/*   Updated: 2023/09/05 17:46:11 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(const std::string &type) : type(type)
{

}

Weapon::~Weapon()
{

}

const std::string Weapon::getType() const
{
	return (this->type);
}

void Weapon::setType(const std::string &newType)
{
	this->type = newType;
}
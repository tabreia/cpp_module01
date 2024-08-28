/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:46:11 by tabreia-          #+#    #+#             */
/*   Updated: 2023/09/05 17:46:11 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	std::string	type;
public:
	Weapon();
	Weapon(const std::string &type);
	~Weapon();
	const std::string	getType() const;
	void				setType(const std::string &newType);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:46:11 by tabreia-          #+#    #+#             */
/*   Updated: 2023/09/05 17:46:11 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	Weapon		*weapon;
	std::string	name;
public:
	HumanA();
	HumanA(const std::string& name, Weapon &weapon);
	~HumanA();
	void	attack(void);

};



#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:47:49 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/22 11:50:43 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

// Static members
const std::string	FragTrap::_type = FRAGTRAP_TYPE;

// Constructors
FragTrap::FragTrap() : ClapTrap(FRAGTRAP_DFT_NAME, FRAGTRAP_DFT_HP, FRAGTRAP_DFT_EP, FRAGTRAP_DFT_DMG)
{
	std::cout << "Default Constructor called of " << _type << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << "Copy Constructor called of " << _type << std::endl;
}

FragTrap::FragTrap(const std::string &name, unsigned int hp, unsigned int ep, unsigned int attack) : ClapTrap(name, hp, ep, attack)
{
	std::cout << "Fields Constructor called of " << _type << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name, FRAGTRAP_DFT_HP, FRAGTRAP_DFT_EP, FRAGTRAP_DFT_DMG)
{
	std::cout << "Name field Constructor called of " << _type << std::endl;
}


// Destructor
FragTrap::~FragTrap()
{
	std::cout << "Destructor called of " << _type << std::endl;
}


// Operators
FragTrap & FragTrap::operator=(const FragTrap &assign)
{
	setName(assign.getName());
	setHp(assign.getHp());
	setEp(assign.getEp());
	setAttack(assign.getAttack());
	return *this;
}

// Getters / Setters
const std::string &	FragTrap::getType( void ) const
{
	return _type;	
}

//Actions

void	FragTrap::highFivesGuys( void ) const
{
	std::cout << getType() << ' ' << getName() << " has requested high fives!" << std::endl;
}

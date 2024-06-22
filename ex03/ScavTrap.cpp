/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:47:49 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/22 11:57:01 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

// Static members
const std::string	ScavTrap::_type = SCAVTRAP_TYPE;

// Constructors
ScavTrap::ScavTrap() : ClapTrap(SCAVTRAP_DFT_NAME, SCAVTRAP_DFT_HP, SCAVTRAP_DFT_EP, SCAVTRAP_DFT_DMG)
{
	std::cout << "Default Constructor called of " << _type << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << "Copy Constructor called of " << _type << std::endl;
}

ScavTrap::ScavTrap(const std::string &name, unsigned int hp, unsigned int ep, unsigned int attack) : ClapTrap(name, hp, ep, attack)
{
	std::cout << "Fields Constructor called of " << _type << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, SCAVTRAP_DFT_HP, SCAVTRAP_DFT_EP, SCAVTRAP_DFT_DMG)
{
	std::cout << "Name field Constructor called of " << _type << std::endl;
}


// Destructor
ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called of " << _type << std::endl;
}


// Operators
ScavTrap & ScavTrap::operator=(const ScavTrap &assign)
{
	setName(assign.getName());
	setHp(assign.getHp());
	setEp(assign.getEp());
	setAttack(assign.getAttack());
	return *this;
}

// Getters / Setters
const std::string &	ScavTrap::getType( void ) const
{
	return _type;	
}

//Actions

void	ScavTrap::guardGate( void ) const
{
	std::cout << getType() << ' ' << getName() << " is now in Gate keeper mode" << std::endl;
}

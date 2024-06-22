/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 13:10:51 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/22 13:48:39 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

const std::string	DiamondTrap::_type = DIAMONDTRAP_TYPE;

//Constructors
DiamondTrap::DiamondTrap() : ScavTrap(DIAMONDTRAP_DFT_NAME, DIAMONDTRAP_DFT_HP, DIAMONDTRAP_DFT_EP, DIAMONDTRAP_DFT_DMG), FragTrap(DIAMONDTRAP_DFT_NAME, DIAMONDTRAP_DFT_HP, DIAMONDTRAP_DFT_EP, DIAMONDTRAP_DFT_DMG)
{
	_name = DIAMONDTRAP_DFT_NAME;
	setName(getName() + "_clap_name");
	std::cout << "Default Constructor called of " << _type << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	_name = src.getDiamondName();
	std::cout << "Copy Constructor called of " << _type << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name, unsigned int hp, unsigned int ep, unsigned int attack) : ScavTrap(name + "_clap_name", hp, ep, attack), FragTrap(name + "_clap_name", hp, ep, attack)
{
	_name = name;
	std::cout << "Fields Constructor called of " << _type << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ScavTrap(name + "_clap_name", DIAMONDTRAP_DFT_HP, DIAMONDTRAP_DFT_EP, DIAMONDTRAP_DFT_DMG), FragTrap(name + "_clap_name", DIAMONDTRAP_DFT_HP, DIAMONDTRAP_DFT_EP, DIAMONDTRAP_DFT_DMG)
{
	_name = name;
	std::cout << "Name field Constructor called of " << _type << std::endl;
}


// Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called of " << _type << std::endl;
}


// Operators
DiamondTrap & DiamondTrap::operator=(const DiamondTrap &assign)
{
	setDiamondName(assign.getDiamondName());
	setName(assign.getName());
	setHp(assign.getHp());
	setEp(assign.getEp());
	setAttack(assign.getAttack());
	return *this;
}

//Getters / Setters
const std::string &	DiamondTrap::getDiamondName( void ) const
{
	return _name;
}
void	DiamondTrap::setDiamondName(const std::string & name)
{
	_name = name;
}

const std::string&	DiamondTrap::getType( void ) const
{
	return _type;
}

// Actions
void	attack(const std::string &target)
{
	ScavTrap::attack(target);
}

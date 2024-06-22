/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:23:16 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/21 16:27:12 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <limits>
#include <iostream>

// Static members
const std::string	ClapTrap::_type = CLAPTRAP_TYPE;

// Constructors
ClapTrap::ClapTrap()
{
	_name = CLAPTRAP_DFT_NAME;
	_hp = CLAPTRAP_DFT_HP;
	_ep = CLAPTRAP_DFT_EP;
	_attack = CLAPTRAP_DFT_DMG;
	std::cout << "Default Constructor called of " << getType() << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	_name = src.getName();
	_hp = src.getHp();
	_ep = src.getEp();
	_attack = src.getAttack();
	std::cout << "Copy Constructor called of " << getType() << std::endl;
}

ClapTrap::ClapTrap(const std::string &name, unsigned int hp, unsigned int ep, unsigned int attack) : _name(name), _hp(hp), _ep(ep), _attack(attack)
{
	std::cout << "Fields Constructor called of " << getType() << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name)
{
	_hp = CLAPTRAP_DFT_HP;
	_ep = CLAPTRAP_DFT_EP;
	_attack = CLAPTRAP_DFT_DMG;
	std::cout << "Name field Constructor called of " << getType() << std::endl;
}


// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called of " << getType() << std::endl;
}


// Operators
ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	_name = assign.getName();
	_hp = assign.getHp();
	_ep = assign.getEp();
	_attack = assign.getAttack();
	return *this;
}


// Getters / Setters
const std::string &	ClapTrap::getType( void ) const
{
	return _type;
}

const std::string & ClapTrap::getName() const
{
	return _name;
}

void ClapTrap::setName(const std::string &name)
{
	_name = name;
}

unsigned int ClapTrap::getHp() const
{
	return _hp;
}

void ClapTrap::setHp(unsigned int hp)
{
	_hp = hp;
}

unsigned int ClapTrap::getEp() const
{
	return _ep;
}

void ClapTrap::setEp(unsigned int ep)
{
	_ep = ep;
}

unsigned int ClapTrap::getAttack() const
{
	return _attack;
}

void ClapTrap::setAttack(unsigned int attack)
{
	_attack = attack;
}


//Actions
void	ClapTrap::dispStats( void )
{
	std::cout << _name << "	--->HP:	" << _hp << ", EP:	" << _ep << ", DMG:	" << _attack << std::endl << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_ep > 0 && _hp > 0)
	{
		_ep--;
		std::cout << getType() << ' ' << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
	}
	else
	{
		if (_hp == 0)
			std::cout << getType() << ' ' << _name << " has " << _hp << " hit points and cannot attack" << std::endl;
		else
			std::cout << getType() << ' ' << _name << " has " << _ep << " energy points and cannot attack" << std::endl;
	}
	dispStats();
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < _hp)
		_hp -= amount;
	else
		_hp = 0;
	std::cout << getType() << ' ' << _name << " has taken " << amount << " points of damage!" << std::endl;
	dispStats();
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_ep > 0 && _hp > 0)
	{
		_ep--;
		if (amount > std::numeric_limits<unsigned int>::max() - _hp)
			_hp = std::numeric_limits<unsigned int>::max();
		else
			_hp += amount;
		std::cout << getType() << ' ' << _name << " has been repaired by " << amount << " hit points." << std::endl;
	}
	else
	{
		if (_hp == 0)
			std::cout << getType() << ' ' << _name << " has " << _hp << " hit points and cannot repair itself" << std::endl;
		else
			std::cout << getType() << ' ' << _name << " has " << _ep << " energy points and cannot repair itself" << std::endl;
	}
	dispStats();
}

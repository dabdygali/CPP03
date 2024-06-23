/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 12:18:43 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/23 11:39:16 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
	#ifndef _DIAMONDTRAP_HPP_
	#define _DIAMONDTRAP_HPP_

	#include "ScavTrap.hpp"
	#include "FragTrap.hpp"

	#define DIAMONDTRAP_TYPE		"DiamondTrap"
	#define	DIAMONDTRAP_DFT_NAME	"_default_name_"
	#define	DIAMONDTRAP_DFT_HP		FRAGTRAP_DFT_HP
	#define DIAMONDTRAP_DFT_EP		SCAVTRAP_DFT_EP
	#define DIAMONDTRAP_DFT_DMG		FRAGTRAP_DFT_DMG

	class	DiamondTrap : public ScavTrap, public FragTrap
	{
		private:
			static const std::string	_type;
			std::string					_name;
			virtual const std::string &	getType( void ) const;
			
		public:
			// Constructors
			DiamondTrap();
			DiamondTrap(const DiamondTrap &src);
			DiamondTrap(const std::string &name, unsigned int hp, unsigned int ep, unsigned int attack);
			DiamondTrap(const std::string &name);
			
			// Destructor
			virtual ~DiamondTrap();
			
			// Operators
			DiamondTrap & operator=(const DiamondTrap &assign);

			// Getters / Setters
			const std::string &	getDiamondName( void ) const;
			void				setDiamondName(const std::string & name);

			//Actions
			void	attack(const std::string &target);
			void	whoAmI( void ) const;
	};

#endif

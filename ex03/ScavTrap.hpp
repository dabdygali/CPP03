/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:23:08 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/22 15:18:55 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _SCAVTRAP_HPP_
	#define _SCAVTRAP_HPP_

	#define SCAVTRAP_TYPE		"ScavTrap"
	#define	SCAVTRAP_DFT_NAME	"_default_name_"
	#define	SCAVTRAP_DFT_HP		100
	#define SCAVTRAP_DFT_EP		50
	#define SCAVTRAP_DFT_DMG	20
	
	#include "ClapTrap.hpp"

	class ScavTrap	: virtual public ClapTrap
	{
		private:
			static const std::string	_type;

			virtual const std::string &	getType( void ) const;
			
		public:
			// Constructors
			ScavTrap();
			ScavTrap(const ScavTrap &src);
			ScavTrap(const std::string &name, unsigned int hp, unsigned int ep, unsigned int attack);
			ScavTrap(const std::string &name);
			
			// Destructor
			~ScavTrap();
			
			// Operators
			ScavTrap & operator=(const ScavTrap &assign);

			//Actions
			void	guardGate( void ) const;
	};

#endif

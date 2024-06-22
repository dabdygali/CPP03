/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:23:08 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/22 11:50:26 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _FRAGTRAP_HPP_
	#define _FRAGTRAP_HPP_

	#define FRAGTRAP_TYPE		"FragTrap"
	#define	FRAGTRAP_DFT_NAME	"_default_name_"
	#define	FRAGTRAP_DFT_HP		100
	#define FRAGTRAP_DFT_EP		100
	#define FRAGTRAP_DFT_DMG	30
	
	#include "ClapTrap.hpp"

	class FragTrap	: virtual public ClapTrap
	{
		private:
			static const std::string	_type;

			virtual const std::string &	getType( void ) const;
			
		public:
			// Constructors
			FragTrap();
			FragTrap(const FragTrap &src);
			FragTrap(const std::string &name, unsigned int hp, unsigned int ep, unsigned int attack);
			FragTrap(const std::string &name);
			
			// Destructor
			~FragTrap();
			
			// Operators
			FragTrap & operator=(const FragTrap &assign);

			//Actions
			void	highFivesGuys( void ) const;
	};

#endif

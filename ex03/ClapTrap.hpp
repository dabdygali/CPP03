/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:23:08 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/23 11:49:05 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef _CLAPTRAP_HPP_
	#define _CLAPTRAP_HPP_

	#define CLAPTRAP_TYPE		"ClapTrap"
	#define	CLAPTRAP_DFT_NAME	"_default_name_"
	#define	CLAPTRAP_DFT_HP		10
	#define CLAPTRAP_DFT_EP		10
	#define CLAPTRAP_DFT_DMG	0
	#include <string>

	class ClapTrap
	{
		private:
			static const std::string	_type;
			std::string			_name;
			unsigned int		_hp;
			unsigned int		_ep;
			unsigned int		_attack;

			virtual const std::string &	getType( void ) const;
			
		public:
			// Constructors
			ClapTrap();
			ClapTrap(const ClapTrap &src);
			ClapTrap(const std::string &name, unsigned int hp, unsigned int ep, unsigned int attack);
			ClapTrap(const std::string &name);
			
			// Destructor
			~ClapTrap();
			
			// Operators
			ClapTrap & operator=(const ClapTrap &assign);
			
			// Getters / Setters
			const std::string &	getName() const;
			void 				setName(const std::string &name);
			unsigned int		getHp() const;
			void 				setHp(unsigned int hp);
			unsigned int		getEp() const;
			void				setEp(unsigned int ep);
			unsigned int		getAttack() const;
			void				setAttack(unsigned int attack);

			//Actions
			void	attack(const std::string &target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
			void	dispStats( void );
	};

#endif

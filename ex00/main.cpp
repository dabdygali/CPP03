/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:23:34 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/21 10:56:31 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ClapTrap.hpp"

int	main()
{
	std::string	name1("CL4P-TP");
	std::string	name2("Skag");
	ClapTrap	a(name1);
	ClapTrap	b(name2);

	a.setAttack(4);
	b.setAttack(3);
	
	a.attack(b.getName());
	b.takeDamage(a.getAttack());
	
	b.attack(a.getName());
	a.takeDamage(b.getAttack());

	a.attack(b.getName());
	b.takeDamage(a.getAttack());
	
	b.attack(a.getName());
	a.takeDamage(b.getAttack());

	a.attack(b.getName());
	b.takeDamage(a.getAttack());
	
	b.attack(a.getName());
	b.beRepaired(1);

	a.beRepaired(3);	

	return EXIT_SUCCESS;
}

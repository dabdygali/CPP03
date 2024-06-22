/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:23:34 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/22 15:15:19 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "DiamondTrap.hpp"
#include <iostream>

int	main()
{
	std::string	name("DMND-TP");
	DiamondTrap	dmnd(name);

	dmnd.attack("Test");
	std::cout << dmnd.getDiamondName() << std::endl;
	std::cout << dmnd.getName() << std::endl;
	std::cout << dmnd.ScavTrap::getName() << std::endl;
	std::cout << dmnd.FragTrap::getName() << std::endl;

	dmnd.highFivesGuys();
	dmnd.whoAmI();
	
	return EXIT_SUCCESS;
}

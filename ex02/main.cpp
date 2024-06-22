/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:23:34 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/22 11:55:34 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "FragTrap.hpp"

int	main()
{
	std::string	name("FR4G-TP");
	FragTrap	frag(name);

	frag.highFivesGuys();
	frag.attack("Test");
	frag.takeDamage(20);
	frag.beRepaired(5);
	frag.takeDamage(1000);
	frag.beRepaired(50);
	return EXIT_SUCCESS;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:23:34 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/21 16:42:13 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	std::string	name1("CL4P-TP");
	std::string	name2("SC4V-TP");

	ScavTrap	scav(name2);
	//ClapTrap	clap(name1);

	//clap.attack("Test");
	scav.attack("Test");

	return EXIT_SUCCESS;
}

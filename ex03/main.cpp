/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:23:34 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/22 13:46:18 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "DiamondTrap.hpp"

int	main()
{
	std::string	name("DMND-TP");
	DiamondTrap	dmnd(name);

	dmnd.attack("Test");
	return EXIT_SUCCESS;
}

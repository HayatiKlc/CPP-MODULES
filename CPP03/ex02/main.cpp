/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkilic <hkilic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:53:29 by hkilic            #+#    #+#             */
/*   Updated: 2023/05/09 14:53:29 by hkilic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"
#include "ScavTrap.h"

int	main()
{
	FragTrap	ft;
	ScavTrap	st;
	ClapTrap	ct;

	ft.attack("Zombie");
	ft.highFivesGuys();
	ft.takeDamage(25);
	ct.attack("omg");
	ft.beRepaired(22);
	ft.highFivesGuys();
	st.attack("can");
	st.guardGate();
	std::cout << ft;
	std::cout << "-----------------" << std::endl;
	std::cout << st;

}
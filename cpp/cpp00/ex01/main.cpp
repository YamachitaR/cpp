/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:53:15 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/08/04 22:10:12 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main(void)
{
	std::string	input;
	PhoneBook phonebook;
	
	while(1)
	{
		std::cout << "The program only accepts ADD, SEARCH and EXIT" << std::endl;
		std::cin >> input;
		if(input == "ADD")
			phonebook.add( );
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			return (0); 
	}
	return (0); 	
}

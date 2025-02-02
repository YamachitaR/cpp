/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 07:13:18 by ryoshio-          #+#    #+#             */
/*   Updated: 2023/10/28 16:33:40 by ryoshio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{

	if(!checkArgc(argc))
		return (1);
	
	RPN a;

	try{
		std::cout<< a.calculation(argv[1]) << std::endl;;
	}
	catch(std::exception &e){
		std::cout << e.what()  << std::endl;
	}
	
	return (0);
}
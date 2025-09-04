/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 08:39:14 by vpolojie          #+#    #+#             */
/*   Updated: 2024/06/12 10:49:05 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

int main(int argc, char **argv)
{
    if (argc != 3)
        std::cout << "Error : incorrect number of arguments" << std::endl;
    else
    {
        std::cout << "Hello World, this is C++ running in a Docker container!" << std::endl;
        std::cout << "Argument 1: " << argv[1] << std::endl;
        std::cout << "Argument 2: " << argv[2] << std::endl;
    }
}
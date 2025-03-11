/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:36:01 by asayad            #+#    #+#             */
/*   Updated: 2025/02/11 13:41:48 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string x = "HI THIS IS BRAIN";
    std::string *x_ptr = &x;
    std::string& x_ref = x;

    std::cout << "x's address : " << &x << std::endl;
    std::cout << "x's address through x_ptr : " << x_ptr << std::endl;
    std::cout << "x's address through x_ref : " << &x_ref << std::endl;
    std::cout << "x's value : " << x << std::endl;
    std::cout << "x's value through x_ptr : " << *x_ptr << std::endl;
    std::cout << "x's value through x_ref : " << x_ref << std::endl;
}
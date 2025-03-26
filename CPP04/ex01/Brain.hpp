/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 02:49:49 by asayad            #+#    #+#             */
/*   Updated: 2025/03/26 12:11:04 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <vector>
#include <string>

class Brain{
    public:
        std::string ideas[100];
        Brain();
        Brain(std::string *ids, size_t size);
        Brain(const Brain& b);
        Brain& operator=(const Brain& b);
        ~Brain();
};

#endif
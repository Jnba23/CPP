/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:07:14 by asayad            #+#    #+#             */
/*   Updated: 2025/02/10 20:30:11 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class human {
   private:
         std::string n;
         std::string ln;
         std::string g;
   public:
      void  id();
   human(std::string name, std::string l_n, std::string gen)
   {
      std::cout << "constructor called !" << std::endl;
      n = name;
      ln = l_n;
      g = gen;
   }
   human(human& x)
   {
      std::cout << "copy constructor called !" << std::endl;
      n = x.n;
      ln = x.ln;
      g = x.g;
   }
} ;

void human::id()
{
   std::cout << n << ln << g << std::endl;
}

int main()
{
   human x("Allo", "ALLo", "walo");
   human p(x);
   p.id();
}
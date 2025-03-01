/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 08:41:53 by asayad            #+#    #+#             */
/*   Updated: 2025/02/13 18:00:31 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "s_nd_replace.hpp"

	std::string search_nd_replace(std::string f_content, std::string s1, std::string s2){
		size_t	pos, start = 0;
		std::string res;

		if (s1.empty())
			return (f_content);
		while ((pos = f_content.find(s1, start)) != std::string::npos){
			res += f_content.substr(start, pos - start);
			res += s2;
			start = pos + s1.length();
		}
		res += f_content.substr(start);
		return (res);
	}

	int main(int ac, char **av){
		if (ac == 4)
		{
			std::ifstream f1(av[1], std::ios_base::in);
			if (!f1)
			{
				std::cout << "Invalid infile !" << "\n";
				return (1);
			}
			std::string f1_content;
			std::string temp;
			bool		newline = true;
			while (std::getline(f1, temp)){
				if (!newline)
					f1_content += "\n";
				f1_content += temp;
				newline = false;
			}
			std::string s1 = (const char *)av[2];
			std::string s2 = (const char *)av[3];
			std::string res(search_nd_replace(f1_content, s1, s2));
			std::string f_name = std::string(av[1]) + ".replace";
			std::ofstream f2(f_name.c_str(), std::ios_base::out);
			if (!f2)
			{
				std::cout << "Unable to create " << f_name << "\n";
				f1.close();
				return (1);
			}
			f2 << res;
			f2.close();
		}
		else
			std::cout << "Too many or few args !" << std::endl;
		return (0);
	}
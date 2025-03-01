/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayad <asayad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 09:45:58 by asayad            #+#    #+#             */
/*   Updated: 2025/02/14 13:41:44 by asayad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl {
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		typedef struct level_s{
			void		(Harl::*f)();
		} level_t;
		enum complaint_level {
			DEBUG = 1,
			INFO = 2,
			WARNING = 3,
			ERROR = 4
		};
		void complain(std::string level);
		void level_init(level_t *levels);
		int	 get_complaint_level(std::string& level);
};


#endif
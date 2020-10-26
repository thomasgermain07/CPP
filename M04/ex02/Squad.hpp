/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgermai <thgermai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:28:06 by thgermai          #+#    #+#             */
/*   Updated: 2020/10/24 01:09:51 by thgermai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD
# define SQUAD

# include "ISquad.hpp"
# include <istream>

class		Squad : public ISquad
{
	public :
		Squad();
		Squad(Squad const &ref);
		Squad			&operator=(Squad const &ref);
		~Squad();
		int					getCount() const;
		ISpaceMarine		*getUnit(int n) const;
		int					push(ISpaceMarine *p);
	private :
		typedef struct 		s_container
		{
			ISpaceMarine	*p;
			s_container		*next;
		}					t_container;
		t_container			*head;
		t_container			*tail;
		int					n_container;
		int					pushCont(ISpaceMarine *p);
		int					checkCont(ISpaceMarine *p) const;
		void				cleanCont();
};

#endif
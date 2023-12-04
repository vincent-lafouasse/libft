/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 20:41:31 by poss              #+#    #+#             */
/*   Updated: 2023/12/04 17:35:18 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*mem;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	mem = *lst;
	*lst = new;
	new->next = mem;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poss <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:02:26 by poss              #+#    #+#             */
/*   Updated: 2023/11/28 21:09:21 by poss             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*mem;

	if (*lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		mem = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = mem;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:45:03 by schennal          #+#    #+#             */
/*   Updated: 2024/03/15 19:45:05 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(void *ptr, t_list *mem)
{
	t_list	*prev;

	if (!mem || !ptr)
		return ;
	prev = mem;
	mem = mem->next;
	while (mem)
	{
		if (mem->content == ptr)
		{
			prev->next = mem->next;
			ft_lstdelone(mem, &free);
			break ;
		}
		prev = mem;
		mem = mem->next;
	}
}

void	ft_free_all(t_list *mem)
{
	if (!mem)
		return ;
	ft_lstclear(&mem->next, &free);
}

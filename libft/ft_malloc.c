/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:50:02 by schennal          #+#    #+#             */
/*   Updated: 2024/03/15 19:50:04 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_malloc(size_t size, t_list *mem)
{
	void	*new;
	t_list	*tail;

	new = malloc(size);
	if (!new)
	{
		ft_free_all(mem);
		return (NULL);
	}
	tail = ft_lstlast(mem);
	tail->next = ft_lstnew(new);
	return (new);
}

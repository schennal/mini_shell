/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_m.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:56:12 by schennal          #+#    #+#             */
/*   Updated: 2024/03/15 19:56:14 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_m(char **strarr, t_list *mem)
{
	char	*new;
	int		i;
	int		j;
	int		size;

	if (!strarr)
		return (NULL);
	size = 1;
	i = 0;
	while (strarr[i])
		size += ft_strlen(strarr[i++]);
	new = ft_malloc(size, mem);
	if (!new)
		return (NULL);
	size = 0;
	i = 0;
	while (strarr[i])
	{
		j = 0;
		while (strarr[i][j])
			new[size++] = strarr[i][j++];
		i++;
	}
	return (new);
}

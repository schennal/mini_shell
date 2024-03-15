/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:58:32 by schennal          #+#    #+#             */
/*   Updated: 2024/03/15 19:58:33 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	edge_cond(const char *haystack, const char *needle, size_t len, size_t *n)
{
	*n = ft_strlen(needle);
	if (needle[0] == 0)
		return (0);
	if (haystack == 0 && len == 0)
		return (1);
	if (ft_strlen(haystack) == 0)
		return (1);
	return (2);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	i;
	size_t	j;
	int		cond;

	cond = edge_cond(haystack, needle, len, &n);
	if (cond == 0)
		return ((char *)haystack);
	if (cond == 1)
		return (0);
	i = 0;
	while (i < len && haystack[i] != 0)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			if (i + j >= len)
				return (0);
			j++;
		}
		if (j == n)
			return (&((char *)haystack)[i]);
		i++;
	}
	return (0);
}

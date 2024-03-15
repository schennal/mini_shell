/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:57:53 by schennal          #+#    #+#             */
/*   Updated: 2024/03/15 19:57:55 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			s_len;
	char			*ans;

	if (s == 0 || f == 0)
		return (0);
	s_len = ft_strlen(s);
	ans = malloc(s_len + 1);
	if (!ans)
		return (0);
	ans[s_len] = 0;
	i = 0;
	while (i < s_len)
	{
		ans[i] = f(i, s[i]);
		i++;
	}
	return (ans);
}

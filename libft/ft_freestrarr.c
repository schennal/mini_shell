/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestrarr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:45:44 by schennal          #+#    #+#             */
/*   Updated: 2024/03/15 19:45:46 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freestrarr(char	**strarr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(strarr[i]);
		i++;
	}
	free(strarr);
}
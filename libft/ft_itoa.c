/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:47:49 by schennal          #+#    #+#             */
/*   Updated: 2024/03/15 19:47:51 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	put_arr(char **str, long n, int idx)
{
	if (n < 0)
	{
		n *= -1;
		(*str)[0] = '-';
	}
	if (n >= 10)
	{
		put_arr(str, n / 10, idx - 1);
	}
	(*str)[idx] = '0' + (n % 10);
}

static int	get_digits(int n)
{
	int	digits;

	digits = 0;
	if (n < 0)
		digits++;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	if (digits == 0)
		digits++;
	return (digits);
}

char	*ft_itoa(int n)
{
	int		digits;
	char	*ans;

	digits = get_digits(n);
	ans = malloc(digits + 1);
	if (!ans)
		return (0);
	ans[digits] = 0;
	put_arr(&ans, n, digits - 1);
	return (ans);
}

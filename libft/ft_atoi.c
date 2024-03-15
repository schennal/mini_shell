/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:42:42 by schennal          #+#    #+#             */
/*   Updated: 2024/03/15 19:42:53 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_count_sign(const char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			count = -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	ans;
	int	i;

	ans = 0;
	sign = ft_count_sign(str, &i);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		ans *= 10;
		ans += str[i] - '0';
		i++;
	}
	return (sign * ans);
}
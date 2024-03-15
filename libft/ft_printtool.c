/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printtool.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schennal <schennal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:52:56 by schennal          #+#    #+#             */
/*   Updated: 2024/03/15 19:52:58 by schennal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n, unsigned int *ct)
{
	char	o;

	if (n == -2147483648)
	{
		write(1, "-2", 2);
		*ct += 2;
		ft_putnbr(147483648, ct);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		(*ct)++;
		ft_putnbr(-n, ct);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, ct);
		ft_putnbr(n % 10, ct);
	}
	else
	{
		o = '0' + n;
		write(1, &o, 1);
		(*ct)++;
	}
}

void	ft_putnbr_u(unsigned int n, unsigned int *ct)
{
	char	o;

	if (n > 9)
		ft_putnbr_u(n / 10, ct);
	o = '0' + n % 10;
	write(1, &o, 1);
	(*ct)++;
}

void	ft_putstr(char *s, unsigned int *ct)
{
	unsigned int	i;

	if (s == 0)
	{
		write(1, "(null)", 6);
		*ct += 6;
		return ;
	}
	i = 0;
	while (s[i] != 0)
	{
		write(1, s + i, 1);
		(*ct)++;
		i++;
	}
}

void	ft_putchar(char c, unsigned int *ct)
{
	write (1, &c, 1);
	(*ct)++;
}

void	ft_putptr(void *ptr, unsigned int *ct)
{
	if ((unsigned long)ptr > 15)
	{
		ft_putptr((void *)((unsigned long)ptr / 16), ct);
	}
	write(1, &("0123456789abcdef"[(unsigned long)ptr % 16]), 1);
	(*ct)++;
}

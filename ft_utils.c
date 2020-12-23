/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgeymond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 11:22:41 by sgeymond          #+#    #+#             */
/*   Updated: 2020/12/18 03:26:11 by sgeymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void						ft_putchar(char c)
{
	write(1, &c, 1);
	g_nbrchar++;
}

void						ft_putstr(char *str)
{
	int			i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		g_nbrchar = g_nbrchar + 6;
	}
	else
	{
		while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}

long long unsigned int		ft_power(long long int nb, int power)
{
	long long			int		a;
	long long unsigned	int		b;

	a = nb;
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power != 1)
	{
		nb = nb * a;
		power--;
	}
	b = (long long int)nb;
	return (b);
}

int							ft_strlen(char *str)
{
	int			i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void						ft_putnbr(long int n)
{
	int			b;
	int			c;

	if (n == -2147483648)
		ft_putstr("2147483648");
	if (n < 0 && n != -2147483648)
	{
		ft_putchar('-');
		n = -n;
	}
	b = n;
	c = 1;
	while (b > 9)
	{
		b = b / 10;
		c = c * 10;
	}
	(n == -2147483648) ? c = 0 : 0;
	while (n > 0 || c != 0)
	{
		ft_putchar(n / c + 48);
		n = n - (n / c) * c;
		c = c / 10;
	}
}

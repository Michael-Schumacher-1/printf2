/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_options3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 21:42:29 by sylvain           #+#    #+#             */
/*   Updated: 2020/12/22 06:34:57 by sgeymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_percentage(t_p *p, int j)
{
	if (p->nb < 0)
		p->nb = p->nb * -1;
	while (((j++ < p->nb - 1) && p->k != 2 && p->k != 4 && p->e == 0) ||
			(p->k == 4 && p->e == 0 && j < p->nb))
	{
		if (p->k == 9 || p->k == 3 || p->k == 4)
			ft_putchar('0');
		else
			ft_putchar(' ');
	}
	ft_putchar('%');
	j--;
	while (j++ < p->nb - 1)
		ft_putchar(' ');
	p->l = 1;
}

void	ft_number_or_star2(t_p *p, const char *format)
{
	if (format[p->i] == '*')
	{
		p->nb = va_arg(p->list, int);
		if ((format[p->i - 1] == '-' && p->nb >= 0) || (p->nb < 0))
			p->e = 1;
		p->d = 1;
		if (p->nb < 0 && p->k != 4)
			p->k = 2;
	}
	else
	{
		p->nb = ft_atoi(format + p->i);
		if (format[p->i - 1] == '-')
			p->e = 1;
	}
}

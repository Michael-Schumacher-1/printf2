/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:46:12 by sylvain           #+#    #+#             */
/*   Updated: 2020/12/22 02:40:12 by sgeymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putu5(t_p *p)
{
	while (p->j++ < p->ne && p->k != 8 && p->e != 1)
		ft_putchar(' ');
	p->j = 0;
	if (p->m == 1 && p->k != 8)
		ft_putchar('-');
	while (p->j++ < p->n0)
		ft_putchar('0');
	if (p->k == 1 || p->k == 0 || p->k == 3 || p->k == 5 || (p->k == 8 &&
	p->n0 != 0) || (p->k == 9) || (p->k == 12) || (p->k == 10) || (p->k == 4))
		ft_putnbr_base(p, "0123456789", 1);
	p->j = 0;
	while (p->j++ < p->ne && p->e == 1)
		ft_putchar(' ');
}

void	ft_putu4(t_p *p, const char *format)
{
//	printf("putu4 d = %d e = %d\n", p->d, p->e);
	if (p->na != 0)
	{
		if (p->na < 0 && p->e == 0 && p->d != 2 && ft_display_0_or_space(format, p) == 48)
			p->n0 = p->nb - p->nl;
		else
			p->n0 = p->na - p->nl;
	}
	else if ((p->k == 3 && p->d == 0 && p->na < 0 && p->nb > 0) ||
	(p->k == 9 && (p->d == 1 || p->d == 0) && p->na <= 0 && p->nb > p->nl))
		p->n0 = p->nb - p->nl;
	if (p->n0 < 0)
		p->n0 = 0;
}

void	ft_putu3(t_p *p, const char *format)
{
	if ((p->k == 9 || p->k == 12) && (p->nb > 0 && p->na != 0))
		p->n0 = p->nb - p->nl - p->m;
	else if ((p->k == 9 || p->k == 12) && (p->nb == 0))
		p->n0 = p->na - p->nl - p->m;
	else
	{
		if (p->na > p->nl)
			p->n0 = p->na - p->nl;
		else if ((p->nb > p->nl && p->k == 9) || (p->k == 12) ||
				(p->k == 3 && p->nb > p->nl))
			ft_putu4(p, format);
		else
			p->n0 = 0;
	}
}

void	ft_putu2(t_p *p)
{
	p->j = 0;
	if (p->k == 4 && (p->na >= 0 || p->nb >= 0))
	{
		if (p->nb >= 0 && p->na >= 0 && p->nb > p->na)
			p->n0 = p->na - p->nl;
		else if (p->na > p->nb)
			p->n0 = p->na - p->nl;
		else
			p->n0 = p->nb - p->nl;
		if (p->n0 < 0)
			p->n0 = 0;
	}
	if (p->nb < 0)
		p->ne = (p->nb * -1) - (p->nl + p->n0 + p->l);
	else
		p->ne = p->nb - (p->nl + p->n0 + p->m);
	if (p->k == 2 || (p->k == 8))
	{
		if (p->m == 1)
			ft_putchar('-');
		if (p->n0 == 0)
			ft_putnbr_base(p, "0123456789", 1);
	}
	ft_putu5(p);
}

void	ft_putu(t_p *p, const char *format)
{
	p->m = 0;
	p->n0 = 0;
	p->j = 0;
	if (p->na == 0 && p->testc == 0 && p->k != 0 &&
			p->k != 2 && p->k != 12 && p->k != 9)
	{
		if (p->nb < 0)
			p->nb = p->nb * -1;
		while (p->j++ < p->nb)
			ft_putchar(' ');
	}
	else
	{
		//printf("ft_putu k = p->k = %d\n", p->k);
		p->nl = ft_putnbr_base(p, "0123456789", 2);
		if ((((p->k == 3 || p->k == 8) && p->na != 0))
				|| (p->k == 9) || (p->k == 12))
			ft_putu3(p,format);
		ft_putu2(p);
	}
}

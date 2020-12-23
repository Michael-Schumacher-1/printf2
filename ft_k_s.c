/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_k_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:45:22 by sylvain           #+#    #+#             */
/*   Updated: 2020/12/22 10:27:01 by sgeymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_k_zero_s(t_p *p)
{
	if (p->nb < 0)
		p->ne = (p->nb * -1) - p->nl;
	else
		p->ne = p->nb - p->nl;
	while (p->ib++ < p->ne && p->nb > 0)
		ft_putchar(' ');
	p->ib = 0;
	p->nb = p->nb - p->ne;
	while (p->ib++ < p->nb)
		ft_putchar(p->str[p->ib - 1]);
}

void	ft_k_two_eight_s(t_p *p)
{
	if (p->nl > p->na && (p->na > 0 || (p->k == 2 && p->na != 0)))
		p->nl = p->na;
	if (p->nb < 0)
		p->nb = p->nb * -1;
	if (p->str == NULL && ((p->na > 5 || p->na < 0) || p->k == 2))
		p->ne = p->nb - 6;
	else
	{
		if (p->na == 0 && p->k == 8)
			p->ne = p->nb;
		else
			p->ne = p->nb - p->nl;
	}
	p->nb = p->nb - p->ne;
	while (p->ib++ < p->nb)
		ft_putchar(p->str[p->ib - 1]);
	p->ib = 0;
	while (p->ib++ < p->ne)
		ft_putchar(' ');
}

void	ft_k_three_n_zero_s(t_p *p)
{
	if (p->k == 3 && p->nb == 0)
	{
		if (p->na < 0)
			p->na = p->nl;
		while (p->ib < p->na && p->ib++ < p->nl)
			ft_putchar(p->str[p->ib - 1]);
	}
}

void	ft_k_three_n_not_zero_s(t_p *p, const char *format)
{
	int a;

	a = p->na;
	if (p->nb < 0)
		p->nb = p->nb * -1;
	if (p->na < 0)
		p->na = p->nl;
	if (p->na > p->nl)
		p->na = p->nl;
	if (p->k == 3)
		p->ne = p->nb - p->na;
	if (p->k == 9)
		p->ne = p->nb - p->nl;
	ft_k_three_n_not_zero_s_part_2(p, a, format);
}

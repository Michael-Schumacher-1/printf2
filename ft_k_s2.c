/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_k_s2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 21:21:41 by sylvain           #+#    #+#             */
/*   Updated: 2020/12/22 11:29:57 by sgeymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


void		ft_k_four_s(t_p *p, const char *format)
{
	p->ib = 0;
	p->n0 = p->nb - p->nl;
	while (p->ib++ < p->n0)
		ft_putchar('0');
	p->ib = 0;
	//printf("na = %d nl = %d\n", p->na, p->nl);
	while(p->ib < p->nl && p->ib < p->na)
	{
		ft_putchar(p->str[p->ib]);
		p->ib ++;
	}
	if (p->nb < 0)
		p->nb = p->nb * -1;
	else
	{
		p->nb = 0;//p->nb - p->nl;
	}
	while(p->ib < p->nb)
	{
		ft_putchar(' ');
		p->ib++;
	}
}
int		ft_display_0_or_space(const char *format, t_p *p)
{
	int j;

	j = p->i;
	while (format[j] != '%')
		j--;
	j++;
	if (format[j] == '0')
		return (48);
	return (32);
}

int		ft_9_or_3(t_p *p)
{
	if (p->k == 3)
		return (p->na);
	return (p->nl);
}

void	ft_k_three_n_not_zero_s_part_2(t_p *p, int a, const char *format)
{
	char	b;
	int		c;

	b = ft_display_0_or_space(format, p);
	c = ft_9_or_3(p);
	while ((p->k == 3 || p->k == 9) && p->ib++ < p->ne && p->e == 0)
		ft_putchar(b);
	p->ib = 0;
	while (p->ib++ < c && p->str != NULL)
		ft_putchar(p->str[p->ib - 1]);
	if (p->str == NULL && (a < 0 || a > 5))
		ft_putstr("(null)");
	p->ib = 0;
	while (p->ib++ < p->ne && p->e == 1)
		ft_putchar(' ');
}

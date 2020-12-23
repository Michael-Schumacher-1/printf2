/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 01:45:27 by sylvain           #+#    #+#             */
/*   Updated: 2020/12/23 15:49:27 by sgeymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_test_equal_zero(t_p *p)
{
	int zero;

	zero = 0;
	//printf("k = %d e = %d d = %d nb = %d\n ", p->k, p->e, p->d, p->nb);
	if (p->k == 3)
		p->nb = p->nb - 1;//(p->na + 2);
	//printf("nb = %d\n", p->nb);
	while (p->j++ < p->nb && p->k != 2 && p->k != 8 && p->e == 0)
		ft_putchar(' ');
	p->j--;
	if (p->k == 3 && p->na > -1)
		ft_putstr("0x");
	else
		ft_putstr("0x0");
	while (zero++ < p->na)
		ft_putchar('0');
	while (p->j++ < p->nb && ((p->k == 2 && p->nl != 16) || p->k == 8 ||
				(p->k == 3 && p->e == 1)))
		ft_putchar(' ');
}

void	ft_putp2(t_p *p, int a)
{
	int b;
	//printf("testc  = %ld\n", p->testc);
	if (p->testc == 0)
		ft_test_equal_zero(p);
	else
	{
		b = p->na - ft_putnbr_base_p(p, "0123456789abcdef", 2);
		if (b < 0 || a < 0)
			b = 0;
	//	printf("b = %d", b);

	//printf("k = %d e = %d d = %d nb = %d na = %d a =%d zero = %d\n ", p->k, p->e, p->d, p->nb, p->na, a, p->zero);
		if (p->k == 2 || p->k == 8 || (p->k == 3 && a < 0)) 
			ft_putnbr_base_p(p, "0123456789abcdef", 7);
		while (p->nb0++ < p->nb - b)//(p->na - ft_putnbr_base_p(p, "0123456789abcdef", 2)))) //- p->zero)
		{
			if (p->k == 1)
				ft_putchar('0');
			else
				ft_putchar(' ');
		}
		if (p->k == 1 || p->k == 0 || ((p->k == 3 && a >= 0)))
			ft_putnbr_base_p(p, "0123456789abcdef", 7);
	}
	p->k = 0;
}

void	ft_putp(t_p *p)
{
	int a;

	a = p->nb;
	if (p->testc == 0)
		p->nl = 0;
	else
		p->nl = ft_putnbr_base_p(p, "0123456789abcdef", 2) + 2;
	if (p->nb < 0)
		p->nb = p->nb * -1;
	p->nb = p->nb - p->nl;
	if (p->testc == 0)
		p->nb = p->nb - 3;
	p->j = 0;
	ft_putp2(p,a);
}

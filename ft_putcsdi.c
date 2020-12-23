/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcsdi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:46:04 by sylvain           #+#    #+#             */
/*   Updated: 2020/12/22 09:41:01 by sgeymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putdi2(t_p *p, int z, const char *format)
{
	if (((((p->k == 3 && p->na > 0 && ft_display_0_or_space(format, p) == 32) || p->k == 8) && p->na != 0))
			|| (p->k == 9) || (p->k == 12) || (p->k == 3 && ft_display_0_or_space(format, p) == 48))
		ft_k_three_eight_nine_twelve_di(p);
	p->j = 0;
	p->ne = p->nb - (p->nl + p->n0 + p->m);
	if (p->k == 2 || (p->k == 8 ))
		ft_k_two_eight_di(p);
	while ((p->j++ < p->ne && (p->k != 8) && z > 0) && p->e != 1)
		ft_putchar(' ');
	p->j = 0;
//	printf("m = %d\n", p->m);
	if (p->m == 1 && p->k != 8 && p->k != 2) //|| (p->k == 8 && p->test == -2147483648))) //&& p->test != -2147483648)
	{
	//	printf("c'est la que j'ecris le moins");
		ft_putchar('-');
	}
	while (p->j++ < p->n0)
		ft_putchar('0');
	if (p->k == 1 || p->k == 0 || p->k == 3 || p->k == 5 || (p->k == 8 &&
		p->n0 != 0) || (p->k == 9) || (p->k == 12) || p->k == 10 || p->k == 4)
		ft_putnbr(p->test);
	p->j = 0;
	while (p->j++ < p->ne && (p->k == 8 || (p->k == 4 && z < 0)
				|| (p->k == 2) || p->k == 3) && p->e == 1)
		ft_putchar(' ');
	p->k = 0;
}

int		ft_display_0_or_not(t_p *p)
{
	if (p->test == 0)
	{
		if ((p->na <= 0 && p->nb < 0) && (p->k != 12 && p->k != 0 && p->k != 9
					&& p->k != 2 && p->k != 8 && p->k != 4))
			return (1);
		if ((p->test == 0 && (p->k == 3 || p->k == 8) && p->na == 0 &&
					(p->d == 2 || p->d == 0)))
			return (1);
		if (p->k == 3 && p->na == 0 && p->nb >= 0 && p->d == 0 && p->test == 0)
			return (1);
		if (p->k == 4 && p->na == 0)
			return (1);
	}
	return (0);
}

void	ft_putdi(t_p *p, const char *format)
{
	int	z;

	//printf("ft_putcsdi k = %d\n", p->k);
	p->m = 0;
	p->n0 = 0;
	p->j = 0;
	z = p->nb;
	if (ft_display_0_or_not(p) == 1)
	{
		if (p->nb < 0)
			p->nb = p->nb * -1;
		while (p->j++ < p->nb)
			ft_putchar(' ');
	}
	else
	{
		if (p->k == 4)
			ft_k_four(p);
		if (p->nb < 0)
			p->nb = p->nb * -1;
		if (p->test < 0 && (p->k == 3 || p->k == 8 || (p->k == 2 && p->test == INT_MIN)
					|| p->k == 9 || p->k == 12 || p->k == 4 || (p->k == 0 && p->test == INT_MIN)))
			ft_test_negative_di(p);
		p->nl = number_lenght(p->test);
		ft_putdi2(p, z, format);
	}
}

void	ft_puts(t_p *p, const char *format)
{
	//printf("puts k = %d\n", p->k);
	p->ib = 0;
	p->ne = 0;
	p->nl = ft_strlen(p->str);
	if (p->k == 10 && p->str != NULL)
		p->k = 8;
	if (p->k == 0)
		ft_k_zero_s(p);
	if (p->k == 2 || p->k == 8)
		ft_k_two_eight_s(p);
	if (p->k == 3 && p->nb == 0)
		ft_k_three_n_zero_s(p);
	if ((p->k == 3 || p->k == 9) && p->nb != 0)
		ft_k_three_n_not_zero_s(p, format);
	if (p->k == 4)
		ft_k_four_s(p, format);
	if (p->k == 10)
	{
		if (p->na > 5)
			ft_putstr("(null)");
		else
			while (p->ib++ < p->nb)
				ft_putchar(' ');
	}
	p->k = 0;
}

void	ft_putc(t_p *p)
{
	if (p->nb < 0)
		p->nb = p->nb * -1;
	p->nb = p->nb - 1;
	p->j = 0;
	if (p->k == 2)
		ft_putchar(p->c);
	while (p->j++ < p->nb)
		if (p->k != 1)
			ft_putchar(' ');
	if (p->k == 1 || p->k == 0 || p->k == 3)
		ft_putchar(p->c);
	p->k = 0;
}

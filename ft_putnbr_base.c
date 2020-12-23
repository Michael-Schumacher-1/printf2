/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:44:01 by sylvain           #+#    #+#             */
/*   Updated: 2020/12/23 15:07:24 by sgeymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int					base_is_valid(char *base)
{
	int				i;
	int				j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if ((base[i] != base[j] || i == j) &&
					(base[j] != '+' && base[j] != '-'))
				j++;
			else
				return (1);
		}
		i++;
	}
	i = 0;
	while (base[i])
		i++;
	if (i < 2)
		return (1);
	return (0);
}

int					ft_putnbr_base2(t_p *p, char *base, int a)
{
	if (a == 7 || a == 3)
		ft_putstr("0x");
	while (p->nmb2 / p->lenght_base2 > 0)
	{
		p->pow2++;
		p->nmb2 = p->nmb2 / p->lenght_base2;
	}
	p->nc = (long long unsigned int)p->testc;
	while (p->pow2 > -1)
	{
		while ((p->lenght_base2 - 1) *
				ft_power(ft_strlen(base), p->pow2) > p->nc)
			p->lenght_base2--;
		if (a == 1 || a == 3)
			ft_putchar(base[p->lenght_base2 - 1]);
		p->b++;
		p->nc = p->nc - ((p->lenght_base2 - 1) *
				ft_power(ft_strlen(base), p->pow2));
		p->lenght_base2 = ft_strlen(base);
		p->pow2--;
	}
	return (p->b);
}

int					ft_putnbr_base(t_p *p, char *base, int a)
{
	p->b = 0;
	if (p->testc == 0 && a == 3)
		ft_putstr("0x0");
	else
	{
		p->nmb2 = p->testc;
		p->lenght_base2 = ft_strlen(base);
		p->pow2 = 0;
		p->nmb2 < 0 && p->nmb2 != -2147483648 ? ft_putchar('-') : 0;
		p->nmb2 < 0 ? p->nmb2 = p->nmb2 * -1 : 0;
		p->testc = p->nmb2;
		if (base_is_valid(base) == 0)
			return (ft_putnbr_base2(p, base, a));
	}
	return (p->b);
}

int					ft_putnbr_base_x2(t_p *p, char *base, int a)
{
	if (a == 7)
		ft_putstr("0x");
	while (p->testc / p->lenght_base > 0)
	{
		p->pow++;
		p->testc = p->testc / p->lenght_base;
	}
	p->testc = p->nmb;
	if (a == 2)
		return (p->pow + 1);
	while (p->pow > -1)
	{
		while ((p->lenght_base - 1) *
				ft_power(ft_strlen(base), p->pow) > p->nmb)
			p->lenght_base--;
		ft_putchar(base[p->lenght_base - 1]);
		p->nmb = p->nmb - ((p->lenght_base - 1)
				* ft_power(ft_strlen(base), p->pow));
		p->lenght_base = ft_strlen(base);
		p->pow--;
	}
	return (p->nmb + 1);
}

int					ft_putnbr_base_x(t_p *p, char *base, int a)
{
	p->nmb = p->testc;
	p->lenght_base = ft_strlen(base);
	p->pow = 0;
	p->testc = p->nmb;
	if (p->testc == 0 && a == 3)
		ft_putstr("0x");
	else if (base_is_valid(base) == 0)
		return (ft_putnbr_base_x2(p, base, a));
	return (p->nmb + 1);
}

int					ft_putnbr_base_p2(t_p *p, char *base, int a)
{
	//int b;
	int d;
	//int zero;

	p->nb0 = 0;
	p->zero = 0;
	d = 0;
	if (a == 7)
	{
		//printf("hey !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
		ft_putstr("0x");
		p->zero = p->na - ft_putnbr_base_p2(p,"0123456789abcdef",2);
		//printf("putnbr zero = %d\n", p->zero); 
		//printf("c = %d\n", c);
		while(p->nb0++ < p->zero)
		{
		//	printf("%d < %d\n",b,c);
			ft_putchar('0');
		}
		p->nb0--;
	}
	while (p->testc / p->lenght_base > 0)
	{
		p->pow++;
		p->testc = p->testc / p->lenght_base;
	}
	p->testc = p->nmb;
	if (a == 2)
		return (p->pow + 1);
	while (p->pow > -1)
	{
		while ((p->lenght_base - 1) *
				ft_power(ft_strlen(base), p->pow) > p->nmb)
			p->lenght_base--;
		if (d == 0 && base[p->lenght_base - 1] == '0')
			d = 0;
		else
		{
			ft_putchar(base[p->lenght_base - 1]);
			d = 1;
		}
		p->nmb = p->nmb - ((p->lenght_base - 1) *
		ft_power(ft_strlen(base), p->pow));
		p->lenght_base = ft_strlen(base);
		p->pow--;
	}
	return (p->nmb + 1);
}

int				ft_putnbr_base_p(t_p *p, char *base, int a)
{
	int b;
	int c;

	b = 0;
	p->nmb = p->testc;
	p->lenght_base = ft_strlen(base);
	p->pow = 0;
	p->testc = p->nmb;
	if (p->testc == 0 && a == 3)
		ft_putstr("0x");
	else if (base_is_valid(base) == 0)
		return (ft_putnbr_base_p2(p, base, a));
	return (p->nmb + 1);
}

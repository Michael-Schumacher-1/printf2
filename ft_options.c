/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_options.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:45:43 by sylvain           #+#    #+#             */
/*   Updated: 2020/12/23 16:19:45 by sgeymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_point(t_p *p, const char *format)
{
	if (p->k == 2)
		p->k = 8;
	if (format[p->i - 1] == '*' && format[p->i - 2] == '0')
		p->k = 4;
	else
		p->k = 3;
}

void	ft_negative(t_p *p, const char *format)
{
	int j;

	j = 0;
	p->i++;
	if ((format[p->i] > '0' && format[p->i] <= '9') || format[p->i] == '*')
	{
		if (format[p->i] > '0' && format[p->i] <= '9')
			p->nb = ft_atoi(format + p->i);
		p->e = 1;
		p->k = 2;
	}
	p->i--;
	if (format[p->i] == '%')
		ft_percentage(p, j);
}

void	ft_zero(t_p *p, const char *format)
{
	if (format[p->i - 1] == '-')
		p->e = 1;
	if (format[p->i - 1] == '%' && p->test == 0)
		p->k = 12;
	if (format[p->i - 1] == '.')
		p->k = 10;
	else
		p->k = 9;
}

void	ft_number_or_star(t_p *p, const char *format)
{
	if (format[p->i - 1] == '%')
		p->k = 0;
	if (p->k == 3 || p->k == 8 || p->k == 10 || p->k == 4)
	{
		if (format[p->i] == '*')
		{
			p->na = va_arg(p->list, int);
			if (p->d == 1)
				p->d = 2;
		}
		else
			p->na = ft_atoi(format + p->i);
	}
	else
		ft_number_or_star2(p, format);
	while (format[p->i] > 47 && format[p->i] < 58)
		p->i++;
	if (format[p->i] != '*')
		p->i--;
}

void	ft_letters(t_p *p, const char *format)
{
	if (format[p->i] == 'c')
		ft_option_c(p, format);
	if (format[p->i] == 's')
		ft_option_s(p, format);
	if (format[p->i] == 'd' || format[p->i] == 'i')
		ft_option_di(p, format);
	if (format[p->i] == 'p')
		ft_option_p(p, format);
	if (format[p->i] == 'x' || format[p->i] == 'X' || format[p->i] == 'u')
		ft_option_xxu(p, format);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_options2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:45:50 by sylvain           #+#    #+#             */
/*   Updated: 2020/12/23 16:23:37 by sgeymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_option_c(t_p *p, const char *format)
{
	p->c = va_arg(p->list, int);
	if ((format[p->i - 1] >= '0' && format[p->i - 1] <= '9') ||
		format[p->i - 1] == '*' || format[p->i - 1] == '.')
		ft_putc(p);
	else
		ft_putchar(p->c);
}

void	ft_option_s(t_p *p, const char *format)
{
	p->str = va_arg(p->list, char*);
	if (p->str == NULL)
		p->str = "(null)";
	if ((format[p->i - 1] >= '0' && format[p->i - 1] <= '9') ||
			(format[p->i - 1] == '.') || format[p->i - 1] == '*')
		ft_puts(p, format);
	else
	{
		if (format[p->i - 1] == '.')
			ft_putstr("");
		else
			ft_putstr(p->str);
	}
}

void	ft_option_di(t_p *p, const char *format)
{
	p->test = va_arg(p->list, int);
	if ((format[p->i - 1] >= '0' && format[p->i - 1] <= '9') ||
			format[p->i - 1] == '.' || format[p->i - 1] == '*')
	{
		if (p->nb < 0 && format[p->i - 1] == '*')
		{
			if (p->k != 4)
				p->e = 1;
			if (p->k != 4)
				p->k = 8;
		}
		ft_putdi(p, format);
	}
	else
	{
		if (p->test == INT_MIN)
			ft_putchar('-');
		ft_putnbr(p->test);
	}
}

void	ft_option_p(t_p *p, const char *format)
{
	p->testc = va_arg(p->list, unsigned long);
	if ((format[p->i - 1] >= '0' && format[p->i - 1] <= '9') ||
	format[p->i - 1] == '.' || format[p->i - 1] == '*')
		ft_putp(p);
	else
	{
		if (p->testc != 0)
			ft_putnbr_base_x(p, "0123456789abcdef", 7);
		else
			ft_putnbr_base(p, "0123456789abcdef", 3);
	}
}

void	ft_option_xxu(t_p *p, const char *format)
{
	p->testc = va_arg(p->list, unsigned int);
	if ((format[p->i - 1] >= '0' && format[p->i - 1] <= '9') ||
	format[p->i - 1] == '.' || format[p->i - 1] == '*')
	{
		if (format[p->i] == 'x')
			ft_putx(p, format);
		if (format[p->i] == 'X')
			ft_putxx(p, format);
		if (format[p->i] == 'u')
			ft_putu(p, format);
	}
	else
	{
		if (format[p->i] == 'x')
			ft_putnbr_base_x(p, "0123456789abcdef", 1);
		if (format[p->i] == 'X')
			ft_putnbr_base_x(p, "0123456789ABCDEF", 1);
		if (format[p->i] == 'u')
			ft_putnbr_base_x(p, "0123456789", 1);
	}
}

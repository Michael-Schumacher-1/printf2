/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:46:29 by sylvain           #+#    #+#             */
/*   Updated: 2020/12/23 14:17:51 by sgeymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# include <stdarg.h>

int						g_nbrchar;

typedef	struct			s_p
{
	int						i;
	int						nb;
	int						na;
	int						k;
	int						test;
	size_t					testb;
	int						l;
	va_list					list;
	int						nl;
	int						j;
	int						ne;
	int						n0;
	int						m;
	char					*str;
	int						c;
	size_t					testc;
	int						ib;
	long int				lenght_base;
	long int				pow;
	size_t					nmb;
	long int				lenght_base2;
	long int				pow2;
	long long int			nmb2;
	unsigned long long int	nc;
	int						b;
	int						d;
	int						e;
	int						nb0;
	int						zero;
}						t_p;

/*
** main function
*/
int						ft_printf(const char *format, ...);
void					ft_write_data(t_p *p, const char *format);
/*
** ft_utils.c && ft_utils2.c utils function used throughout program
*/
void					ft_putchar(char c);
void					ft_putnbr(long int n);
void					ft_putstr(char *str);
int						ft_strlen(char *str);
long long unsigned int	ft_power(long long int nb, int power);
int						number_lenght(long int nb);
/*
** ft_putnbr_base.c 10 --> 16
*/
int						base_is_valid(char *base);
int						ft_putnbr_base(t_p *p, char *base, int a);
int						ft_putnbr_base2(t_p *p, char *base, int a);
int						ft_putnbr_base_x(t_p *p, char *base, int a);
int						ft_putnbr_base_x2(t_p *p, char *base, int a);
int						ft_putnbr_base_p(t_p *p, char *base, int a);
int						ft_putnbr_base_p2(t_p *p, char *base, int a);
/*
** ft_atoi.c str --> nbr
*/
int						ft_atoi(const char *str);
int						determinate_sign(char c);
int						check_resultat(unsigned long long resultat, int j);
/*
**	ft_putcsdi.c display s,c,d,i options
*/
void					ft_putdi(t_p *p, const char *format);
void					ft_putdi2(t_p *p, int z, const char *format);
int						ft_display_0_or_not(t_p *p);
void					ft_puts(t_p *p, const char *format);
void					ft_putc(t_p *p);
/*
** ft_putp.c display p option
*/
void					ft_putp(t_p *p);
void					ft_putp2(t_p *p, int a);
void					ft_test_equal_zero(t_p *p);
/*
 ** ft_putu display u option
*/
void					ft_putu(t_p *p, const char *format);
void					ft_putu2(t_p *p);
void					ft_putu3(t_p *p, const char *format);
void					ft_putu4(t_p *p, const char *format);
void					ft_putu5(t_p *p);
/*
** ft_putx.c display x option
*/
void					ft_putx(t_p *p, const char *format);
void					ft_putx2(t_p *p);
void					ft_putx3(t_p *p, const char *format);
void					ft_putx4(t_p *p, const char *format);
/*
**	ft_putxx.c display X option
*/
void					ft_putxx(t_p *p, const char *format);
void					ft_putxx2(t_p *p);
void					ft_putxx3(t_p *p, const char *format);
void					ft_putxx4(t_p *p, const char *format);
/*
** ft_options.c && ft_options3.c manage option *, - , 0 , and send informations
** to ft_options2.c in cases of letters
*/
void					ft_point(t_p *p, const char *format);
void					ft_negative(t_p *p, const char *format);
void					ft_percentage(t_p *p, int j);
void					ft_zero(t_p *p, const char *format);
void					ft_number_or_star(t_p *p, const char *format);
void					ft_number_or_star2(t_p *p, const char *format);
void					ft_letters(t_p *p, const char *format);
/*
** ft_option2.c send data to corresponding fonction
*/
void					ft_option_c(t_p *p, const char *format);
void					ft_option_s(t_p *p, const char *format);
void					ft_option_di(t_p *p, const char *format);
void					ft_option_p(t_p *p, const char *format);
void					ft_option_xxu(t_p *p, const char *format);
/*
**	ft_k_s.c && ft_k_s2.c ,  k cases for s option
*/
int						ft_display_0_or_space(const char *format, t_p *p);
int						ft_9_or_3(t_p *p);
void					ft_k_zero_s(t_p *p);
void					ft_k_three_n_zero_s(t_p *p);
void					ft_k_three_n_not_zero_s(t_p *p, const char *format);
void					ft_k_three_n_not_zero_s_part_2(t_p *p, int a,
const char *format);
void					ft_k_two_eight_s(t_p *p);
void					ft_k_four_s(t_p *p, const char *format);
/*
**	ft_k_di k cases for d and i option
*/
void					ft_k_four(t_p *p);
void					ft_k_three_eight_nine_twelve_di(t_p *p);
void					ft_k_two_eight_di(t_p *p);
void					ft_test_negative_di(t_p *p);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:45:58 by sylvain           #+#    #+#             */
/*   Updated: 2020/12/23 16:19:32 by sgeymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_write_data(t_p *p, const char *format)
{
	p->l = 0;
	p->i++;
	while (format[p->i - 1] != 'c' && format[p->i - 1] != 'd' &&
			format[p->i - 1] != 'i' && format[p->i - 1] != 'p' &&
			format[p->i - 1] != 's' && format[p->i - 1] != 'u' && format[p->i - 1] !=
			'x' && format[p->i - 1] != 'X' && format[p->i] != '\0' && p->l == 0)
	{
		if (format[p->i] == '-' || format[p->i] == '%')
			ft_negative(p, format);
		if (format[p->i] == 'c' || format[p->i] == 'd' || format[p->i] == 'i'
				|| format[p->i] == 'p' || format[p->i] == 's' || format[p->i] == 'u' ||
				format[p->i] == 'x' || format[p->i] == 'X')
			ft_letters(p, format);
		if ((format[p->i] > '0' && format[p->i] <= '9') ||
				(format[p->i] == '*'))
			ft_number_or_star(p, format);
		if (((format[p->i] == '0') && ((format[p->i - 1] < '0') ||
						(format[p->i - 1] > '9')) && (((format[p->i + 1] >= '0' &&
									format[p->i + 1] <= '9') || format[p->i + 1] == '*'))))
			ft_zero(p, format);
		if (format[p->i] == '.')
			ft_point(p, format);
		if (format[p->i] == ' ')
			ft_putchar(' ');
		p->i++;
	}
}

int			ft_printf(const char *format, ...)
{
	t_p	*p;

	if (!(p = malloc(sizeof(t_p))))
		return (0);
	p->i = 0;
	p->l = 0;
	g_nbrchar = 0;
	va_start(p->list, format);
	while (format[p->i] != '\0')
	{
		p->k = 0;
		p->na = 0;
		p->nb = 0;
		p->d = 0;
		p->e = 0;
		if (format[p->i] == '%')
			ft_write_data(p, format);
		else
			ft_putchar(format[p->i++]);
	}
	free(p);
	return (g_nbrchar);
}

int		main()
{
	int a = -9; int b = 2; int c = 131; int d = 0; int e = 52; int f = -89;
	int g = -14; int h = 45; int i = 7;
	//char *str = "Louis II de baviere"; 
	//char *str2 = ""; 
	//char *str3 = NULL;
	//char *str4 = "m";
	//char *str5 = "machin land et son compagnon de chambre entre dans la communication la plus totale";
	//char *str6 = "abc";
      printf("printf officiel 1      : %*.*p|\n",a,b,&c);
   ft_printf("mon printf      1      : %*.*p|\n",a,b,&c);
      printf("printf officiel  2     : %*.*p|\n",a,b,d);
   ft_printf("mon printf       2     : %*.*p|\n",a,b,d);
      printf("printf officiel  3     : %*.*p|\n",b,c,d);
   ft_printf("mon printf       3     : %*.*p|\n",b,c,d);
      printf("printf officiel  4     : %*.*p|\n",e,f,g);
   ft_printf("mon printf       4     : %*.*p|\n",e,f,g);
      printf("printf officiel  5     : %*.*p|\n",h,a,b);
   ft_printf("mon printf       5     : %*.*p|\n",h,a,b);
      printf("printf officiel  6     : %*.*p|\n",a,a,a);
   ft_printf("mon printf       6     : %*.*p|\n",a,a,a);
      printf("printf officiel  7     : %*.*p|\n",c,c,c);
   ft_printf("mon printf       7     : %*.*p|\n",c,c,c);
      printf("printf officiel  8     : %*.*p|\n",d,d,d);
   ft_printf("mon printf       8     : %*.*p|\n",d,d,d);
      printf("printf officiel  9     : %*.*p|\n",e,e,e);
   ft_printf("mon printf       9     : %*.*p|\n",e,e,e);
      printf("printf officiel  10    : %*.*p|\n",f,f,f);
   ft_printf("mon printf       10    : %*.*p|\n",f,f,f);
      printf("printf officiel  11    : %*.*p|\n",g,g,g);
   ft_printf("mon printf       11    : %*.*p|\n",g,g,g);
      printf("printf officiel  12    : %*.*p|\n",h,h,h);
   ft_printf("mon printf       12    : %*.*p|\n",h,h,h);
      printf("printf officiel  13    : %*.*p|\n",a,4,b);
   ft_printf("mon printf       13    : %*.*p|\n",a,4,b);
      printf("printf officiel  14    : %*.*p|\n",c,i,b);
   ft_printf("mon printf       14    : %*.*p|\n",c,i,b);
      printf("printf officiel  15    : %*.*p|\n",d,b,b);
   ft_printf("mon printf       15    : %*.*p|\n",d,b,b);
      printf("printf officiel  16    : %*.*p|\n",e,b,b);
   ft_printf("mon printf       16    : %*.*p|\n",e,b,b);
      printf("printf officiel  17    : %*.*p|\n",f,b,b);
   ft_printf("mon printf       17    : %*.*p|\n",f,b,b);
      printf("printf officiel  18    : %*.*p|\n",g,b,b);
   ft_printf("mon printf       18    : %*.*p|\n",g,b,b);
      printf("printf officiel  19    : %*.*p|\n",h,b,b);
   ft_printf("mon printf       19    : %*.*p|\n",h,b,b);
      printf("printf officiel  20    : %*.*p|\n",a,b,c);
   ft_printf("mon printf       20    : %*.*p|\n",a,b,c);
      printf("printf officiel  21    : %*.*p|\n",b,b,c);
   ft_printf("mon printf       21    : %*.*p|\n",b,b,c);
      printf("printf officiel  22    : %*.*p|\n",c,b,c);
   ft_printf("mon printf       22    : %*.*p|\n",c,b,c);
      printf("printf officiel  23    : %*.*p|\n",d,b,c);
   ft_printf("mon printf       23    : %*.*p|\n",d,b,c);
      printf("printf officiel  24    : %*.*p|\n",e,b,c);
   ft_printf("mon printf       24    : %*.*p|\n",e,b,c);
      printf("printf officiel  25    : %*.*p|\n",f,b,c);
   ft_printf("mon printf       25    : %*.*p|\n",f,b,c);
      printf("printf officiel  26    : %*.*p|\n",f,c,c);
   ft_printf("mon printf       26    : %*.*p|\n",f,c,c);
      printf("printf officiel  27    : %*.*p|\n",h,d,a);
   ft_printf("mon printf       27    : %*.*p|\n",h,d,a);
      printf("printf officiel  27    : %5p|\n",e);
   ft_printf("mon printf       27    : %5p|\n",e);
    //  printf("printf officiel new    : %0*.*s|\n",a,b,str3);
   //ft_printf("mon printf      new    : %0*.*s|\n",a,b,str3);
     // printf("printf officiel X      : %0*.*s|\n",a,b,str4);
   //ft_printf("mon printf      X      : %0*.*s|\n",a,b,str4);
     // printf("printf officiel u      : %0*.*s|\n",a,b,str5);
   //ft_printf("mon printf      u      : %0*.*s|\n",a,b,str5);
     // printf("printf officiel        : %0*.*s|\n",a,b,str6);
   //ft_printf("mon printf             : %0*.*s|\n",a,b,str6);
 }
/*

int main(int ac, char **av)
{
	int ret[2];
	char *str			= "astek";
	char stre[] = {'a', 's', 10, 'e', 'k', 0};

	printf("####	# Tests simple : 1 point par test reussi #####\n");
	printf(   "0) Modulo [%%] : {%%}\n");
	my_printf("=> Modulo [%%] : {%%}\n");
	printf(   "1) Nombre signe [d] : {%d}\n", 42);
	my_printf("=> Nombre signe [d] : {%d}\n", 42);
	printf(   "2) Nombre signe [i] : {%i}\n", 42);
	my_printf("=> Nombre signe [i] : {%i}\n", 42);
	printf(   "3) Nombre octal [o] : {%o}\n", 012345);
	my_printf("=> Nombre octal [o] : {%o}\n", 012345);
	printf(   "4) Nombre non signe [u] : {%u}\n", 42);
	my_printf("=> Nombre non signe [u] : {%u}\n", 42);
	printf(   "5) Nombre hexadecimal [x] : {%x}\n", 0x12345);
	my_printf("=> Nombre hexadecimal [x] : {%x}\n", 0x12345);
	printf(   "6) Nombre hexadecimal [X] : {%X}\n", 0x12345);
	my_printf("=> Nombre hexadecimal [X] : {%X}\n", 0x12345);
	printf(   "7) Nombre binaire [b] : {101111101111110000001}\n");
	my_printf("=> Nombre binaire [b] : {%b}\n", 1564545);
	printf(   "8) Caractere [c] : {%c}\n", 42);
	my_printf("=> Caractere [c] : {%c}\n", 42);
	printf(   "9) Chaine [s] : {%s}\n", str);
	my_printf("=> Chaine [s] : {%s}\n", str);
	printf(   "10) Chaine etendue [S] : as\\012ek\n");
	my_printf("=>  Chaine etendue [S] : %S\n", stre);
	printf(   "11) Pointeur [p] : {%p}\n", str);
	my_printf("=>  Pointeur [p] : {%p}\n", str);
	printf(   "12) Mauvais parametre [k] : {%k}\n", 42);
	my_printf("=>  Mauvais parametre [k] : {%k}\n", 42);

	printf("Appuyez sur [entree] pour continuer...\n");
	getchar();

	printf("\n##### Tests pour verifier : -1pt par resultat errone #####\n");
	printf(   "1) Affichage multiple [d d d] : {%d} {%d} {%d}\n", 0, 42, 2147483647);
	my_printf("=> Affichage multiple [d d d] : {%d} {%d} {%d}\n", 0, 42, 2147483647);
	printf(   "2) Affichage multiple [d d d] : {%d} {%d} {%d}\n", -0, -42, -2147483648);
	my_printf("=> Affichage multiple [d d d] : {%d} {%d} {%d}\n", -0, -42, -2147483648);
	printf(   "3) Affichage multiple [c d s] : {%c} {%d} {%s}\n", 42, 42, str);
	my_printf("=> Affichage multiple [c d s] : {%c} {%d} {%s}\n", 42, 42, str);
	printf(   "4) Affichage multiple [X p d] : {%X} {%p} {%d}\n", 0x12345, str, 42);
	my_printf("=> Affichage multiple [X p d] : {%X} {%p} {%d}\n", 0x12345, str, 42);
	printf(   "5) Affichage multiple [s S X] : {%s} {as\\012ek} {%X}\n", str, -1);
	my_printf("=> Affichage multiple [s S X] : {%s} {%S} {%X}\n", str, stre, -1);
	printf(   "5) Affichage long [d d d ...] : %d %d %d %d %d %d %d %d %d %d %d %d\n", 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xA, 0xB, 0xC);
	my_printf("=> Affichage long [d d d ...] : %d %d %d %d %d %d %d %d %d %d %d %d\n", 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xA, 0xB, 0xC);
	printf(   "6) Affichage long [s S s ...] : %s as\\012ek %s as\\012ek %s as\\012ek %s as\\012ek %s as\\012ek %s as\\012ek\n", str, str, str, str, str, str);
	my_printf("=> Affichage long [s S s ...] : %s %S %s %S %s %S %s %S %s %S %s %S\n", str, stre, str, stre, str, stre, str, stre, str, stre, str, stre);

	printf("Appuyez sur une touche pour continuer...\n");
	getchar();

	printf("\n##### Formatage : 1pt pour 3 tests reussis  #####\n");
	printf(   "1) Formatage simple [#d] : {%#d}\n", 42);
	my_printf("=> Formatage simple [#d] : {%#d}\n", 42);
	printf(   "2) Formatage simple [#x] : {%#x}\n", 0x12345);
	my_printf("=> Formatage simple [#x] : {%#x}\n", 0x12345);
	printf(   "3) Formatage simple [#o] : {%#o}\n", 012345);
	my_printf("=> Formatage simple [#o] : {%#o}\n", 012345);
	printf(   "4) Formatage simple [0d] : {%0d}\n", 42);
	my_printf("=> Formatage simple [0d] : {%0d}\n", 42);
	printf(   "5) Formatage simple [5d] : {%5d}\n", 42);
	my_printf("=> Formatage simple [5d] : {%5d}\n", 42);
	printf(   "6) Formatage simple [ d] : {% d}\n", 42);
	my_printf("=> Formatage simple [ d] : {% d}\n", 42);
	printf(   "7) Formatage simple [-d] : {%-d}\n", 42);
	my_printf("=> Formatage simple [-d] : {%-d}\n", 42);
	printf(   "8) Formatage simple [+d] : {%+d}\n", 42);
	my_printf("=> Formatage simple [+d] : {%+d}\n", 42);
	printf(   "9) Formatage simple [+d] : {%+d}\n", -42);
	my_printf("=> Formatage simple [+d] : {%+d}\n", -42);
	printf(   "10) Formatage multiple [ 5d] : {% 5d}\n", 42);
	my_printf("=>  Formatage multiple [ 5d] : {% 5d}\n", 42);
	printf(   "11) Formatage multiple [-32o] : {%-32o}\n", 012345);
	my_printf("=>  Formatage multiple [-32o] : {%-32o}\n", 012345);
	printf(   "12) Formatage multiple [-10+d] : {%+-10d}\n", 12345);
	my_printf("=>  Formatage multiple [-10+d] : {%-10+d}\n", 12345);
	printf(   "13) Formatage compose [-5cP] : %-5cP\n", 42);
	my_printf("=>  Formatage compose [-5cP] : %-5cP\n", 42);
	printf(   "14) Formatage compose [-30sP]: %-30sP\n", str);
	my_printf("=> Formatage compose [-30sP]: %-30sP\n", str);
	printf(   "15) Formatage compose [-4SP] : as\\012ekP\n");
	my_printf("=>  Formatage compose [-4SP] : %-4SP\n", stre);
	printf(   "16) Formatage ultracompose [-6.3x] : {%-6.3x}\n", 0x12345);
	my_printf("=>  Formatage ultracompose [-6.3x] : {%-6.3x}\n", 0x12345);
	//printf(   "17) Frintf("=> Formatage simple [+d] : {%+d}\n", -42);
	//printf(   
	//		atage multiple [ 5d] : {% 5d}\n", 42);
	my_printf("=>  Formatage mul4545");
	printf(   "18) Formatage ultracompose [#-6.3d] : {%#-6.3d}\n", -2147483648);
	my_printf("=>  Formatage ultracompose [#-6.3d] : {%#-6.3d}\n", -2147483648);
	printf(   "19) Formatage long [p x lx] : {%p} {%x} {%lx}\n", 0x42424242, 0x42424242, 0x42424242);
	my_printf("=>  Formatage long [p x lx] : {%p} {%x} {%lx}\n", 0x42424242, 0x42424242, 0x42424242);
	printf(   "20) Formatage pourcent [30%%] : {%30%}\n");
	my_printf("=>  Formatage pourcent [30%%] : {%30%}\n");
	printf(   "21) Formatage pourcent [-30pourcent] : {%-30%}\n");
	my_printf("=>  Formatage pourcent [-30pourcent] : {%-30%}\n");
	ret[0] = printf(   "22) Test de la valeur de retour [-10+d s] : {%+-10d} {%s}\n", 12345, str);
	ret[1] = my_printf("=>  Test de la valeur de retour [-10+d s] : {%+-10d} {%s}\n", 12345, str);
	printf(   "23) Verification de la valeur de retour [d] : {%d}\n", ret[0]);
	my_printf("=>  Verification de la valeur de retour [d] : {%d}\n", ret[1]);
	printf(   "24) Test de pile [c c] : {%c} {%c}\n", 0x4142434444434241);
	my_printf("=>  Test de pile [c c] : {%c} {%c}\n", 0x4142434444434241);

	my_printf("Segmentation fault ;)\n");

	return(0);
}*/

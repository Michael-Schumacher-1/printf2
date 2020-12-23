/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjuzen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 15:50:50 by tjuzen            #+#    #+#             */
/*   Updated: 2018/12/18 15:35:02 by tjuzen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "printf.h"
#include <limits.h>
#include <float.h>
#include <math.h>

void display_return(int i, int j, char *str)
{
	if (i == j)
	{
		printf("\033[1;32m");
		printf("--------------------");
		printf("\n%s TEST SUCCEED\n", str);
		printf("--------------------\n");
		printf("\033[0m");
	}
   else
   {
	   printf("\033[1;31m");
	   printf("--------------------");
	   printf("\n%s TEST FAILED\n", str);
	   printf("--------------------\n");
	   printf("\033[0m");
   }
}

// _#+-0

int	main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int m = 0;
	int n = 0;
	int o = 0;
	int p = 0;
	int q = 0;
	int r = 0;
	int s = 0;
	int t = 0;
	int u = 0;
	int v = 0;
	int w = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	long long test_conv = LONG_MAX;
	long long test_conv_neg = LONG_MIN;
	unsigned long test_conv_u = ULONG_MAX;




	/*
	//
	//
	// MAIN 0
	//
	*/

	// printf("\n");

	/*
	**  S
	*/









	printf("--------------------\n");
	printf("STRING\n");
	printf("--------------------\n");
	printf("\n");

	j +=  	printf("|%s|\n", "Salut");
	  i += ft_printf("|%s|\n", "Salut");

	j +=  	printf("|%.2s|\n", "Salut");
	  i += ft_printf("|%.2s|\n", "Salut");

		j +=  printf("|%-45.s|\n", "Salut");
	 i +=  ft_printf("|%-45.s|\n", "Salut");

	j +=  	printf("|%45.10s|\n", "Salut");
	 i +=  ft_printf("|%45.10s|\n", "Salut");

	j +=  	printf("|%-2s|\n", "Hola hola");
	 i +=  ft_printf("|%-2s|\n", "Hola hola");

	j +=  	printf("|%s|\n", NULL);
	 i +=  ft_printf("|%s|\n", NULL);

	j +=  	printf("|%.145s|\n", "La vie est belle");
	 i +=  ft_printf("|%.145s|\n", "La vie est belle");

	j +=  	printf("|%45.10s|\n", "Salut");
	i +=   ft_printf("|%45.10s|\n", "Salut");
	printf("--------------------\n");
	printf("STRING TEST\n");
	printf("--------------------\n");
	printf("\n");
	 i += (ft_printf("Coucou = %s %.5s %.6s %.7s %.s %.0s %.s %.1s %5s %4s %6s %7s %8s, coucou\n", "Coucou", "Coucou", "Coucou", "Coucou", "Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou"));
	 j +=    (printf("Coucou = %s %.5s %.6s %.7s %.s %.0s %.s %.1s %5s %4s %6s %7s %8s, coucou\n", "Coucou", "Coucou", "Coucou", "Coucou", "Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou"));
	 printf("\n");
	i += (ft_printf("Salut = %.3s coucou %.3s haha\n", "bite", "chien"));
	j +=    (printf("Salut = %.3s coucou %.3s haha\n", "bite", "chien"));
	printf("\n");
	i += (ft_printf("Coucou = %5.5s %5.6s %5.7s %6.6s %6.5s %7.s %1.s %5.15s %30.s, coucou\n", "Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou"));
	j +=    (printf("Coucou = %5.5s %5.6s %5.7s %6.6s %6.5s %7.s %1.s %5.15s %30.s, coucou\n", "Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou","Coucou"));
	printf("\n");
	i += (ft_printf("Coucou = %*.*s, coucou\n", 20, 0, "Coucou"));
	j +=    (printf("Coucou = %*.*s, coucou\n", 20, 0, "Coucou"));
	printf("\n");
	i += (ft_printf("Coucou =  coucou\n"));
	j +=    (printf("Coucou =  coucou\n"));
	printf("\n");
	i += (ft_printf("Coucou = %% coucou\n"));
	j +=    (printf("Coucou = %% coucou\n"));
	display_return(i, j, "STRING");




































	/*
	** C, P and %%
	*/
	printf("--------------------\n");
	printf("C, P AND %% TEST\n");
	printf("--------------------\n");
	printf("\n");
	printf("\n");
	a += (ft_printf("Coucou = %c\n", 'w'));
	b +=    (printf("Coucou = %c\n", 'w'));
	printf("\n");
	a += (ft_printf("Coucou = %c\n", '\0'));
	b +=    (printf("Coucou = %c\n", '\0'));
	printf("\n");
	a += (ft_printf("Coucou = %c\n", (char)0xff11ff11));
	b +=    (printf("Coucou = %c\n", (char)0xff11ff11));
	printf("\n");
	a += (ft_printf("Coucou = %c\n", -21));
	b +=    (printf("Coucou = %c\n", -21));
	printf("\n");
	a += (ft_printf("Coucou = %-15c\n", 'w'));
	b +=    (printf("Coucou = %-15c\n", 'w'));
	printf("\n");
	a += (ft_printf("Coucou = %4c\n", 'w'));
	b +=    (printf("Coucou = %4c\n", 'w'));
	printf("\n");
	a += (ft_printf("^.^/%+0hhi^.^/\n", 1457223722));
	b +=    (printf("^.^/%+0hhi^.^/\n", 1457223722));
	printf("\n");
	a += (ft_printf("Coucou = %0+hhi\n", 1592161129));
	b +=    (printf("Coucou = %0+hhi\n", 1592161129));
	printf("\n");
	a += (ft_printf("Coucou = %----24p et %2p et aussi %12p\n", &a, &b, NULL));
	b +=    (printf("Coucou = %----24p et %2p et aussi %12p\n", &a, &b, NULL));
	printf("\n");
	a += (ft_printf("Coucou = %#% % .5% %----24p et %5% %2p et aussi %12p %%%%%%\n", &a, &b, NULL));
	b +=    (printf("Coucou = %#% % .5% %----24p et %5% %2p et aussi %12p %%%%%%\n", &a, &b, NULL));
	printf("\n");

	display_return(a, b, "C, P AND %%");

























// 	/*
// 	** D, I
// 	*/
//
	printf("--------------------\n");
	printf("INTEGER TEST\n");
	printf("--------------------\n");
	printf("\n");
	printf("\n");
	c += (ft_printf("Salut %20.12ld this % 5.8d % 5d % 4.8i is not a test\n", 0x11ffaa147, 45, 45, 23));
	d +=    (printf("Salut %20.12ld this % 5.8d % 5d % 4.8i is not a test\n", 0x11ffaa147, 45, 45, 23));
	printf("\n");
	c += (ft_printf("Salut %20.12ld this %0 5d % 5d % 4.8i is not a test\n", 0x11ffaa147, 45, 45, 23));
	d +=    (printf("Salut %20.12ld this %0 5d % 5d % 4.8i is not a test\n", 0x11ffaa147, 45, 45, 23));
	printf("\n");
	c += (ft_printf("Salut % .d this %.0d %+.i %     .0d s not a test\n", 0, 0, 0, 0));
	d +=    (printf("Salut % .d this %.0d %+.i %     .0d s not a test\n", 0, 0, 0, 0));
	printf("\n");
	c += (ft_printf("Salut %+20.12lli \n", (long long)0x11ffaa141237));
	d +=    (printf("Salut %+20.12lli \n", (long long)0x11ffaa141237));
	printf("\n");
	c += (ft_printf("Salut %+20.12lli \n", (long long)0x11ffaa141237));
	d +=    (printf("Salut %+20.12lli \n", (long long)0x11ffaa141237));
	printf("\n");
	c += (ft_printf("Salut %+10.4d %lli %hd, %lld, %hhd coucou %ld\n", 0, (long long)0x11ff11ff11ff11ff, (short)0x1789ffff, (long long)-4278900, (char)-2, 0x44ff551100));
	d +=    (printf("Salut %+10.4d %lli %hd, %lld, %hhd coucou %ld\n", 0, (long long)0x11ff11ff11ff11ff, (short)0x1789ffff, (long long)-4278900, (char)-2, 0x44ff551100));
	printf("\n");

	c += (ft_printf("Salut %00+10.4d  %+12.5d %.5d %.0d %.i\n", 50, 140, -587, -21, 23));
	d +=    (printf("Salut %00+10.4d  %+12.5d %.5d %.0d %.i\n", 50, 140, -587, -21, 23));
	printf("\n");

	c += (ft_printf("Salut %00+10.4d  %+5.20d %+5.30d %04d %0d %d %7d %08i %05i\n", 50, 140, 230, 0, -230, 79, 1234, -7, -53));
	d +=    (printf("Salut %00+10.4d  %+5.20d %+5.30d %04d %0d %d %7d %08i %05i\n", 50, 140, 230, 0, -230, 79, 1234, -7, -53));
	printf("\n");

	c += (ft_printf("Salut %20.12ld this % 5d% 4.8i is not a test\n", 0x11ffaa147, 45, 23));
	d +=    (printf("Salut %20.12ld this % 5d% 4.8i is not a test\n", 0x11ffaa147, 45, 23));
	printf("\n");
	c += (ft_printf("Salut % .d this %.0d %+.i %     .0d s not a test\n", 0, 0, 0, 0));
	d +=    (printf("Salut % .d this %.0d %+.i %     .0d s not a test\n", 0, 0, 0, 0));
	printf("\n");
	c += (ft_printf("Salut %+20.12lli \n", (long long)0x11ffaa141237));
	d +=    (printf("Salut %+20.12lli \n", (long long)0x11ffaa141237));
	printf("\n");
	c += (ft_printf("Salut %+20.12lli \n", (long long)0x11ffaa141237));
	d +=    (printf("Salut %+20.12lli \n", (long long)0x11ffaa141237));
	printf("\n");
	c += (ft_printf("Salut %+10.4d %lli %hd, %lld, %hhd coucou %ld\n", 0, (long long)0x11ff11ff11ff11ff, (short)0x1789ffff, (long long)-4278900, (char)-2, 0x44ff551100));
	d +=    (printf("Salut %+10.4d %lli %hd, %lld, %hhd coucou %ld\n", 0, (long long)0x11ff11ff11ff11ff, (short)0x1789ffff, (long long)-4278900, (char)-2, 0x44ff551100));
	printf("\n");
	c += (ft_printf("Salut avec minus %+10.4d %5.4lli %6.4hd, %5.4lld, %5.4hhd coucou %ld\n", 0, (long long)0x11ff11ff11ff11ff, (short)0x1789ffff, (long long)-4278900, (char)-2, 0x44ff551100));
	d +=    (printf("Salut avec minus %+10.4d %5.4lli %6.4hd, %5.4lld, %5.4hhd coucou %ld\n", 0, (long long)0x11ff11ff11ff11ff, (short)0x1789ffff, (long long)-4278900, (char)-2, 0x44ff551100));
	printf("\n");
	c += (ft_printf("Salut sans minus %+10.4d %5.4lli %5.4hd, %5.4lld, %5.4hhd coucou %10ld\n", 0, (long long)0x11ff11ff11ff11ff, (short)0x1789ffff, (long long)-4278900, (char)-2, 0x44ff551100));
	d +=    (printf("Salut sans minus %+10.4d %5.4lli %5.4hd, %5.4lld, %5.4hhd coucou %10ld\n", 0, (long long)0x11ff11ff11ff11ff, (short)0x1789ffff, (long long)-4278900, (char)-2, 0x44ff551100));
	printf("\n");
	c += (ft_printf("Salut %+10.4d  %+12.5d %.5d %.0d %.i\n", 50, 140, -587, -21, 30));
	d +=    (printf("Salut %+10.4d  %+12.5d %.5d %.0d %.i\n", 50, 140, -587, -21, 30));
	printf("\n");
	c += (ft_printf("Salut %+10.4d  %+5.20d %+5.30d %4d %d %d %7d %2i %8i\n", 50, 140, 230, 0, -230, 79, 1234, -7, -53));
	d +=    (printf("Salut %+10.4d  %+5.20d %+5.30d %4d %d %d %7d %2i %8i\n", 50, 140, 230, 0, -230, 79, 1234, -7, -53));
	printf("\n");
	c += (ft_printf("%0+5d %0+7d %10d, %3d, %03d %+4d %2d\n", 42, -42, 42, 42, 42, 42, 42));
	d +=    (printf("%0+5d %0+7d %10d, %3d, %03d %+4d %2d\n", 42, -42, 42, 42, 42, 42, 42));
	printf("\n");
	c += (ft_printf("%010d, %10d, %3d, %03d %+4d %2d\n", -42, -42, -42, -42, -42, -42));
	d +=    (printf("%010d, %10d, %3d, %03d %+4d %2d\n", -42, -42, -42, -42, -42, -42));
	printf("\n");

	display_return(c, d, "D AND I NO MINUS");
	printf("\n");


	printf("\n");
	e += (ft_printf("Salut %-20.12ld this %- 5.8d %- 3d %- 4.8i is not a test\n", 0x11ffaa147, 45, 45, 23));
	f +=    (printf("Salut %-20.12ld this %- 5.8d %- 3d %- 4.8i is not a test\n", 0x11ffaa147, 45, 45, 23));
	printf("\n");
	e += (ft_printf("Salut %-20.12ld this %0 5d %- 5d %- 4.8i is not a test\n", 0x11ffaa147, 45, 45, 23));
	f +=    (printf("Salut %-20.12ld this %0 5d %- 5d %- 4.8i is not a test\n", 0x11ffaa147, 45, 45, 23));
	printf("\n");
	e += (ft_printf("Salut %- .d this %-.0d %-+.i %-     .0d s not a test\n", 0, 0, 0, 0));
	f +=    (printf("Salut %- .d this %-.0d %-+.i %-     .0d s not a test\n", 0, 0, 0, 0));
	printf("\n");
	e += (ft_printf("Salut %+-20.12lli hihi\n", (long long)0x11ffaa141237));
	f +=    (printf("Salut %+-20.12lli hihi\n", (long long)0x11ffaa141237));
	printf("\n");
	e += (ft_printf("Salut %+-20.12lli hihi\n", (long long)0x11ffaa141237));
	f +=    (printf("Salut %+-20.12lli hihi\n", (long long)0x11ffaa141237));
	printf("\n");
	e += (ft_printf("Salut %+-10.4d %-lli %-hd, %-lld, %-hhd coucou %-ldbipboup\n", 0, (long long)0x11ff11ff11ff11ff, (short)0x1789ffff, (long long)-4278900, (char)-2, 0x44ff551100));
	f +=    (printf("Salut %+-10.4d %-lli %-hd, %-lld, %-hhd coucou %-ldbipboup\n", 0, (long long)0x11ff11ff11ff11ff, (short)0x1789ffff, (long long)-4278900, (char)-2, 0x44ff551100));
	printf("\n");

	e += (ft_printf("Salut %-+10.4d  %+-12.5d %-.5d %-.0d %-.ibipboup\n", 50, 140, -587, -21, 44));
	f +=    (printf("Salut %-+10.4d  %-+12.5d %-.5d %-.0d %-.ibipboup\n", 50, 140, -587, -21, 44));
	printf("\n");

	e += (ft_printf("Salut %-+10.4d  %-+5.20d %-+5.30d %-4d %-d %-d %-7d %-8i %-5ibipboup\n", 50, 140, 230, 0, -230, 79, 1234, -7, -53));
	f +=    (printf("Salut %-+10.4d  %-+5.20d %-+5.30d %-4d %-d %-d %-7d %-8i %-5ibipboup\n", 50, 140, 230, 0, -230, 79, 1234, -7, -53));
	printf("\n");

	e += (ft_printf("Salut %-20.12ld this %- 5d%- 4.8i is not a testbipboup\n", 0x11ffaa147, 45, 23));
	f +=    (printf("Salut %-20.12ld this %- 5d%- 4.8i is not a testbipboup\n", 0x11ffaa147, 45, 23));
	printf("\n");
	e += (ft_printf("Salut %- .d this %-.0d %-+.i %-     .0d s not a test\n", 0, 0, 0, 0));
	f +=    (printf("Salut %- .d this %-.0d %-+.i %-     .0d s not a test\n", 0, 0, 0, 0));
	printf("\n");
	e += (ft_printf("Salut %-+20.12lli bipboup\n", (long long)0x11ffaa141237));
	f +=    (printf("Salut %-+20.12lli bipboup\n", (long long)0x11ffaa141237));
	printf("\n");
	e += (ft_printf("Salut %-+20.12lli bipboup\n", (long long)0x11ffaa141237));
	f +=    (printf("Salut %-+20.12lli bipboup\n", (long long)0x11ffaa141237));
	printf("\n");
	e += (ft_printf("Salut %-+10.4d %-lli %-hd, %-lld, %-hhd coucou %-ldbipboup\n", 0, (long long)0x11ff11ff11ff11ff, (short)0x1789ffff, (long long)-4278900, (char)-2, 0x44ff551100));
	f +=    (printf("Salut %-+10.4d %-lli %-hd, %-lld, %-hhd coucou %-ldbipboup\n", 0, (long long)0x11ff11ff11ff11ff, (short)0x1789ffff, (long long)-4278900, (char)-2, 0x44ff551100));
	printf("\n");
	e += (ft_printf("Salut avec minus %-+10.4d %-5.4lli %-6.4hd, %-5.4lld, %-5.4hhd coucou %ldhihi\n", 0, (long long)0x11ff11ff11ff11ff, (short)0x1789ffff, (long long)-4278900, (char)-2, 0x44ff551100));
	f +=    (printf("Salut avec minus %-+10.4d %-5.4lli %-6.4hd, %-5.4lld, %-5.4hhd coucou %ldhihi\n", 0, (long long)0x11ff11ff11ff11ff, (short)0x1789ffff, (long long)-4278900, (char)-2, 0x44ff551100));
	printf("\n");
	e += (ft_printf("Salut sans minus %-+10.4d %-5.4lli %-5.4hd, %-5.4lld, %-5.4hhd coucou %10ldhihi\n", 0, (long long)-0x11ff11ff11ff11ff, (short)0x1789ffff, (long long)-4278900, (char)-2, 0x44ff551100));
	f +=    (printf("Salut sans minus %-+10.4d %-5.4lli %-5.4hd, %-5.4lld, %-5.4hhd coucou %10ldhihi\n", 0, (long long)-0x11ff11ff11ff11ff, (short)0x1789ffff, (long long)-4278900, (char)-2, 0x44ff551100));
	printf("\n");
	e += (ft_printf("Salut %-+10.4d  %-+12.5d %-.5d %-.0d %-.i hihi\n", 50, 140, -587, -21, 44));
	f +=    (printf("Salut %-+10.4d  %-+12.5d %-.5d %-.0d %-.i hihi\n", 50, 140, -587, -21, 44));
	printf("\n");
	e += (ft_printf("Salut %-+10.4d  %-+5.20d %-+5.30d %-4d %-d %-d %-7d %-8i %-8i lol\n", 50, 140, 230, 0, -230, 79, 1234, -7, -53));
	f +=    (printf("Salut %-+10.4d  %-+5.20d %-+5.30d %-4d %-d %-d %-7d %-8i %-8i lol\n", 50, 140, 230, 0, -230, 79, 1234, -7, -53));
	printf("\n");
	e += (ft_printf("toto%.0d et %+.i et  %   .0d !!!\n", 0, 0, 0));
	f +=    (printf("toto%.0d et %+.i et  %   .0d !!!\n", 0, 0, 0));
	printf("\n");
	e += (ft_printf("% 20.12ld et % 05d% 4.8hi !\n", 0x11ffaa147, 24, (short)-2345));
	f +=    (printf("% 20.12ld et % 05d% 4.8hi !\n", 0x11ffaa147, 24, (short)-2345));
	printf("\n");
	e += printf ("printf6     :|42%-42.2d42|\n", -890298152);
	f += ft_printf ("ft_printf6  :|42%-42.2d42|\n", -890298152);
	printf("DECI\n");
	//1
	e += printf ("printf1     :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n", 999,999,999,999,999);
	f += ft_printf("ft_printf1  :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n", 999,999,999,999,999);
	//2
	e += printf ("printf2     :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n", 999,999,999,999,999);
	f += ft_printf("ft_printf2  :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n", 999,999,999,999,999);
	//3
	e += printf ("printf3     :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n", 999,999,999,999,999);
	f += ft_printf ("ft_printf3  :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n", 999,999,999,999,999);
	//4
	e += printf ("printf4     :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n", 999,999,999,999,999);
	f += ft_printf  ("ft_printf4  :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n", 999,999,999,999,999);
	//5
	e +=    printf ("printf5     :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", 999,999,999,999,999);
	f += ft_printf  ("ft_printf5  :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", 999,999,999,999,999);
	//6
e += 	printf ("printf6     :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 999,999,999,999,999);
	f += ft_printf  ("ft_printf6  :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 999,999,999,999,999);
	//7
	e += printf("printf7      :|% 03d|\n", 0);
	f += ft_printf ("ft_printf7   :|% 03d|\n", 0);

	display_return(e, f, "D AND I WITH MINUS");

	printf("\n");
	printf("--------------------\n");
	printf("D AND I MINUS\n");
	printf("--------------------\n");
	printf("\n");

	e +=    printf("|%+- 5d|%+- 5.3d|%+- 5.1d|%+-5.0d|%+- 5.d|\n",   0,0,0,0,0);
	f += ft_printf ("|%+- 5d|%+- 5.3d|%+- 5.1d|%+-5.0d|%+- 5.d|\n", 0,0,0,0,0);

	 e +=   printf("|%- 5d|%- 5.3d|%- 5.1d|%- 5.0d|%- 5.d|\n",   0,056135135315,22,23,0);
	f += ft_printf ("|%- 5d|%- 5.3d|%- 5.1d|%- 5.0d|%- 5.d|\n", 0,056135135315,22,23,0);

	e +=    printf("|%+5d|%+5.3d|%+5.3d|%+5.0d|%+5.d|\n",   0,0,-45,0,0);
	f += ft_printf ("|%+5d|%+5.3d|%+5.3d|%+5.0d|%+5.d|\n", 0,0,-45,0,0);

	e +=    printf("|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n",   0,0,-85,0,0);
	f += ft_printf ("|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n", 0,0,-85,0,0);

	e +=    printf("|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n",   0,0,0,0,0);
	f += ft_printf ("|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", 0,0,0,0,0);

	e +=    printf("|%- 05d|%- 05.3d|%- 05.1d|%- 05.0d|%- 05.d|\n",   0,INT_MIN,0,0,0);
	f += ft_printf ("|%- 05d|%- 05.3d|%- 05.1d|%- 05.0d|%- 05.d|\n", 0,INT_MIN,0,0,0);

	 e +=   printf("|%- 3d|\n", 0);
	f += ft_printf ("|%- 3d|\n", 0);

	//DECIMAL CONV D
	 e +=   printf("|%lld|%ld|%d|%hd|%hhd|\n", test_conv, test_conv, test_conv, test_conv, test_conv);
	f += ft_printf ("|%lld|%ld|%d|%hd|%hhd|\n", test_conv, test_conv, test_conv, test_conv, test_conv);
	  e +=  printf("|%lld|%ld|%d|%hd|%hhd|\n", test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg);
	f += ft_printf ("|%lld|%ld|%d|%hd|%hhd|\n", test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg);
	 e +=   printf("|%lld|%ld|%d|%hd|%hhd|\n", test_conv_u, test_conv_u, test_conv_u, test_conv_u, test_conv_u);
	f += ft_printf ("|%lld|%ld|%d|%hd|%hhd|\n", test_conv_u, test_conv_u, test_conv_u, test_conv_u, test_conv_u);





	//DECIMAL I
	 e +=  printf("|%+ 5i|%+ 5.3i|%+ 5.1i|%+ 5.0i|%+ 5.i|\n", 5,5,5,5,5);
	f += ft_printf ("|%+ 5i|%+ 5.3i|%+ 5.1i|%+ 5.0i|%+ 5.i|\n", 5,5,5,5,5);

	 e +=  printf("|% 5i|% 5.3i|% 5.1i|% 5.0i|% 5.i|\n", 5,235,15310,5,5);
	f += ft_printf ("|% 5i|% 5.3i|% 5.1i|% 5.0i|% 5.i|\n", 5,235,15310,5,5);

	e +=   printf("|%-+5i|%-+5.3i|%-+5.1i|%-+5.0i|%-+5.i|\n", 5,854,98,INT_MAX,5);
	f += ft_printf ("|%-+5i|%-+5.3i|%-+5.1i|%-+5.0i|%-+5.i|\n", 5,854,98,INT_MAX,5);

	e +=   printf("|%0+5i|%0+5.3i|%0+5.1i|%0+5.0i|%0+5.i|\n", 5,854,98,INT_MAX,5);
	f += ft_printf ("|%0+5i|%0+5.3i|%0+5.1i|%0+5.0i|%0+5.i|\n", 5,854,98,INT_MAX,5);

	 e +=  printf("|%-+05i|%-+05.3i|%-+05.1i|%-+05.0i|%-+05.i|\n", 5,5,5,5,5);
	f += ft_printf ("|%-+05i|%-+05.3i|%-+05.1i|%-+05.0i|%-+05.i|\n", 5,5,5,5,5);

	e +=   printf("|% 05i|% 05.3i|% 05.1i|% 05.0i|% 05.i|\n", 5,5,5,5,5);
	f += ft_printf ("|% 05i|% 05.3i|% 05.1i|% 05.0i|% 05.i|\n", 5,5,5,5,5);

	//DECIMAL CONV I
	 e +=  printf("|%lli|%li|%i|%hi|%hhi\n", test_conv, test_conv, test_conv, test_conv, test_conv);
	f += ft_printf("|%lli|%li|%i|%hi|%hhi\n", test_conv, test_conv, test_conv, test_conv, test_conv);
	 e +=  printf("|%lli|%li|%i|%hi|%hhi\n", test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg);
	f += ft_printf("|%lli|%li|%i|%hi|%hhi\n", test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg);
	 e +=  printf("|%lli|%li|%i|%hi|%hhi\n", test_conv_u, test_conv_u, test_conv_u, test_conv_u, test_conv_u);
	f += ft_printf("|%lli|%li|%i|%hi|%hhi\n", test_conv_u, test_conv_u, test_conv_u, test_conv_u, test_conv_u);



	printf("DECI\n");
	//1
	e += printf ("printf1     :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n", 1,1,1,1,1);
	f += ft_printf  ("ft_printf1  :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n", 1,1,1,1,1);
	//2
	e += printf ("printf2     :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n", 1,1,1,1,1);
	f += ft_printf  ("ft_printf2  :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n", 1,1,1,1,1);
	//3
	e += printf ("printf3     :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n", 1,1,1,1,1);
	f += ft_printf  ("ft_printf3  :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n", 1,1,1,1,1);
	//4
e += 	printf ("printf4     :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n", 1,1,1,1,1);
	f += ft_printf  ("ft_printf4  :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n", 1,1,1,1,1);
	//5
e += 	printf ("printf5     :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", 1,1,1,1,1);
	f += ft_printf  ("ft_printf5  :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", 1,1,1,1,1);
	//6
e += 	printf ("printf6     :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 1,1,1,1,1);
	f += ft_printf  ("ft_printf6  :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 1,1,1,1,1);
	//7
e += 	printf("printf7      :|% 03d|\n", 0);
	f += ft_printf("ft_printf7   :|% 03d|\n", 0);



	printf("--------------------\n");
	printf("DECI\n");
	printf("--------------------\n");
	printf("\n");
	//1
	e += printf ("printf1     :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n", 0,0,0,0,0);
	f += ft_printf  ("ft_printf1  :|%+ 5d|%+ 5.3d|%+ 5.1d|%+ 5.0d|%+ 5.d|\n", 0,0,0,0,0);
	//2
	e += printf ("printf2     :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n", 0,0,0,0,0);
	f += ft_printf  ("ft_printf2  :|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n", 0,0,0,0,0);
	//3
	e += printf ("printf3     :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n", 0,0,0,0,0);
	f += ft_printf  ("ft_printf3  :|%-+5d|%-+5.3d|%-+5.1d|%-+5.0d|%-+5.d|\n", 0,0,0,0,0);
	//4
	e += printf ("printf4     :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n", 0,0,0,0,0);
	f += ft_printf  ("ft_printf4  :|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n", 0,0,0,0,0);
	//5
	e += printf ("printf5     :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", 0,0,0,0,0);
	f += ft_printf  ("ft_printf5  :|%-+05d|%-+05.3d|%-+05.1d|%-+05.0d|%-+05.d|\n", 0,0,0,0,0);
	//6
	e += printf ("printf6     :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 0,0,0,0,0);
	f += ft_printf  ("ft_printf6  :|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 0,0,0,0,0);
	//7
	e += printf("printf7      :|% 03d|\n", 0);
	f += ft_printf("ft_printf7   :|% 03d|\n", 0);

	printf("--------------------\n");
	printf("D AND I\n");
	printf("--------------------\n");
	printf("\n");

	e +=    printf("|%+ 5d|%+ 5.3d|%+ 5.1d|%+5.0d|%+ 5.d|\n",   0,0,0,0,0);
	f += ft_printf("|%+ 5d|%+ 5.3d|%+ 5.1d|%+5.0d|%+ 5.d|\n", 0,0,0,0,0);

	 e +=   printf("|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n",   0,056135135315,22,23,0);
	f += ft_printf("|% 5d|% 5.3d|% 5.1d|% 5.0d|% 5.d|\n", 0,056135135315,22,23,0);

	e +=    printf("|%+5d|%+5.3d|%+5.4d|%+5.4d|%+5.0d|\n",   0,0,-45,-45,-45);
	f += ft_printf("|%+5d|%+5.3d|%+5.4d|%+5.4d|%+5.0d|\n", 0,0,-45,-45,-45);

	 e +=   printf("|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n",   0,0,-85,0,0);
	f += ft_printf("|%0+5d|%0+5.3d|%0+5.1d|%0+5.0d|%0+5.d|\n", 0,0,-85,0,0);

	 e +=   printf("|%+05d|%+05.3d|%+05.1d|%+05.0d|%+05.d|\n",   0,0,0,0,0);
	f += ft_printf("|%+05d|%+05.3d|%+05.1d|%+05.0d|%+05.d|\n", 0,0,0,0,0);

	 e +=   printf("|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n",   0,INT_MIN,0,0,0);
	f += ft_printf("|% 05d|% 05.3d|% 05.1d|% 05.0d|% 05.d|\n", 0,INT_MIN,0,0,0);

	 e +=   printf("|% 03d|\n", 0);
	f += ft_printf("|% 03d|\n", 0);

e += printf ("printf6     :|%-10.2hhd||%-9.2hd|\n", 999, -5);
f += ft_printf  ("ft_printf6  :|%-10.2hhd||%-9.2hd|\n", 999, -5);
e += printf ("printf6     :|%-10.2hd|\n", -999);
f += ft_printf  ("ft_printf6  :|%-10.2hd|\n", -999);


e += printf ("printf7     :|%-56.8d!||42%-56.2hhd42|\n", -1483517356, 3099315);
f += ft_printf  ("ft_printf7  :|%-56.8d!||42%-56.2hhd42|\n", -1483517356, 3099315);
e += printf("|%0+d|\n", 0);
f += ft_printf("|%0+d|\n", 0);
e += printf("|^.^/%-38.2d^.^/|\n", -578757575757);
f += ft_printf("|^.^/%-38.2d^.^/|\n", -578757575757);
e += printf("|%-.2hhd|\n", 1292354040);
f += ft_printf("|%-.2hhd|\n", 1292354040);


















	/*
	** O, U AND X
	*/

	printf("--------------------\n");
	printf("OCTAL TEST\n");
	printf("--------------------\n");
printf("\n");
	e += (ft_printf("oSalut %08.4o et  %.1o %#5.11o %5.17o %#.4o\n", 0, 0, 0, 0, 0));
	f +=    (printf("oSalut %08.4o et  %.1o %#5.11o %5.17o %#.4o\n", 0, 0, 0, 0, 0));
	printf("\n");
	e += (ft_printf("Salut %08.4o et  %.1o %#5.11o %5.17o %#.4o\n", 11, 12, 13, 14, 14));
	f +=    (printf("Salut %08.4o et  %.1o %#5.11o %5.17o %#.4o\n", 11, 12, 13, 14, 14));
	printf("\n");
	e += (ft_printf("Salut %-8.4o et  %-.1o %-#5.11o %-5.17o %-#.4o\n", 11, 12, 13, 14, 14));
	f +=    (printf("Salut %-8.4o et  %-.1o %-#5.11o %-5.17o %-#.4o\n", 11, 12, 13, 14, 14));
	printf("\n");
	e += (ft_printf("oSalut %-10.4o %-o %-#5.20o %-5.30o %-#.4o\n", 0, 0, 0, 0, 0));
	f +=    (printf("oSalut %-10.4o %-o %-#5.20o %-5.30o %-#.4o\n", 0, 0, 0, 0, 0));
	printf("\n");
	e += (ft_printf("\n%024hho et%#1.2o %0012.o", (unsigned char)12, 0, 123654789));
	f +=    (printf("\n%024hho et%#1.2o %0012.o", (unsigned char)12, 0, 123654789));
	printf("\n");
	e += (ft_printf("\ntest%#.4o et %02o %0#14.0o!!", 012, 036, 12587499));
	f +=    (printf("\ntest%#.4o et %02o %0#14.0o!!", 012, 036, 12587499));
	printf("\n");
	e += (ft_printf("\ntoto %###.0o%#.o et %#.1o !", 0, 0, 0));
	f +=    (printf("\ntoto %###.0o%#.o et %#.1o !", 0, 0, 0));
	printf("\n");
	e += (ft_printf("\nm%#.9o", 123456789));
	f +=    (printf("\nm%#.9o", 123456789));
	printf("\n");

	printf("OCTAL\n");
	//1
f +=  	printf ("printf1     :|%5o|%5.3o|%5.1o|%5.0o|%5.o|\n", 999,999,999,999,999);
	e += ft_printf ("ft_printf1  :|%5o|%5.3o|%5.1o|%5.0o|%5.o|\n", 999,999,999,999,999);
	//2
	f +=  printf ("printf2     :|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n", 999,999,999,999,999);
	e += ft_printf ("ft_printf2  :|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n", 999,999,999,999,999);
	//3
	f +=  printf ("printf3     :|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n", 999,999,999,999,999);
e += 	ft_printf ("ft_printf3  :|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n", 999,999,999,999,999);
	//4
	f +=  printf ("printf4     :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n", 999,999,999,999,999);
e += 	ft_printf ("ft_printf4  :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n", 999,999,999,999,999);
	//5
	f +=  printf ("printf5     :|%-0#5o|%-0#5.3o|%-0#5.1o|%-0#5.0o|%-0#5.o|\n", 999,999,999,999,999);
e += 	ft_printf ("ft_printf5  :|%-0#5o|%-0#5.3o|%-0#5.1o|%-0#5.0o|%-0#5.o|\n", 999,999,999,999,999);
	printf("--------------------\n");
    printf("OCTAL\n");
    printf("--------------------\n");
    printf("\n");
  //1
 f +=   printf ("printf1     :|%5o|%5.3o|%5.1o|%5.0o|%5.o|\n", 0,0,0,0,0);
 e +=  ft_printf ("ft_printf1  :|%5o|%5.3o|%5.1o|%5.0o|%5.o|\n", 0,0,0,0,0);
  //2
 f +=   printf ("printf2     :|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n", 0,0,0,0,0);
  e += ft_printf ("ft_printf2  :|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n", 0,0,0,0,0);
  //3
  f +=  printf ("printf3     :|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n", 0,0,0,0,0);
 e +=  ft_printf ("ft_printf3  :|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n", 0,0,0,0,0);
  //4
 f +=   printf ("printf4     :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n", 0,0,0,0,0);
 e +=  ft_printf ("ft_printf4  :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n", 0,0,0,0,0);
  //5
 f +=   printf ("printf5     :|%-0#5o|%-0#5.3o|%-0#5.1o|%-0#5.0o|%-0#5.o|\n", 0,0,0,0,0);
 e +=  ft_printf ("ft_printf5  :|%-0#5o|%-0#5.3o|%-0#5.1o|%-0#5.0o|%-0#5.o|\n", 0,0,0,0,0);
printf("--------------------\n");
printf("OCTAL\n");
printf("--------------------\n");
printf("\n");
	//octal
	 f +=    printf("|%o|%#o|%#o|%#5o|%#5.2o|%.o|\n", 42, 42, 0, 42, 0, 0);
	e += ft_printf("|%o|%#o|%#o|%#5o|%#5.2o|%.o|\n", 42, 42, 0, 42, 0, 0);

	f +=  	printf("|%5o|%5.3o|%5.1o|%5.0o|%5.o|\n", 0,0,0,0,0);
	e += ft_printf ("|%5o|%5.3o|%5.1o|%5.0o|%5.o|\n", 0,0,0,0,0);

	f +=  	printf("|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n", 0,0,0,0,0);
	e += ft_printf ("|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n", 0,0,0,0,0);

	f +=  	printf("|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n", 0,0,0,0,0);
	e += ft_printf ("|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n", 0,0,0,0,0);

	f +=  	printf("|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n", 0,0,0,0,0);
	e += ft_printf ("|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n", 0,0,0,0,0);

	f +=  	printf("|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n", 0,0,0,0,0);
	e += ft_printf ("|%#5o|%#5.3o|%#5.1o|%#5.0o|%#5.o|\n", 0,0,0,0,0);

	f +=     printf("|%#5.o|%#5.3o|%.o|%.0o|%#.o|\n",   0,0,0,0,0);
	e += ft_printf("|%#5.o|%#5.3o|%.o|%.0o|%#.o|\n", 0,0,0,0,0);

	 f +=    printf("|%o|%#032o|\n", 54, 54);
	e += ft_printf("|%o|%#032o|\n", 54, 54);







f +=  	printf("|%-o|%-#o|%-#o|%#-5o|%#-5.2o|%-.o|\n", 42, 42, 0, 42, 0, 0);
e +=  ft_printf("|%-o|%-#o|%-#o|%#-5o|%#-5.2o|%-.o|\n", 42, 42, 0, 42, 0, 0);

f +=  	 printf("|%-5o|%-5.3o|%-5.1o|%-5.0o|%-5.o|\n", 0,0,0,0,0);
e +=  ft_printf ("|%-5o|%-5.3o|%-5.1o|%-5.0o|%-5.o|\n", 0,0,0,0,0);

f +=  	 printf("|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n", 0,0,0,0,0);
e +=  ft_printf ("|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n", 0,0,0,0,0);

f +=  	 printf("|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n", 0,0,0,0,0);
 e += ft_printf ("|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n", 0,0,0,0,0);

f +=  	 printf("|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n", 0,0,0,0,0);
 e += ft_printf ("|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n", 0,0,0,0,0);

f +=  	 printf("|%-0#5o|%-0#5.3o|%-0#5.1o|%-0#5.0o|%-0#5.o|\n", 0,0,0,0,0);
 e += ft_printf ("|%-0#5o|%-0#5.3o|%-0#5.1o|%-0#5.0o|%-0#5.o|\n", 0,0,0,0,0);

f +=  	printf("|%-0#5.o|%-0#5.3o|%-.o|%-.0o|%-#.o|\n",   0,0,0,0,0);
 e += ft_printf("|%-0#5.o|%-0#5.3o|%-.o|%-.0o|%-#.o|\n", 0,0,0,0,0);

f +=  	printf("|%-o|%-#032o|\n", 54, 54);
 e += ft_printf("|%-o|%-#032o|\n", 54, 54);

f +=      printf("|%llo|%lo|%o|%ho|%hho\n", test_conv, test_conv, test_conv, test_conv, test_conv);
 e += ft_printf("|%llo|%lo|%o|%ho|%hho\n", test_conv, test_conv, test_conv, test_conv, test_conv);
f +=      printf("|%llo|%lo|%o|%ho|%hho\n", test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg);
e +=  ft_printf("|%llo|%lo|%o|%ho|%hho\n", test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg);
f +=      printf("|%llo|%lo|%o|%ho|%hho\n", test_conv_u, test_conv_u, test_conv_u, test_conv_u, test_conv_u);
e +=  ft_printf("|%llo|%lo|%o|%ho|%hho\n", test_conv_u, test_conv_u, test_conv_u, test_conv_u, test_conv_u);

 printf("--------------------\n");
 printf("OCTAL\n");
 printf("--------------------\n");
 printf("\n");//1
f +=      printf ("printf1     :|%5o|%5.3o|%5.1o|%5.0o|%5.o|\n", 1,1,1,1,1);
e +=  ft_printf ("ft_printf1  :|%5o|%5.3o|%5.1o|%5.0o|%5.o|\n", 1,1,1,1,1);
 //2
f +=      printf ("printf2     :|%#5o|%#5.3o|%#5.2o|%#5.0o|%#5.o|\n", 1,1,10,1,1);
 e += ft_printf ("ft_printf2  :|%#5o|%#5.3o|%#5.2o|%#5.0o|%#5.o|\n", 1,1,10,1,1);
 //3
f +=      printf ("printf3     :|%#5o|%#6.2o|%#5.1o|%#5.0o|%#5.o|\n", 1,1,1,1,1);
 e += ft_printf ("ft_printf3  :|%#5o|%#6.2o|%#5.1o|%#5.0o|%#5.o|\n", 1,1,1,1,1);
 //4
f +=      printf ("printf4     :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n", 1,1,1,1,1);
 e += ft_printf ("ft_printf4  :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n", 1,1,1,1,1);
 //5
f +=      printf ("printf5     :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n", 1,1,1,1,1);
 e += ft_printf ("ft_printf5  :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n", 1,1,1,1,1);


 printf("--------------------\n");
 printf("OCTAL MINUS\n");
 printf("--------------------\n");
 printf("\n");//1

f +=      printf ("printf1     :|%-5o|%-5.3o|%-5.1o|%-5.0o|%-5.o|\n", 1,1,1,1,1);
 e += ft_printf ("ft_printf1  :|%-5o|%-5.3o|%-5.1o|%-5.0o|%-5.o|\n", 1,1,1,1,1);
 //2
f +=      printf ("printf2     :|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n", 1,1,1,1,1);
 e += ft_printf ("ft_printf2  :|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n", 1,1,1,1,1);
 //3
f +=      printf ("printf3     :|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n", 1,1,1,1,1);
 e += ft_printf ("ft_printf3  :|%-#5o|%-#5.3o|%-#5.1o|%-#5.0o|%-#5.o|\n", 1,1,1,1,1);
 //4
f +=      printf ("printf4     :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n", 1,1,1,1,1);
 e += ft_printf ("ft_printf4  :|%0#5o|%0#5.3o|%0#5.1o|%0#5.0o|%0#5.o|\n", 1,1,1,1,1);
 //5
f +=      printf ("printf5     :|%-0#5o|%-0#5.3o|%-0#5.1o|%-0#5.0o|%-0#5.o|\n", 1,1,1,1,1);
 e += ft_printf ("ft_printf5  :|%-0#5o|%-0#5.3o|%-0#5.1o|%-0#5.0o|%-0#5.o|\n", 1,1,1,1,1);



	printf("--------------------\n");
	printf("UNSIGNED TEST\n");
	printf("--------------------\n");

printf("\n");
	e += (ft_printf("uSalut %08.4u et  %.1u %5.11u %5.17u %.4u\n", 0, 0, 0, 0, 0));
	f +=    (printf("uSalut %08.4u et  %.1u %5.11u %5.17u %.4u\n", 0, 0, 0, 0, 0));
	printf("\n");
	e += (ft_printf("Salut %08.4u et  %.1u %5.11u %5.17u %.4u\n", 11, 12, 13, 14, 14));
	f +=    (printf("Salut %08.4u et  %.1u %5.11u %5.17u %.4u\n", 11, 12, 13, 14, 14));
	printf("\n");
	e += (ft_printf("Salut %-8.4u et  %-.1u %-5.11u %-5.17u %-.4u\n", 11, 12, 13, 14, 14));
	f +=    (printf("Salut %-8.4u et  %-.1u %-5.11u %-5.17u %-.4u\n", 11, 12, 13, 14, 14));
	printf("\n");
	e += (ft_printf("uSalut %-10.4u %-u %-5.20u %-5.30u %-.4u\n", 0, 0, 0, 0, 0));
	f +=    (printf("uSalut %-10.4u %-u %-5.20u %-5.30u %-.4u\n", 0, 0, 0, 0, 0));
	printf("\n");
	e += (ft_printf("%05.1u %3.4hu %-4.7u\n", 45, (unsigned short)-1789, 147));
	f +=    (printf("%05.1u %3.4hu %-4.7u\n", 45, (unsigned short)-1789, 147));
	printf("\n");
	e += (ft_printf("toto et %00009u%-2lu mimi et titi%--14u\n", 0, (unsigned long)14, 200));
	f +=    (printf("toto et %00009u%-2lu mimi et titi%--14u\n", 0, (unsigned long)14, 200));

	printf("\n");
	printf("UNSIGNED\n");
	//1
	f +=  printf ("printf1     :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n", 1,1,1,1,1);
	e += ft_printf ("ft_printf1  :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n", 1,1,1,1,1);
	//2
	f +=  printf ("printf2     :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n", 1,1,1,1,1);
	e += ft_printf ("ft_printf2  :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n", 1,1,1,1,1);
	//3
	f +=  printf ("printf3     :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n", 1,1,1,1,1);
	e += ft_printf ("ft_printf3  :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n", 1,1,1,1,1);
	//4
	f +=  printf ("printf4     :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n", 1,1,1,1,1);
	e += ft_printf ("ft_printf4  :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n", 1,1,1,1,1);
	//5
	f +=  printf ("printf5     :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n", 1,1,1,1,1);
	e += ft_printf ("ft_printf5  :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n", 1,1,1,1,1);
	//6
	f +=  printf ("printf6     :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n", 1,1,1,1,1);
	e += ft_printf ("ft_printf6  :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n", 1,1,1,1,1);
	//7
	f +=  printf("printf7      :|% 03u|\n", 0);
	e += ft_printf("ft_printf7   :|% 03u|\n", 0);
	printf("UNSIGNED\n");
	//1
	f +=  printf ("printf1     :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n", 999,999,999,999,999);
	e += ft_printf ("ft_printf1  :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n", 999,999,999,999,999);
	//2
	f +=  printf ("printf2     :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n", 999,999,999,999,999);
	e += ft_printf ("ft_printf2  :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n", 999,999,999,999,999);
	//3
	f +=  printf ("printf3     :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n", 999,999,999,999,999);
	e += ft_printf ("ft_printf3  :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n", 999,999,999,999,999);
	//4
f +=  	printf ("printf4     :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n", 999,999,999,999,999);
	e += ft_printf ("ft_printf4  :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n", 999,999,999,999,999);
	//5
	f +=  printf ("printf5     :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n", 999,999,999,999,999);
	e += ft_printf ("ft_printf5  :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n", 999,999,999,999,999);
	//6
	f +=  printf ("printf6     :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n", 999,999,999,999,999);
	e += ft_printf ("ft_printf6  :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n", 999,999,999,999,999);
	//7
	f +=  printf("printf7      :|% 03u|\n", 0);
	e += ft_printf("ft_printf7   :|% 03u|\n", 0);
	printf("--------------------\n");
	printf("UNSIGNED\n");
	printf("--------------------\n");
	printf("\n");

	 f +=    printf ("|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n", 0,0,UINT_MAX,15424,-45);
	e += ft_printf ("|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n", 0,0,UINT_MAX,15424,-45);

	f +=     printf ("|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n", 0,0,-854,4587,0);
	e += ft_printf ("|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n", 0,0,-854,4587,0);

	 f +=    printf ("|%+5u|%+5.3u|%+5.1u|%+5.0u|%+5.u|\n", 0,0,LONG_MAX,0,0);
	e += ft_printf ("|%+5u|%+5.3u|%+5.1u|%+5.0u|%+5.u|\n", 0,0,LONG_MAX,0,0);

	 f +=    printf ("|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n", 0,0,UINT_MAX,15424,-45);
	e += ft_printf ("|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n", 0,0,UINT_MAX,15424,-45);

	 f +=    printf ("|%+05u|%+05.3u|%+05.1u|%+05.0u|%+05.u|\n", 0,0,0,0,0);
	e += ft_printf ("|%+05u|%+05.3u|%+05.1u|%+05.0u|%+05.u|\n", 0,0,0,0,0);

	 f +=    printf ("|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n", 0,0,-854,4587,0);
	e += ft_printf ("|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n", 0,0,-854,4587,0);

	 f +=    printf("|% 03u|\n", 0);
	e += ft_printf("|% 03u|\n", 0);

	printf("--------------------\n");
	printf("UNSIGNED MINUS\n");
	printf("--------------------\n");
	printf("\n");

	f +=     printf ("|%-+ 5u|%-+ 5.3u|%-+ 5.1u|%-+ 5.0u|%-+ 5.u|\n", 0,0,UINT_MAX,15424,-45);
	e += ft_printf ("|%-+ 5u|%-+ 5.3u|%-+ 5.1u|%-+ 5.0u|%-+ 5.u|\n", 0,0,UINT_MAX,15424,-45);

	f +=     printf ("|%- 5u|%- 5.3u|%- 5.1u|%- 5.0u|%- 5.u|\n", 0,0,-854,4587,0);
	e += ft_printf ("|%- 5u|%- 5.3u|%- 5.1u|%- 5.0u|%- 5.u|\n", 0,0,-854,4587,0);

	 f +=    printf ("|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n", 0,0,LONG_MAX,0,0);
	e += ft_printf ("|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n", 0,0,LONG_MAX,0,0);

	f +=     printf ("|%-0+5u|%-0+5.3u|%-0+5.1u|%-0+5.0u|%-0+5.u|\n", 0,0,UINT_MAX,15424,-45);
	e += ft_printf ("|%-0+5u|%-0+5.3u|%-0+5.1u|%-0+5.0u|%-0+5.u|\n", 0,0,UINT_MAX,15424,-45);

	f +=     printf ("|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n", 0,0,0,0,0);
	e += ft_printf ("|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n", 0,0,0,0,0);

	 f +=    printf ("|%- 05u|%- 05.3u|%- 05.1u|%- 05.0u|%- 05.u|\n", 0,0,-854,4587,0);
	e += ft_printf ("|%- 05u|%- 05.3u|%- 05.1u|%- 05.0u|%- 05.u|\n", 0,0,-854,4587,0);

	f +=     printf("|%- 03u|\n", 0);
	e += ft_printf("|%- 03u|\n", 0);

	//DECIMAL CONV U
	 f +=    printf("|%llu|%lu|%u|%hu|%hhu\n", test_conv, test_conv, test_conv, test_conv, test_conv);
	e += ft_printf("|%llu|%lu|%u|%hu|%hhu\n", test_conv, test_conv, test_conv, test_conv, test_conv);
	 f +=    printf("|%llu|%lu|%u|%hu|%hhu\n", test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg);
	e += ft_printf("|%llu|%lu|%u|%hu|%hhu\n", test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg);
	 f +=    printf("|%llu|%lu|%u|%hu|%hhu\n", test_conv_u, test_conv_u, test_conv_u, test_conv_u, test_conv_u);
	e += ft_printf("|%llu|%lu|%u|%hu|%hhu\n", test_conv_u, test_conv_u, test_conv_u, test_conv_u, test_conv_u);


	printf("--------------------\n");
	printf("UNSIGNED\n");
	printf("--------------------\n");
	printf("\n");
	//1
	f +=  printf ("printf1     :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n", 0,0,0,0,0);
	e += ft_printf ("ft_printf1  :|%+ 5u|%+ 5.3u|%+ 5.1u|%+ 5.0u|%+ 5.u|\n", 0,0,0,0,0);
	//2
	f +=  printf ("printf2     :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n", 0,0,0,0,0);
	e += ft_printf ("ft_printf2  :|% 5u|% 5.3u|% 5.1u|% 5.0u|% 5.u|\n", 0,0,0,0,0);
	//3
	f +=  printf ("printf3     :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n", 0,0,0,0,0);
	e += ft_printf ("ft_printf3  :|%-+5u|%-+5.3u|%-+5.1u|%-+5.0u|%-+5.u|\n", 0,0,0,0,0);
	//4
	f +=  printf ("printf4     :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n", 0,0,0,0,0);
	e += ft_printf ("ft_printf4  :|%0+5u|%0+5.3u|%0+5.1u|%0+5.0u|%0+5.u|\n", 0,0,0,0,0);
	//5
	f +=  printf ("printf5     :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n", 0,0,0,0,0);
	e += ft_printf ("ft_printf5  :|%-+05u|%-+05.3u|%-+05.1u|%-+05.0u|%-+05.u|\n", 0,0,0,0,0);
	//6
	f +=  printf ("printf6     :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n", 0,0,0,0,0);
	e += ft_printf ("ft_printf6  :|% 05u|% 05.3u|% 05.1u|% 05.0u|% 05.u|\n", 0,0,0,0,0);
	//7
	f +=  printf("printf7      :|% 03u|\n", 0);
	e += ft_printf("ft_printf7   :|% 03u|\n", 0);

	printf("--------------------\n");
	printf("HEX TEST\n");
	printf("--------------------\n");

printf("\n");
	e += (ft_printf("xSalut %08.4x et %#08x %.1x %#5.11x %5.17x %#.4x\n", 0, 0, 0, 0, 0, 0));
	f +=    (printf("xSalut %08.4x et %#08x %.1x %#5.11x %5.17x %#.4x\n", 0, 0, 0, 0, 0, 0));
	printf("\n");
	e += (ft_printf("Salxt %08.4x et  %.1x %#5.11x %5.17x %#.4x\n", 11, 12, 13, 14, 14));
	f +=    (printf("Salxt %08.4x et  %.1x %#5.11x %5.17x %#.4x\n", 11, 12, 13, 14, 14));
	printf("\n");
	e += (ft_printf("Salxt %-8.4x et  %-.1x %-#5.11x %-5.17x %-#.4x\n", 11, 12, 13, 14, 14));
	f +=    (printf("Salxt %-8.4x et  %-.1x %-#5.11x %-5.17x %-#.4x\n", 11, 12, 13, 14, 14));
	printf("\n");
	e += (ft_printf("xSalxt %-10.4x %#08x %-#5.20x %-5.30x %-#.4x %#8x\n", 0, 5, 0, 0, 0, 60000000));
	f +=    (printf("xSalxt %-10.4x %#08x %-#5.20x %-5.30x %-#.4x %#8x\n", 0, 5, 0, 0, 0, 60000000));
	printf("\n");
	e += (ft_printf("osef ! %#9llX et %-12hhx par ici\n", (unsigned long long)-1248759650, (unsigned char)-1478223695));
	f +=    (printf("osef ! %#9llX et %-12hhx par ici\n", (unsigned long long)-1248759650, (unsigned char)-1478223695));
	printf("\n");
	e += (ft_printf("%0#10.0x %0#x la\n", 12345, 0));
	f +=    (printf("%0#10.0x %0#x la\n", 12345, 0));
	printf("\n");
	e += (ft_printf("%0#10.0x ici\n", 0));
	f +=    (printf("%0#10.0x ici\n", 0));
	printf("\n");

	printf("HEXA\n");
	//1
	f +=  printf("ref : '%010x'\n", 542);
	e += ft_printf("test: '%010x'\n", 542);
	f +=  printf("ref : '%#010x'\n", 542);
	e += ft_printf("test: '%#010x'\n", 542);
	f +=  printf ("printf1     :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n", 999,999,999,999,999);
	e += ft_printf ("ft_printf1  :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n", 999,999,999,999,999);
	//2
	f +=  printf ("printf2     :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n", 999,999,999,999,999);
	e += ft_printf ("ft_printf2  :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n", 999,999,999,999,999);
	//3
	f +=  printf ("printf3     :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n", 999,999,999,999,999);
	e += ft_printf ("ft_printf3  :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n", 999,999,999,999,999);
	//4
	f +=  printf ("printf4     :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n", 999,999,999,999,999);
	e += ft_printf ("ft_printf4  :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n", 999,999,999,999,999);
	//5
	f +=  printf ("printf5     :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n", 999,999,999,999,999);
	e += ft_printf ("ft_printf5  :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n", 999,999,999,999,999);

	 printf("--------------------\n");
	 printf("HEX\n");
	 printf("--------------------\n");
	 printf("\n");

	f +=   printf("'%010x'\n", 542);
	e += ft_printf("'%010x'\n", 542);

	f +=   printf("'%#010x'\n", 542);
	e += ft_printf("'%#010x'\n", 542);

	f +=   printf ("|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n", 0,25,0,10,0);
	e += ft_printf ("|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n", 0,25,0,10,0);

	f +=   printf ("|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n", 0,0,0,10,0);
	e += ft_printf ("|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n", 0,0,0,10,0);

	f +=   printf ("|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n", 0,0,10, 11,0);
	e += ft_printf ("|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n", 0,0,10,11,0);

	f +=   printf ("|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n", 0,0,0,78547,0);
	e += ft_printf ("|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n", 0,0,0,78547,0);

f +=  	 printf ("|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n", 0,0,0,0,0);
e += 	ft_printf ("|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n", 0,0,0,0,0);

	f +=   printf("|%llx|%lx|%x|%hx|%hhx\n", test_conv, test_conv, test_conv, test_conv, test_conv);
	e += ft_printf("|%llx|%lx|%x|%hx|%hhx\n", test_conv, test_conv, test_conv, test_conv, test_conv);
	f +=   printf("|%llx|%lx|%x|%hx|%hhx\n", test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg);
	e += ft_printf("|%llx|%lx|%x|%hx|%hhx\n", test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg);
	f +=   printf("|%llx|%lx|%x|%hx|%hhx\n", test_conv_u, test_conv_u, test_conv_u, test_conv_u, test_conv_u);
	e += ft_printf("|%llx|%lx|%x|%hx|%hhx\n", test_conv_u, test_conv_u, test_conv_u, test_conv_u, test_conv_u);
	printf("--------------------\n");
	printf("HEXA\n");
	printf("--------------------\n");
	printf("\n");
	f +=     printf("ref : '%010x'\n", 542);
	e += ft_printf("test: '%010x'\n", 542);
	f +=     printf("ref : '%#010x'\n", 542);
	e += ft_printf("test: '%#010x'\n", 542);
	f +=     printf ("printf1     :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n", 1,1,1,1,1);
	e += ft_printf ("ft_printf1  :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n", 1,1,1,1,1);
	//2
	f +=     printf ("printf2     :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n", 1,1,1,1,1);
	e += ft_printf ("ft_printf2  :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n", 1,1,1,1,1);
	//3
	f +=     printf ("printf3     :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n", 1,1,1,1,1);
	e += ft_printf ("ft_printf3  :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n", 1,1,1,1,1);
	//4
	 f +=    printf ("printf4     :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n", 1,1,1,1,1);
	e += ft_printf ("ft_printf4  :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n", 1,1,1,1,1);
	//5
	 f +=    printf ("printf5     :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n", 1,1,1,1,1);
	e += ft_printf ("ft_printf5  :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n", 1,1,1,1,1);

	printf("--------------------\n");
	printf("HEXA\n");
	printf("--------------------\n");
	printf("\n");

	f +=  printf("ref : '%010x'\n", 542);
	e += ft_printf("test: '%010x'\n", 542);
	f +=  printf("ref : '%#010x'\n", 542);
	e += ft_printf("test: '%#010x'\n", 542);
	f +=  printf ("printf1     :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n", 0,0,0,0,0);
	e += ft_printf ("ft_printf1  :|%5x|%5.3x|%5.1x|%5.0x|%5.x|\n", 0,0,0,0,0);
	f +=  printf ("printf2     :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n", 0,0,0,0,0);
	e += ft_printf ("ft_printf2  :|%#5x|%#5.3x|%#5.1x|%#5.0x|%#5.x|\n", 0,0,0,0,0);
	f +=  printf ("printf3     :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n", 0,0,0,0,0);
	e += ft_printf ("ft_printf3  :|%-#5x|%-#5.3x|%-#5.1x|%-#5.0x|%-#5.x|\n", 0,0,0,0,0);
	f +=  printf ("printf4     :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n", 0,0,0,0,0);
	e += ft_printf ("ft_printf4  :|%0#5x|%0#5.3x|%0#5.1x|%0#5.0x|%0#5.x|\n", 0,0,0,0,0);
	f +=  printf ("printf5     :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n", 0,0,0,0,0);
	e += ft_printf ("ft_printf5  :|%-0#5x|%-0#5.3x|%-0#5.1x|%-0#5.0x|%-0#5.x|\n", 0,0,0,0,0);




	printf("--------------------\n");
	printf("HEXX TEST\n");
	printf("--------------------\n");
	printf("\n");
	e += (ft_printf("XSalut %08.4X et  %.1X %#5.11X %5.17X %#.4X\n", 0, 0, 0, 0, 0));
	f +=    (printf("XSalut %08.4X et  %.1X %#5.11X %5.17X %#.4X\n", 0, 0, 0, 0, 0));
	printf("\n");
	e += (ft_printf("SalXt %08.4X et  %.1X %#5.11X %5.17X %#.4X\n", 11, 12, 13, 14, 14));
	f +=    (printf("SalXt %08.4X et  %.1X %#5.11X %5.17X %#.4X\n", 11, 12, 13, 14, 14));
	printf("\n");
	e += (ft_printf("SalXt %-#.3X %#-8.4X et  %-.1X %-#5.11X %-5.17X %-#.4X\n", 10, 11, 12, 13, 14, 14));
	f +=    (printf("SalXt %-#.3X %#-8.4X et  %-.1X %-#5.11X %-5.17X %-#.4X\n", 10, 11, 12, 13, 14, 14));
	printf("\n");
	e += (ft_printf("XSalXt %-10.4X %-X %-#5.20X %-5.30X %-#.4X\n", 0, 0, 0, 0, 0));
	f +=    (printf("XSalXt %-10.4X %-X %-#5.20X %-5.30X %-#.4X\n", 0, 0, 0, 0, 0));
	printf("\n");
	e += (ft_printf("ici ici XSalXt %-10.4X %#08X %-#5.20X %-5.30X %-#.4X %#8X %#08X\n", 0, 5, 0, 0, 0, 42, 42));
 	f +=    (printf("ici ici XSalXt %-10.4X %#08X %-#5.20X %-5.30X %-#.4X %#8X %#08X\n", 0, 5, 0, 0, 0, 42, 42));
	printf("\n");
	e += (ft_printf("\ntoto et %00009u%-2lu mimi et titi%--14u", 0, (unsigned long)14, 200));
	f +=    (printf("\ntoto et %00009u%-2lu mimi et titi%--14u", 0, (unsigned long)14, 200));
	printf("\n");
	display_return(e, f, "O, U, x AND X");
	printf("\n");


	printf("--------------------\n");
	printf("HEXX\n");
	printf("--------------------\n");
	printf("\n");

	 printf("'%010X'\n", 542);
	ft_printf("'%010X'\n", 542);

	 printf("'%#010X'\n", 542);
	ft_printf("'%#010X'\n", 542);

	 printf("|%5X|%5.3X|%5.1X|%5.0X|%5.X|\n", 0,25,0,10,0);
	ft_printf ("|%5X|%5.3X|%5.1X|%5.0X|%5.X|\n", 0,25,0,10,0);

	 printf("|%#5X|%#5.3X|%#5.1X|%#5.0X|%#5.X|\n", 0,0,0,10,0);
	ft_printf ("|%#5X|%#5.3X|%#5.1X|%#5.0X|%#5.X|\n", 0,0,0,10,0);

	 printf("|%-#5X|%-#5.3X|%-#5.1X|%-#5.0X|%-#5.X|\n", 0,0,10, 11,0);
	ft_printf ("|%-#5X|%-#5.3X|%-#5.1X|%-#5.0X|%-#5.X|\n", 0,0,10,11,0);

	 printf("|%0#5X|%0#5.3X|%0#5.1X|%0#5.0X|%0#5.X|\n", 0,0,0,78547,0);
	ft_printf ("|%0#5X|%0#5.3X|%0#5.1X|%0#5.0X|%0#5.X|\n", 0,0,0,78547,0);

	 printf("|%-0#5X|%-0#5.3X|%-0#5.1X|%-0#5.0X|%-0#5.X|\n", 0,0,0,0,0);
	ft_printf ("|%-0#5X|%-0#5.3X|%-0#5.1X|%-0#5.0X|%-0#5.X|\n", 0,0,0,0,0);

	//HEXA CONV
	 printf("|%llX|%lX|%X|%hX|%hhX\n", test_conv, test_conv, test_conv, test_conv, test_conv);
	ft_printf("|%llX|%lX|%X|%hX|%hhX\n", test_conv, test_conv, test_conv, test_conv, test_conv);
	 printf("|%llX|%lX|%X|%hX|%hhX\n", test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg);
	ft_printf("|%llX|%lX|%X|%hX|%hhX\n", test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg, test_conv_neg);
	 printf("|%llX|%lX|%X|%hX|%hhX\n", test_conv_u, test_conv_u, test_conv_u, test_conv_u, test_conv_u);
	ft_printf("|%llX|%lX|%X|%hX|%hhX\n", test_conv_u, test_conv_u, test_conv_u, test_conv_u, test_conv_u);

	printf("--------------------\n");
	printf("MODIFIER TEST\n");
	printf("--------------------\n");
	printf("\n");
	g += (ft_printf("%hd %ho %hu %hx %hX\n", (short)32767, (unsigned short)65535, (unsigned short)65535, (unsigned short)65535, (unsigned short)65535));
	h +=    (printf("%hd %ho %hu %hx %hX\n", (short)32767, (unsigned short)65535, (unsigned short)65535, (unsigned short)65535, (unsigned short)65535));
	printf("\n");
	g += (ft_printf("%hhd %hho %hhu %hhx %hhX\n", (char)127, (unsigned char)255, (unsigned char)255, (unsigned char)255, (unsigned char)255));
	h +=    (printf("%hhd %hho %hhu %hhx %hhX\n", (char)127, (unsigned char)255, (unsigned char)255, (unsigned char)255, (unsigned char)255));
	printf("\n");
	g += (ft_printf("%ld %lo %lu %lx %lX\n", (long)2147483647, (unsigned long)4294967295, (unsigned long)4294967295, (unsigned long)4294967295, (unsigned long)4294967295));
	h +=    (printf("%ld %lo %lu %lx %lX\n", (long)2147483647, (unsigned long)4294967295, (unsigned long)4294967295, (unsigned long)4294967295, (unsigned long)4294967295));
	printf("\n");
	g += (ft_printf("%lld %llo %llu %llx %llX\n", (unsigned long long)18446744073709551615, (unsigned long long)18446744073709551615, (unsigned long long)18446744073709551615, (unsigned long long)18446744073709551615, (unsigned long long)18446744073709551615));
	h +=    (printf("%lld %llo %llu %llx %llX\n", (unsigned long long)18446744073709551615, (unsigned long long)18446744073709551615, (unsigned long long)18446744073709551615, (unsigned long long)18446744073709551615, (unsigned long long)18446744073709551615));
	printf("\n");
	g += (ft_printf("%-.5f %LF\n", 5.00, (long double)5.65));
	h +=    (printf("%-.5f %LF\n", 5.00, (long double)5.65));
	printf("\n");
	display_return(g, h, "MODIFIER");
	printf("\n");

	printf("--------------------\n");
	printf("UN PEU DE TOUT\n");
	printf("--------------------\n");
	printf("\n");
	x += (ft_printf("test %-7c %007d %-10.2s!!\n", 0xd777, 0x45, "〻"));
	y +=    (printf("test %-7c %007d %-10.2s!!\n", 0xd777, 0x45, "〻"));
	printf("\n");
	x += (ft_printf("%-+-12.7dt%0 4i %04.2% et %c titi\n", 125, 124, 256));
	y +=    (printf("%-+-12.7dt%0 4i %04.2% et %c titi\n", 125, 124, 256));
	printf("\n");
	x += (ft_printf("%--.4u et %#o %#012o %1c\n", -12, 0, 0, 95));
	y +=    (printf("%--.4u et %#o %#012o %1c\n", -12, 0, 0, 95));
	printf("\n");



























y += printf ("printf9     :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 0,0,0,0,0);
x +=  ft_printf ("ft_printf9  :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 0,0,0,0,0);

y += printf ("printf7     :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 0,0,0,0,0);
x +=  ft_printf ("ft_printf7  :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 0,0,0,0,0);

 printf("FLOAT\n");

y +=  printf ("printf1     :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n", 0,0,0,0,0);
x +=  ft_printf ("ft_printf1  :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n", 0,0,0,0,0);

y +=  printf ("printf2     :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 0,0,0,0,0);
x += ft_printf ("ft_printf2  :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 0,0,0,0,0);

y += printf ("printf2     :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n", 0,0,0,0,0);
x += ft_printf ("ft_printf3  :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n", 0,0,0,0,0);



y +=  printf ("printf5     :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n", 0,0,0,0,0);
x += ft_printf ("ft_printf5  :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n", 0,0,0,0,0);

y += printf ("printf6     :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n", 0,0,0,0,0);
x += ft_printf ("ft_printf6  :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n", 0,0,0,0,0);

y += printf ("printf8     :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n", 0,0,0,0,0);
x += ft_printf ("ft_printf8  :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n", 0,0,0,0,0);

 y +=   printf ("|% 05f|% 05.3f|% 05.1f|% 05.0f|% 05.f|\n",   0,0,-854,4587,0);
x += ft_printf ("|% 05f|% 05.3f|% 05.1f|% 05.0f|% 05.f|\n", 0,0,-854,4587,0);
printf("\n");

y += printf ("printf4     :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 0,0,0,0,0);
x += ft_printf ("ft_printf4  :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 0,0,0,0,0);
	printf("--------------------\n");
	printf("FLOAT NO MINUS\n");
	printf("--------------------\n");
	printf("\n");
	x += (ft_printf("Coucou float %+#1.f %.0f %1.f %.2f %.3f %.4f %.5f\n", 5.32, 530.66, 530.66, 530.66, 530.66, 530.66, 530.66));
	y +=    (printf("Coucou float %+#1.f %.0f %1.f %.2f %.3f %.4f %.5f\n", 5.32, 530.66, 530.66, 530.66, 530.66, 530.66, 530.66));
	printf("\n");
	x += (ft_printf("Coucou float %# 15.10f %15.0f %5.1f %2.2f %2.3f %3.6f %.5f\n", -5.32, -530.66, 530.66, -530.66, 530.66, -530.66, 530.66));
	y +=    (printf("Coucou float %# 15.10f %15.0f %5.1f %2.2f %2.3f %3.6f %.5f\n", -5.32, -530.66, 530.66, -530.66, 530.66, -530.66, 530.66));
	printf("\n");
	x += (ft_printf("Coucou float %#.15f %#15.0f %.1f %.2f %.3f %.4f %.5f\n", 5.12345678912345678912, (double)-0, 530.66, 530.66, -530.66, 530.66, 530.66));
	y +=    (printf("Coucou float %#.15f %#15.0f %.1f %.2f %.3f %.4f %.5f\n", 5.12345678912345678912, (double)-0, 530.66, 530.66, -530.66, 530.66, 530.66));
	printf("\n");
	x += (ft_printf("Coucou float %+15f %+15f %2.1f %3.2f %7.3f %.4f %.5f\n", -6.12345678912345678912, 536.66, 536.66, -536.66, 536.66, 536.66, 536.66));
	y +=    (printf("Coucou float %+15f %+15f %2.1f %3.2f %7.3f %.4f %.5f\n", -6.12345678912345678912, 536.66, 536.66, -536.66, 536.66, 536.66, 536.66));
	printf("\n");

  printf("--------------------\n");
  printf("FLOAT\n");
  printf("--------------------\n");
  printf("\n");

 y += printf("%f\n", DBL_MAX / DBL_MAX);
 x += ft_printf("%f\n", DBL_MAX / DBL_MAX);
 printf("\n");

y += 	printf("%f\n", 1.5);
  x += ft_printf("%f\n", 1.5);
  printf("\n");

y += 	printf("%.f\n", 1.5);
 x +=  ft_printf("%.f\n", 1.5);
  printf("\n");



y += 	printf("%025f\n", 1.5);
  x += ft_printf("%025f\n", 1.5);
  printf("\n");



	y += printf("%##08.5f\n", 38.521);
  x += ft_printf("%##08.5f\n", 38.521);
  printf("\n");






 y += printf("|% 03.8f|\n", 320.32);
 x += ft_printf("|% 03.8f|\n", 320.32);


 printf("FLOAT\n");

 y += printf ("printf1     :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n", 1.1,1.1,1.1,1.1,1.1);
 x += ft_printf ("ft_printf1  :|%5f|%5.3f|%5.1f|%5.0f|%5.f|\n", 1.1,1.1,1.1,1.1,1.1);
 //2
y +=  printf ("printf2     :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 1.1,1.1,1.1,1.1,1.1);
 x += ft_printf ("ft_printf2  :|% 5f|% 5.3f|% 5.1f|% 5.0f|% 5.f|\n", 1.1,1.1,1.1,1.1,1.1);
 //3
y +=  printf ("printf3     :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n", 1.1,1.1,1.1,1.1,1.1);
 x += ft_printf ("ft_printf3  :|% +5f|% +5.3f|% +5.1f|% +5.0f|% +5.f|\n", 1.1,1.1,1.1,1.1,1.1);

y +=  printf ("printf5     :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n", 1.1,1.1,1.1,1.1,1.1);
 x += ft_printf ("ft_printf5  :|%05f|%05.3f|%05.1f|%05.0f|%05.f|\n", 1.1,1.1,1.1,1.1,1.1);
 //6
y +=  printf ("printf6     :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n", 1.1,1.1,1.1,1.1,1.1);
 x += ft_printf ("ft_printf6  :|%#5f|%#5.3f|%#5.1f|%#5.0f|%#5.f|\n", 1.1,1.1,1.1,1.1,1.1);
 //7
 //8
 y += printf ("printf8     :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n", 1.1,1.1,1.1,1.1,1.1);
 x += ft_printf ("ft_printf8  :|%0#5f|%0#5.3f|%0#5.1f|%0#5.0f|%0#5.f|\n", 1.1,1.1,1.1,1.1,1.1);

 //9

printf("--------------------\n");
printf("FLOAT 0\n");
printf("--------------------\n");
printf("\n");
x += (ft_printf("Coucou float %+0#1.f %0.0f %01.f %0.2f %0.3f %0.4f %0.5f\n", 5.32, 530.66, 530.66, 530.66, 530.66, 530.66, 530.66));
y +=    (printf("Coucou float %+0#1.f %0.0f %01.f %0.2f %0.3f %0.4f %0.5f\n", 5.32, 530.66, 530.66, 530.66, 530.66, 530.66, 530.66));
printf("\n");
x += (ft_printf("Coucou float %#0 15.10f %015.0f %05.1f %02.2f %02.3f %03.6f %0.5f\n", -5.32, -530.66, 530.66, -530.66, 530.66, -530.66, 530.66));
y +=    (printf("Coucou float %#0 15.10f %015.0f %05.1f %02.2f %02.3f %03.6f %0.5f\n", -5.32, -530.66, 530.66, -530.66, 530.66, -530.66, 530.66));
printf("\n");
x += (ft_printf("Coucou float %#0.15f %#015.0f %0.1f %0.2f %0.3f %0.4f %0.5f\n", 5.12345678912345678912, (double)-0, 530.66, 530.66, -530.66, 530.66, 530.66));
y +=    (printf("Coucou float %#0.15f %#015.0f %0.1f %0.2f %0.3f %0.4f %0.5f\n", 5.12345678912345678912, (double)-0, 530.66, 530.66, -530.66, 530.66, 530.66));
printf("\n");
x += (ft_printf("Coucou float %+015f %+015f %02.1f %03.2f %07.3f %0.4f %0.5f\n", -6.12345678912345678912, 536.66, 536.66, -536.66, 536.66, 536.66, 536.66));
y +=    (printf("Coucou float %+015f %+015f %02.1f %03.2f %07.3f %0.4f %0.5f\n", -6.12345678912345678912, 536.66, 536.66, -536.66, 536.66, 536.66, 536.66));
printf("\n");

y += printf("%-10.8f\n", 32.5);
x += ft_printf("%-10.8f\n", 32.5);
printf("\n");



y += printf("%-#025.2f\n", 4587.254504541);
x += ft_printf("%-#025.2f\n", 4587.254504541);
printf("\n");

y += printf("%-0#2.15f\n", 485.2);
x += ft_printf("%-0#2.15f\n", 485.2);
printf("\n");


y += printf ("printf4     :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 1.1,1.1,1.1,1.1,1.1);
x += ft_printf ("ft_printf4  :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 1.1,1.1,1.1,1.1,1.1);


y += printf ("printf7     :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 1.1,1.1,1.1,1.1,1.1);
x += ft_printf ("ft_printf7  :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 1.1,1.1,1.1,1.1,1.1);


y += printf ("printf9     :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 1.1,1.1,1.1,1.1,1.1);
x += ft_printf ("ft_printf9  :|%-0#5f|%-0#5.3f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 1.1,1.1,1.1,1.1,1.1);

printf("--------------------\n");
printf("FLOAT MINUS\n");
printf("--------------------\n");
printf("\n");

x += (ft_printf("Coucou float %-20.15f %-10.0f %-1.5f %-#20.2f %-6.3f %-.4f %-.5f\n", 5.32, 530.66, 530.66, 530.66, 530.66, 530.66, 530.66));
y +=    (printf("Coucou float %-20.15f %-10.0f %-1.5f %-#20.2f %-6.3f %-.4f %-.5f\n", 5.32, 530.66, 530.66, 530.66, 530.66, 530.66, 530.66));
printf("\n");
x += (ft_printf("Coucou float %-# 15.10f %-15.1f %-5.1f %-2.2f %-2.3f %-3.6f %-4.5f\n", -5.32, -530.66, 530.66, -530.66, 530.66, -530.66, 530.66));
y +=    (printf("Coucou float %-# 15.10f %-15.1f %-5.1f %-2.2f %-2.3f %-3.6f %-4.5f\n", -5.32, -530.66, 530.66, -530.66, 530.66, -530.66, 530.66));
printf("\n");
x += (ft_printf("Coucou float %-#.15f %-#15.1f %-.1f %-.2f % -7.3f %-5.4f %-5.5f\n", 5.12345678912345678912, (double)-0, 530.66, 530.66, -530.66, 530.66, 530.66));
y +=    (printf("Coucou float %-#.15f %-#15.1f %-.1f %-.2f % -7.3f %-5.4f %-5.5f\n", 5.12345678912345678912, (double)-0, 530.66, 530.66, -530.66, 530.66, 530.66));
printf("\n");
x += (ft_printf("Coucou float %-f %-+15f %-2.1f %-3.2f %-7.3f %-.4f %-.5f\n", 5.0, 536.66, 536.66, -536.66, 536.66, 536.66, 536.66));
y +=    (printf("Coucou float %-f %-+15f %-2.1f %-3.2f %-7.3f %-.4f %-.5f\n", 5.0, 536.66, 536.66, -536.66, 536.66, 536.66, 536.66));
printf("\n");

x += (ft_printf("Coucou float %15f %+15f %2.1f %3.2f %7.3f %.4f %.5f\n", -5.0, 536.66, 536.66, -536.66, 536.66, 536.66, 536.66));
y +=    (printf("Coucou float %15f %+15f %2.1f %3.2f %7.3f %.4f %.5f\n", -5.0, 536.66, 536.66, -536.66, 536.66, 536.66, 536.66));
printf("\n");

printf("--------------------\n");
printf("FLOAT LAST TEST\n");
printf("--------------------\n");
printf("\n");
x += (ft_printf("Test %-#5.f %-+5f %-f %-01.1f %-1fi\n", 1.0, 1.0, 1.0, 1.0, 1.0));
y +=    (printf("Test %-#5.f %-+5f %-f %-01.1f %-1fi\n", 1.0, 1.0, 1.0, 1.0, 1.0));
printf("\n");
x += (ft_printf("Test %- #5.f i\n", 1.0));
y +=    (printf("Test %- #5.f i\n", 1.0));
printf("\n");
x += (ft_printf("Test %-#5.f i\n", 1.0));
y +=    (printf("Test %-#5.f i\n", 1.0));
printf("\n");

x += (ft_printf("Test %-#5.f %-+5f %-f %-01.1f %-1fi\n", 1.0, 1.0, 1.0, 1.0, 1.0));
y +=    (printf("Test %-#5.f %-+5f %-f %-01.1f %-1fi\n", 1.0, 1.0, 1.0, 1.0, 1.0));
printf("\n");
x += (ft_printf("Test % -#5.f i\n", 1.0));
y +=    (printf("Test % -#5.f i\n", 1.0));
printf("\n");
x += (ft_printf("Test %#-5.f i\n", 1.0));
y +=    (printf("Test %#-5.f i\n", 1.0));
printf("\n");
x += (ft_printf("Test %-ld\n", 0xff11ff11ff88));
y +=    (printf("Test %-ld\n", 0xff11ff11ff88));


printf("FLOAT\n");

y += printf ("printf1     :|%-5.3f|%-5.2f|%-5.1f|%-5.0f|%-5.f|\n", 999.999,999.999,999.999,999.999,999.999);
x += ft_printf ("ft_printf1  :|%-5.3f|%-5.2f|%-5.1f|%-5.0f|%-5.f|\n", 999.999,999.999,999.999,999.999,999.999);

y += printf ("printf2     :|%- 5f|%- 5.3f|%- 5.1f|%- 5.0f|%- 5.f|\n", 999.999,999.999,999.999,999.999,999.999);
x += ft_printf ("ft_printf2  :|%- 5f|%- 5.3f|%- 5.1f|%- 5.0f|%- 5.f|\n", 999.999,999.999,999.999,999.999,999.999);
//3
y += printf ("printf3     :|%- +5f|%- +5.3f|%- +5.1f|%- +5.0f|%- +5.f|\n", 999.999,999.999,999.999,999.999,999.999);
x += ft_printf ("ft_printf3  :|%- +5f|%- +5.3f|%- +5.1f|%- +5.0f|%- +5.f|\n", 999.999,999.999,999.999,999.999,999.999);
//4
y += printf ("printf4     :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 999.999,999.999,999.999,999.999,999.999);
x += ft_printf ("ft_printf4  :|%+-5f|%+-5.3f|%+-5.1f|%+-5.0f|%+-5.f|\n", 999.999,999.999,999.999,999.999,999.999);
//5
y += printf ("printf5     :|%-05f|%-05.3f|%-05.1f|%-05.0f|%-05.f|\n", 999.999,999.999,999.999,999.999,999.999);
x += ft_printf ("ft_printf5  :|%-05f|%-05.3f|%-05.1f|%-05.0f|%-05.f|\n", 999.999,999.999,999.999,999.999,999.999);
//6
y += printf ("printf6     :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 999.999,999.999,999.999,999.999,999.999);
x += ft_printf ("ft_printf6  :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 999.999,999.999,999.999,999.999,999.999);
//7
y += printf ("printf7     :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 999.999,999.999,999.999,999.999,999.999);
x += ft_printf ("ft_printf7  :|%-#5f|%-#5.3f|%-#5.1f|%-#5.0f|%-#5.f|\n", 999.999,999.999,999.999,999.999,999.999);
// //9
y += printf ("printf9         :|%-0#5f|%-0#5.11f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10);
x += ft_printf ("ft_printf9      :|%-0#5f|%-0#5.11f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10,999.10);


//
y += printf ("printf8         :|%-.2f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999);
x += ft_printf ("ft_printf8      :|%-.2f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999,999.999);
//9
y += printf ("printf10        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9);
x += ft_printf ("ft_printf10     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9,999.9);
// //9
y += printf ("printf11        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8);
x += ft_printf ("ft_printf11     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8,999.8);
// //9
y += printf ("printf12        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7);
x += ft_printf ("ft_printf12     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7,999.7);
//9
y += printf ("printf13        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6);
x += ft_printf ("ft_printf13     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6,999.6);
//9
 y +=   printf ("printf14        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5);
x += ft_printf ("ft_printf14     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5,999.5);
// //9


y += printf ("printf15        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4);
x += ft_printf ("ft_printf15     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4,999.4);
//9
y += printf ("printf16        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%0-#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3);
x += ft_printf ("ft_printf16     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3,999.3);
//9
y += printf ("printf17        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2);
x += ft_printf ("ft_printf17     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2,999.2);
//9
 y +=   printf ("printf18        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1);
x += ft_printf ("ft_printf18     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1,999.1);
//9
 y +=   printf ("printf19        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.,999.,999.,999.,999.,999.,999.,999.,999.,999.,999.,999.,999.);
x += ft_printf ("ft_printf19     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.,999.,999.,999.,999.,999.,999.,999.,999.,999.,999.,999.,999.);
//
  y +=  printf ("printf20        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0);
x += ft_printf ("ft_printf20     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0,999.0);

 y +=   printf ("printf21        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0-#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999);
x += ft_printf ("ft_printf21     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0-#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999,999.9999999);

y += printf ("printf22        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999);
x += ft_printf ("ft_printf22     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999,999.8999999);

y += printf ("printf23        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999);
x += ft_printf ("ft_printf23     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999,999.7999999);
//
y += printf ("printf24        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999);
x += ft_printf ("ft_printf24     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999,999.6999999);

y += printf ("printf25        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999);
x += ft_printf ("ft_printf25     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999,999.5999999);

y += printf ("printf26        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999);
x += ft_printf ("ft_printf26     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999,999.4999999);

y += printf ("printf27        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999);
x += ft_printf ("ft_printf27     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999,999.3999999);

y += printf ("printf28        :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999);
x += ft_printf ("ft_printf28     :|%-0#5f|%-0#5.10f|%-0#5.9f|%-0#5.8f|%-0#5.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999,999.2999999);

y += printf ("printf29        :|%-#15f|%-0#15.10f|%-0#15.9f|%-0#15.8f|%-0#12.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999);
x += ft_printf ("ft_printf29     :|%-#15f|%-0#15.10f|%-0#15.9f|%-0#15.8f|%-0#12.7f|%-0#5.6f|%-0#5.5f|%-0#5.4f|%-0#5.3f|%-0#5.2f|%-0#5.1f|%-0#5.0f|%-0#5.f|\n", 999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999,999.1999999);


y += printf ("printf5     :|%-f|\n", 0.0001);
x += ft_printf ("printf5     :|%-f|\n", 0.0001);

//
y += printf("flt value     :   %f\n",  (float)1844674407370955161.1844674407370955161);
x += ft_printf("flt value     :   %f\n",  (float)1844674407370955161.1844674407370955161);

y += printf("%f\n", 9999999999999999999.0);
x += ft_printf("%f\n", 9999999999999999999.0);

y += printf("%.2f\n", 82.135);
x += ft_printf("%.2f\n", 82.135);
y += printf("%.3f\n", 484187171.1235);
x += ft_printf("%.3f\n", 484187171.1235);

y += printf("%f\n", -0.0);
x += ft_printf("%f\n", -0.0);


printf("\n");

display_return(x, y, "MIX AND TWIST");
printf("\n");



 printf("--------------------\n");
 printf("CHAR\n");
 printf("--------------------\n");
 printf("\n");

	printf("|%c|\n", 'c');
  ft_printf("|%c|\n", 'c');

	printf("| Holaaa %45c Hopla|\n", '\0');
  ft_printf("| Holaaa %45c Hopla|\n", '\0');

	printf("|%-45c|\n", 'p');
  ft_printf("|%-45c|\n", 'p');

	printf("|%-2c|\n", NULL);
  ft_printf("|%-2c|\n", NULL);

	printf("|%c|\n", 8);
  ft_printf("|%c|\n", 8);

	printf("|%8c|\n", 62);
  ft_printf("|%8c|\n", 62);

	printf("|%-c|\n", 'u');
  ft_printf("|%-c|\n\n", 'u');


  printf("--------------------\n");
  printf("POINTEUR\n");
  printf("--------------------\n");
  printf("\n");


  char *stringswag = "Hello";
  int petitpd = 45;

	printf("|%p|\n", &stringswag);
  ft_printf("|%p|\n", &stringswag);

	printf("|Adresse de b : %-32p|\n", &petitpd);
  ft_printf("|Adresse de b : %-32p|\n", &petitpd);

	printf("|%45p|\n", &stringswag);
  ft_printf("|%45p|\n\n", &stringswag);



  printf("--------------------\n");
  printf("POURCENT\n");
  printf("--------------------\n");
  printf("\n");
	printf("|%%|\n");
  ft_printf("|%%|\n");

	printf("|%5%|\n");
  ft_printf("|%5%|\n");

	printf("|%045%|\n");
  ft_printf("|%045%|\n");

	printf("|%-45%|\n");
  ft_printf("|%-45%|\n");

	printf("|%45%|\n");
  ft_printf("|%45%|\n\n");

  printf("|%*.*s|\n", 20, 4, "Bonjour");
ft_printf("|%*.*s|\n", 20, 4, "Bonjour");

  printf("|%-*.*d|\n", 20, 40, 85);
ft_printf("|%-*.*d|\n", 20, 40, 85);


  printf("|%*.*x|\n", 20, 40, 85);
ft_printf("|%*.*x|\n", 20, 40, 85);



  printf("--------------------\n");
  printf("P\n");
  printf("--------------------\n");
  printf("\n");
//1
printf("P\n");
//1
   printf ("printf1     :|%7p|%7p|%7p|%7p|%7p|\n", 0,0,0,0,0);
ft_printf ("ft_printf1  :|%7p|%7p|%7p|%7p|%7p|\n", 0,0,0,0,0);
//2
   printf ("printf2     :|%7p|%7p|%7p|%7p|%7p|\n", 0,0,0,0,0);
ft_printf ("ft_printf2  :|%7p|%7p|%7p|%7p|%7p|\n", 0,0,0,0,0);
//3
   printf ("printf3     :|%-7p|%-7p|%-7p|%-7p|%-7p|\n", 0,0,0,0,0);
ft_printf ("ft_printf3  :|%-7p|%-7p|%-7p|%-7p|%-7p|\n", 0,0,0,0,0);
//4
   printf ("printf4     :|%07p|%07p|%07p|%07p|%07p|\n", 0,0,0,0,0);
ft_printf ("ft_printf4  :|%07p|%07p|%07p|%07p|%07p|\n", 0,0,0,0,0);
//5
   printf ("printf5     :|%-07p|%-07p|%-07p|%-07p|%-07p|\n", 0,0,0,0,0);
ft_printf ("ft_printf5  :|%-07p|%-07p|%-07p|%-07p|%-07p|\n", 0,0,0,0,0);
//6
   printf ("printf5     :|%-07p|%-07p|%-07p|%-07p|%-07p|\n", 0,0,0,0,0);
ft_printf ("ft_printf5  :|%-07p|%-07p|%-07p|%-07p|%-07p|\n", 0,0,0,0,0);



printf("--------------------\n");
printf("P\n");
printf("--------------------\n");
printf("\n");
printf("P\n");
//1
   printf ("printf1     :|%7p|%7p|%7p|%7p|%7p|\n", 1,1,1,1,1);
ft_printf ("ft_printf1  :|%7p|%7p|%7p|%7p|%7p|\n", 1,1,1,1,1);
//2
   printf ("printf2     :|%7p|%7p|%7p|%7p|%7p|\n", 1,1,1,1,1);
ft_printf ("ft_printf2  :|%7p|%7p|%7p|%7p|%7p|\n", 1,1,1,1,1);
//3
   printf ("printf3     :|%-7p|%-7p|%-7p|%-7p|%-7p|\n", 1,1,1,1,1);
ft_printf ("ft_printf3  :|%-7p|%-7p|%-7p|%-7p|%-7p|\n", 1,1,1,1,1);
//4
   printf ("printf4     :|%07p|%07p|%07p|%07p|%07p|\n", 1,1,1,1,1);
ft_printf ("ft_printf4  :|%07p|%07p|%07p|%07p|%07p|\n", 1,1,1,1,1);
//5
   printf ("printf5     :|%-07p|%-07p|%-07p|%-07p|%-07p|\n", 1,1,1,1,1);
ft_printf ("ft_printf5  :|%-07p|%-07p|%-07p|%-07p|%-07p|\n", 1,1,1,1,1);
//6
   printf ("printf5     :|%-07p|%-07p|%-07p|%-07p|%-07p|\n", 1,1,1,1,1);
ft_printf ("ft_printf5  :|%-07p|%-07p|%-07p|%-07p|%-07p|\n", 1,1,1,1,1);
//DECI\\

printf("P\n");
//1
   printf ("printf1     :|%7p|%7p|%7p|%7p|%7p|\n", 999,999,999,999,999);
ft_printf ("ft_printf1  :|%7p|%7p|%7p|%7p|%7p|\n", 999,999,999,999,999);
//2
   printf ("printf2     :|%7p|%7p|%7p|%7p|%7p|\n", 999,999,999,999,999);
ft_printf ("ft_printf2  :|%7p|%7p|%7p|%7p|%7p|\n", 999,999,999,999,999);
//3
   printf ("printf3     :|%-7p|%-7p|%-7p|%-7p|%-7p|\n", 999,999,999,999,999);
ft_printf ("ft_printf3  :|%-7p|%-7p|%-7p|%-7p|%-7p|\n", 999,999,999,999,999);
//4
   printf ("printf4     :|%07p|%07p|%07p|%07p|%07p|\n", 999,999,999,999,999);
ft_printf ("ft_printf4  :|%07p|%07p|%07p|%07p|%07p|\n", 999,999,999,999,999);
//5
printf ("printf4     :|%06p|%06p|%06p|%06p|%06p|\n", 999,999,999,999,999);
ft_printf ("ft_printf4  :|%06p|%06p|%06p|%06p|%06p|\n", 999,999,999,999,999);

printf ("printf4     :|%05p|%05p|%05p|%05p|%05p|\n", 999,999,999,999,999);
ft_printf ("ft_printf4  :|%05p|%05p|%05p|%05p|%05p|\n", 999,999,999,999,999);

printf ("printf4     :|%04p|%04p|%04p|%04p|%04p|\n", 999,999,999,999,999);
ft_printf ("ft_printf4  :|%04p|%04p|%04p|%04p|%04p|\n", 999,999,999,999,999);

printf ("printf4     :|%03p|%03p|%03p|%03p|%03p|\n", 999,999,999,999,999);
ft_printf ("ft_printf4  :|%03p|%03p|%03p|%03p|%03p|\n", 999,999,999,999,999);

printf ("printf4     :|%02p|%02p|%02p|%02p|%02p|\n", 999,999,999,999,999);
ft_printf ("ft_printf4  :|%02p|%02p|%02p|%02p|%02p|\n", 999,999,999,999,999);

printf ("printf4     :|%01p|%01p|%01p|%01p|%01p|\n", 999,999,999,999,999);
ft_printf ("ft_printf4  :|%01p|%01p|%01p|%01p|%01p|\n", 999,999,999,999,999);

printf ("printf4     :|%0p|%0p|%0p|%0p|%0p|\n", 999,999,999,999,999);
ft_printf ("ft_printf4  :|%0p|%0p|%0p|%0p|%0p|\n", 999,999,999,999,999);

   printf ("printf5     :|%-07p|%-07p|%-07p|%-07p|%-07p|\n", 999,999,999,999,999);
ft_printf ("ft_printf5  :|%-07p|%-07p|%-07p|%-07p|%-07p|\n", 999,999,999,999,999);
//6
   printf ("printf5     :|%-07p|%-07p|%-07p|%-07p|%-07p|\n", 999,999,999,999,999);
ft_printf ("ft_printf5  :|%-07p|%-07p|%-07p|%-07p|%-07p|\n", 999,999,999,999,999);
//
//
//
//
// /*
// //
// //
// // MAIN 3
// //
// */
//
//
//
int coucou;
int caca;
int kiki;
int cava;
int nono;
int papa;

coucou = 0;
caca = 1;
kiki = 2;
papa = ((16 * 16 * 16 * 16 * 16 * 16) + 1);
cava = 1000000;
nono = LONG_MAX;


ft_printf("#2 %d %d %d\n", 542);
printf("#2 %d %d %d\n", 542);
ft_printf("#3 %+-d\n", 542);
printf("#3 %+-d\n", 542);
ft_printf("#4 %00.0d\n", 542);
printf("#4 %00.0d\n", 542);
ft_printf("#5 %00.00d\n", 542);
printf("#5 %00.00d\n", 542);
ft_printf("#6 %%%%%d\n", 542);
printf("#6 %%%%%d\n", 542);
ft_printf("#9 %+10d\n", 42);
printf("#9 %+10d\n", 42);
					ft_printf("#10 %++0d\n", 542);
					   printf("#10 %++0d\n", 542);
					   ft_printf("#10 %-++0d\n", 542);
					      printf("#10 %-++0d\n", 542);
ft_printf("#11 %ld\n", nono);
printf("#11 %ld\n", nono);
	ft_printf("#16 %+2.2p\n", kiki);
	   printf("#16 %+2.2p\n", kiki);
	ft_printf("#17 %+2.0p\n", papa);
	   printf("#17 %+2.0p\n", papa);
	ft_printf("#18 %+0.0p\n", papa);
	   printf("#18 %+0.0p\n", papa);


ft_printf("#19 %.3d\n", kiki);
printf("#19 %.3d\n", kiki);
ft_printf("#20 %#o\n", kiki);
printf("#20 %#o\n", kiki);
ft_printf("#21 %o\n", kiki);
printf("#21 %o\n", kiki);
ft_printf("#22 %0+3d\n", kiki);
printf("#22 %0+3d\n", kiki);
ft_printf("#23 abc%%%0+3d\n", kiki);
printf("#23 abc%%%0+3d\n", kiki);
ft_printf("#24 %.3d\n", kiki);
printf("#24 %.3d\n", kiki);
ft_printf("#25 hello\n", coucou, caca, kiki);
printf("#25 hello\n", coucou, caca, kiki);
ft_printf("#26 %d\n", coucou, caca, kiki);
printf("#26 %d\n", coucou, caca, kiki);
ft_printf("#27 %s\n", coucou, caca, kiki);
printf("#27 %s\n", coucou, caca, kiki);
ft_printf("#28 %%\n");
printf("#28 %%\n");
ft_printf("#30 %caca\n", coucou, caca, kiki);
printf("#30 %caca\n", coucou, caca, kiki);
ft_printf("#31 %%%d\n", coucou, caca, kiki);
printf("#31 %%%d\n", coucou, caca, kiki);





ft_printf("#18 %+0#t\n", 9000000000);
   printf("#18 %+0#t\n\n\n", 9000000000);

   ft_printf("ft_printf : %i\n", 9000000000);
   printf( "printf    : %i\n", 9000000000);

   ft_printf("ft_printf : %-*s%d\n", 14, "Hello world", 19);
   printf( "printf    : %-*s%d\n\n", 14, "Hello world", 19);

   ft_printf("ft_printf : %*s%d\n", 14, "Hello world", 19);
   printf( "printf    : %*s%d\n\n", 14, "Hello world", 19);

   ft_printf("ft_printf : %-.*s%d\n", 14, "Hello world", 19);
   printf( "printf    : %-.*s%d\n\n", 14, "Hello world", 19);

   ft_printf("ft_printf : %.*s%d\n", 14, "Hello world", 19);
   printf( "printf    : %.*s%d\n\n", 14, "Hello world", 19);

   ft_printf("ft_printf : %11.10s\n", "Hello world");
   printf( "printf    : %11.10s\n\n", "Hello world");

   ft_printf("ft_printf : %00.13s3\n", "Hello world");
   printf( "printf    : %00.13s3\n\n", "Hello world");

   ft_printf("ft_printf : % -15s7\n", "Hello world");
   printf( "printf    : % -15s7\n\n", "Hello world");

   ft_printf("ft_printf : %011.0s8\n", "Hello world");
   printf( "printf    : %011.0s8\n\n", "Hello world");

   ft_printf("ft_printf : %10.0s4\n", "Hello world");
   printf( "printf    : %10.0s4\n\n", "Hello world");

   ft_printf("ft_printf : %-014s2\n", "Hello world");
   printf( "printf    : %-014s2\n\n", "Hello world");

	 ft_printf("ft_printf1 : %#010.4i-\n", -10);
 printf( "printf1    : %#010.4i-\n", -10);

 ft_printf("ft_printf2 : %-10.4i-\n", -10);
 printf( "printf2    : %-10.4i-\n", -10);

 ft_printf("ft_printf3 : %00000000010.4i-\n", -10);
 printf( "printf3    : %00000000010.4i-\n", -10);

 ft_printf("ft_printf4 : %0-10.4i-\n", -10);
 printf( "printf4    : %0-10.4i-\n", -10);

 ft_printf("ft_printf5 : %010i-\n", -10);
 printf( "printf5    : %010i-\n", -10);

 ft_printf("ft_printf6 : %-1.3i-\n", -10);
 printf( "printf6    : %-1.3i-\n", -10);

 ft_printf("ft_printf7 : %+#10.4i-\n", 0);
 printf( "printf7    : %+#10.4i-\n", 0);

 ft_printf("ft_printf8 : %+-10.4i-\n", 0);
    printf("printf8    : %+-10.4i-\n", 0);

  ft_printf("ft_printf9 : %+010.4i-\n", 0);
    printf( "printf9    : %+010.4i-\n", 0);

 ft_printf("ft_printf10 : %+0-10.4i-\n", 10);
   printf( "printf10    : %+0-10.4i-\n", 10);

 ft_printf("ft_printf11 : %+-5.3i-\n", 0);
   printf( "printf1     : %+-5.3i-\n", 0);

	 ft_printf("ft_printf11 : %hhhhhi-\n", 0);
		 printf( "printf1     : %hhhhhi-\n", 0);

x += (ft_printf("Coucou float %-#15.1f\n", -0));
y +=    (printf("Coucou float %-#15.1f\n", -0));
printf("\n");

x += (ft_printf("Coucou float %f\n", -0.0));
y +=    (printf("Coucou float %f\n", -0.0));
printf("\n");

x += (ft_printf("%-05d\n", -42));
y += (printf("%-05d\n", -42));
printf("\n");

x += (ft_printf("%-0+5d\n", -42));
y += (printf("%-0+5d\n", -42));
printf("\n");

x += (ft_printf("%05d\n", -42));
y += (printf("%05d\n", -42));
printf("\n");

x += (ft_printf("%0+5d\n", -42));
y += (printf("%0+5d\n", -42));
printf("\n");

x += (ft_printf("%5d\n", -42));
y += (printf("%5d\n", -42));
printf("\n");

x += (ft_printf("%+5d\n", -42));
y += (printf("%+5d\n", -42));
printf("\n");


	return (0);
}

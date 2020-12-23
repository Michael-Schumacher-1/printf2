#include <stdio.h>
#include "libftprintf.h"

int main()
{
  char c = 'a';
  char *s = "string";
  int i = -132454845;
  int x = 1213432;
  int x2 = 0;
  unsigned int u = 2147483649;
  int amp = 12;
  int n;
  char *sc = "";

  int ret = 0;
  int ret2 = 0;

  /*
  **MANDATORY_PART SPECIFIERS
  */

  write(1,"\n|___BEGIN___|\n",15);

  //char test
  write(1,"\n|%c basic test|\n",17);

  ret = printf("printf c:%cl\n", c);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf c:%cl\n", c);
  ft_printf("ft_printf ret:%i\n", ret2);

  /*ret = printf("printf c with space between modulo and specifier:q%   cq\n", c);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf c with space between modulo and specifier:q%   cq\n", c);
  ft_printf("ft_printf ret:%i\n", ret2);*/

  ret = printf("printf 2 c:%c, %cl\n", c, c);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf 2 c:%c, %cl\n", c, c);
  ft_printf("ft_printf ret:%i\n", ret2);

  write(1,"\n|%% basic test|\n",17);

  ret = printf("printf %%:%%l\n");
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf %%:%%l\n");
  ft_printf("ft_printf ret:%i\n", ret2);

  ret = printf("printf %% with space between modulo and specifier:q%   %q\n");
  printf("printf ret:%d\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf %% with space between modulo and specifier:q%   %q\n");
  ft_printf("ft_printf ret:%d\n", ret2);

  ret = printf("printf 2 %%:%%, \n");
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf 2 %%:%%, \n");
  ft_printf("ft_printf ret:%i\n", ret2);

  //integer test
  write(1,"\n|%i basic test|\n",17);

  ret = printf("printf i:%il\n", i);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf i:%il\n", i);
  ft_printf("ft_printf ret:%i\n", ret2);

  ret = printf("printf i with space between modulo and specifier:q%   iq\n", i);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf i with space between modulo and specifier:q%   iq\n", i);
  ft_printf("ft_printf ret:%i\n", ret2);

  ret = printf("printf 2 i:%i, %il\n", i, i);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf 2 i:%i, %il\n", i, i);
  ft_printf("ft_printf ret:%i\n", ret2);

  write(1,"\n|%d basic test|\n",17);

  ret = printf("printf d:%dl\n", i);
  printf("printf ret:%d\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf d:%dl\n", i);
  ft_printf("ft_printf ret:%d\n", ret2);

  ret = printf("printf d with space between modulo and specifier:q%   dq\n", i);
  printf("printf ret:%d\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf d with space between modulo and specifier:q%   dq\n", i);
  ft_printf("ft_printf ret:%d\n", ret2);

  ret = printf("printf 2 d:%d, %dl\n", i, i);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf 2 d:%d, %dl\n", i, i);
  ft_printf("ft_printf ret:%i\n", ret2);

  write(1,"\n|%u basic test|\n",17);

  ret = printf("printf u:%ul\n", u);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf u:%ul\n", u);
  ft_printf("ft_printf ret:%i\n", ret2);

  /*ret = printf("printf u with space between modulo and specifier:q%   uq\n", u);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf u with space between modulo and specifier:q%   uq\n", u);
  ft_printf("ft_printf ret:%i\n", ret2);*/

  ret = printf("printf 2 u:%u, %ul\n", u, u);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf 2 u:%u, %ul\n", u, u);
  ft_printf("ft_printf ret:%i\n", ret2);

  //str test
  write(1,"\n|%s basic test|\n",17);

  ret = printf("printf s:%sl\n", s);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf s:%sl\n", s);
  ft_printf("ft_printf ret:%i\n", ret2);

  /*ret = printf("printf s with space between modulo and specifier:q%   sq\n", s);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf s with space between modulo and specifier:q%   sq\n", s);
  ft_printf("ft_printf ret:%i\n", ret2);*/

  ret = printf("printf 2 s:%s, %sl\n", s, s);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf 2 s:%s, %sl\n", s, s);
  ft_printf("ft_printf ret:%i\n", ret2);

  write(1,"\n|%p basic test|\n",17);

  ret = printf("printf p:%pl\n", s);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf p:%pl\n", s);
  ft_printf("ft_printf ret:%i\n", ret2);

  /*ret = printf("printf p with space between modulo and specifier:q%   pq\n", s);
  printf("printf ret:%d\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf p with space between modulo and specifier:q%   pq\n", s);
  ft_printf("ft_printf ret:%d\n", ret2);*/

  ret = printf("printf 2 p:%p, %pl\n", s, s);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf 2 p:%p, %pl\n", s, s);
  ft_printf("ft_printf ret:%i\n", ret2);

  //hexadecimal test
  write(1,"\n|%x basic test|\n",17);

  ret = printf("printf x:%xl\n", x);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf x:%xl\n", x);
  ft_printf("ft_printf ret:%i\n", ret2);

  /*ret = printf("printf x with space between modulo and specifier:q%   xq\n", x);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf x with space between modulo and specifier:q%   xq\n", x);
  ft_printf("ft_printf ret:%i\n", ret2);*/

  ret = printf("printf 2 x:%x, %xl\n", x, x);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf 2 x:%x, %xl\n", x, x);
  ft_printf("ft_printf ret:%i\n", ret2);

  write(1,"\n|%X basic test|\n",17);

  ret = printf("printf X:%Xl\n", x);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf X:%Xl\n", x);
  ft_printf("ft_printf ret:%i\n", ret2);

  /*ret = printf("printf X with space between modulo and specifier:q%   Xq\n", x);
  printf("printf ret:%d\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf X with space between modulo and specifier:q%   Xq\n", x);
  ft_printf("ft_printf ret:%d\n", ret2);*/

  ret = printf("printf 2 X:%X, %Xl\n", x, x);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf 2 X:%X, %Xl\n", x, x);
  ft_printf("ft_printf ret:%i\n", ret2);

  write(1,"\n|Multiple specifiers test|\n",28);

  ret = printf("printf c, %%, d, i, u, s, p, x, X:%c, %%, %d, %i, %u, %s, %p, %x, %Xl\n", c, i, i, u, s, s, x, x);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf c, %%, d, i, u, s, p, x, X:%c, %%, %d, %i, %u, %s, %p, %x, %Xl\n", c, i, i, u, s, s, x, x);
  ft_printf("ft_printf ret:%i\n", ret2);

  /*
  **MANDATORY_PART FLAGS
  */

  //Minimum field witdh = a number between the modulo and the specifier or flag, this will print out spaces before the argument output if the minimum field witdh is not attained
  // - flag is used to put the minimum space witdh spaces after the argument output instead of after the argument output
  //the 0 flag right after the modulo and before the space width fills the minimum field width with 0s instead of spaces
  // the . flag right after the modulo or minimum field witdh must be followed by a number, this number indicates how much decimals should be written after the decimal point, problem only works with f specifier
  // the * flag can be used as a width specifier in the form of an argument

    write(1,"\n|min space width basic test|\n",30);

    ret = printf("printf 12 min width for i:%12i\n", i);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for i:%12i\n", i);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for d:%12d\n", x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for d:%12d\n", x);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for s:%12s\n", s);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for s:%12s\n", s);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for u:%12u\n", u);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for u:%12u\n", u);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for x:%12x\n", x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for x:%12x\n", x);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for X:%12X\n", x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for X:%12X\n", x);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for p:%12p\n", s);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for p:%12p\n", s);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for c:%12c\n", c);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for c:%12c\n", c);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for %%:%12%\n");
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for %%:%12%\n");
    ft_printf("ft_printf ret:%i\n", ret2);

    write(1,"\n|Multiple specifiers test with min witdh 3|\n",47);

    ret = printf("printf c, %%, d, i, u, s, p, x, X:%3c, %3%, %3d, %3i, %3u, %3s, %3p, %3x, %3Xl\n", c, i, i, u, s, s, x, x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf c, %%, d, i, u, s, p, x, X:%3c, %3%, %3d, %3i, %3u, %3s, %3p, %3x, %3Xl\n", c, i, i, u, s, s, x, x);
    ft_printf("ft_printf ret:%i\n", ret2);

    write(1,"\n|minus flag basic test|\n",25);

    ret = printf("printf 12 min width for i with - flag:%-12il\n", i);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for i with - flag:%-12il\n", i);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for d with - flag:%-12dl\n", x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for d with - flag:%-12dl\n", x);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for s with - flag:%-12sl\n", s);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for s with - flag:%-12sl\n", s);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for u with - flag:%-12ul\n", u);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for u with - flag:%-12ul\n", u);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for x with - flag:%-12xl\n", x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for x with - flag:%-12xl\n", x);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for X with - flag:%-12Xl\n", x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for X with - flag:%-12Xl\n", x);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for p with - flag:%-12pl\n", s);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for p with - flag:%-12pl\n", s);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for c with - flag:%-12cl\n", c);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for c with - flag:%-12cl\n", c);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for %% with - flag:%-12%\n");
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for %% with - flag:%-12%\n");
    ft_printf("ft_printf ret:%i\n", ret2);

    write(1,"\n|Multiple specifiers test with minus flag|\n",46);

    ret = printf("printf c, %%, d, i, u, s, p, x, X:%-3c, %-3%, %-3d, %-3i, %-3u, %-3s, %-3p, %-3x, %-3Xl\n", c, i, i, u, s, s, x, x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf c, %%, d, i, u, s, p, x, X:%-3c, %-3%, %-3d, %-3i, %-3u, %-3s, %-3p, %-3x, %-3Xl\n", c, i, i, u, s, s, x, x);
    ft_printf("ft_printf ret:%i\n", ret2);

    write(1,"\n|min space width 0 flag basic test|\n",37); //- flag is used to put the minimum space witdh spaces after the argument output instead of before the argument output, it doesn't work in combination with the - flag

    ret = printf("printf 12 min width for i:%012i\n", i);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for i:%012i\n", i);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for d:%012d\n", x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for d:%012d\n", x);
    ft_printf("ft_printf ret:%i\n", ret2);

    /*ret = printf("printf 12 min width for s:%012s\n", s);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for s:%012s\n", s);
    ft_printf("ft_printf ret:%i\n", ret2);*/

    ret = printf("printf 12 min width for u:%012u\n", u);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for u:%012u\n", u);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for x:%012x\n", x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for x:%012x\n", x);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 min width for X:%012X\n", x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for X:%012X\n", x);
    ft_printf("ft_printf ret:%i\n", ret2);

    /*ret = printf("printf 12 min width for p:%012p\n", s);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for p:%012p\n", s);
    ft_printf("ft_printf ret:%i\n", ret2);*/

    /*ret = printf("printf 12 min width for c:%012c\n", c);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for c:%012c\n", c);
    ft_printf("ft_printf ret:%i\n", ret2);*/

    ret = printf("printf 12 min width for %%:%012%\n");
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for %%:%012%\n");
    ft_printf("ft_printf ret:%i\n", ret2);

    write(1,"\n|Multiple specifiers test with 0 flag|\n",43);

    ret = printf("printf c, %%, d, i, u, s, p, x, X:%3c, %03%, %03d, %03i, %03u, %3s, %3p, %03x, %03Xl\n", c, i, i, u, s, s, x, x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf c, %%, d, i, u, s, p, x, X:%3c, %03%, %03d, %03i, %03u, %3s, %3p, %03x, %03Xl\n", c, i, i, u, s, s, x, x);
    ft_printf("ft_printf ret:%i\n", ret2);

    write(1,"\n|* flag basic test|\n",21); //* flag is used as a way to insert the min_witdh as an argument

    ret = printf("printf 12 min width for i with * flag:%*i\n", amp, i);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 min width for i with * flag:%*i\n", amp, i);
    ft_printf("ft_printf ret:%i\n", ret2);

    write(1,"\n|Multiple specifiers test with * flag|\n",43);

    ret = printf("printf c, %%, d, i, u, s, p, x, X:%*c, %*%, %*d, %*i, %*u, %*s, %*p, %*x, %*Xl\n", amp, c, amp, amp, i, amp, i, amp, u, amp, s, amp, s, amp, x, amp, x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf c, %%, d, i, u, s, p, x, X:%*c, %*%, %*d, %*i, %*u, %*s, %*p, %*x, %*Xl\n", amp, c, amp, amp, i, amp, i, amp, u, amp, s, amp, s, amp, x, amp, x);
    ft_printf("ft_printf ret:%i\n", ret2);

    write(1,"\n|. flag special test|\n",23);

    ret = printf("printf 12 precision for i with .* flag:%.*i\n", amp, i);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 precision for i with .* flag:%.*i\n", amp, i);
    ft_printf("ft_printf ret:%i\n", ret2);


    ret = printf("printf 0 precision for i with . flag:%.i\n", i);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 0 precision for i with . flag:%.i\n", i);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 0 precision for value 0 with . flag:%.i\n", x2);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 0 precision for value 0 with . flag:%.i\n", x2);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 precision for i with . flag:%.12i\n", i);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 precision for i with . flag:%.12i\n", i);
    ft_printf("ft_printf ret:%i\n", ret2);

    write(1,"\n|. flag basic test|\n",21);

    ret = printf("printf 12 precision for i with . flag:%.12i\n", i);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 precision for i with . flag:%.12i\n", i);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 precision for d with . flag:%.12d\n", x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 precision for d with . flag:%.12d\n", x);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 precision for s with . flag:%.12s\n", s);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 precision for s with . flag:%.12s\n", s);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 2 precision for s with . flag:%.2s\n", s);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 2 precision for s with . flag:%.2s\n", s);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 precision for u with . flag:%.12u\n", u);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 precision for u with . flag:%.12u\n", u);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 precision for x with . flag:%.12x\n", x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 precision for x with . flag:%.12x\n", x);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 12 precision for X with . flag:%.12X\n", x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 precision for X with . flag:%.12X\n", x);
    ft_printf("ft_printf ret:%i\n", ret2);

    /*ret = printf("printf 12 precision for p with . flag:%.12p\n", s);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 precision for p with . flag:%.12p\n", s);
    ft_printf("ft_printf ret:%i\n", ret2);*/

    /*ret = printf("printf 12 precision for c with . flag:%.12c\n", c);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 precision for c with . flag:%.12c\n", c);
    ft_printf("ft_printf ret:%i\n", ret2);*/

    ret = printf("printf 12 precision for %% with . flag:%.12%\n");
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 12 precision for %% with . flag:%.12%\n");
    ft_printf("ft_printf ret:%i\n", ret2);

    write(1,"\n|Multiple specifiers test with . flag|\n",43);

    ret = printf("printf c, %%, d, i, u, s, p, x, X:%.5c, %.3%, %.3d, %.19i, %.3u, %.3s, %3p, %.3x, %.3Xl\n", c, i, i, u, s, s, x, x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf c, %%, d, i, u, s, p, x, X:%.5c, %.3%, %.3d, %.19i, %.3u, %.3s, %3p, %.3x, %.3Xl\n", c, i, i, u, s, s, x, x);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    //GET_CRAZY / FLAG COMBINATIONS
    
    write(1,"\n|% space basic test|\n",22); //If min witdh follows not taken into account, unless min witdh is less than string lenght
    
    ret = printf("printf one space with flag space:% i\n", x);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf one space with flag space:% i\n", x);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("printf one space with flag space:%.0i\n", 0);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf one space with flag space:%.0i\n", 0);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    write(1,"\n|special cases|\n",17); //If min witdh follows not taken into account, unless min witdh is less than string lenght
    
    ret = printf("Multiple same flags 0:%00021i\n", i);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("Multiple same flags 0:%00021i\n", i);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("Multiple same flags -:%---21il\n", i);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("Multiple same flags -:%---21il\n", i);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("Multiple same flags .:%...21il\n", i);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("Multiple same flags .:%...21il\n", i);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("precision of zero:%.0i\n", 0);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("precision of zero:%.0i\n", 0);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("");
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("");
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("printf empty string:%s", sc);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf empty string:%s", sc);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("printf Minimum int:%i\n", -2147483648);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf Minimum int:%i\n", -2147483648);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("printf Int 0:%i\n", 0);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf Int 0:%i\n", 0);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("printf NULL pointer:%s\n", NULL);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf NULL pointer:%s\n", NULL);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    write(1,"\n|Flag combinations|\n",21);
    
    ret = printf("printf modulo minus zero 5 modulo:%-05%\n");
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf modulo minus zero 5 modulo:%-05%\n");
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("printf modulo precision 5 s modulo 7 s:%.5s%7s\n", "yo", "boi");
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf modulo precision 5 s modulo 7 s:%.5s%7s\n", "yo", "boi");
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("printf modulo 7 precision 5 s:%7.5s\n", "bombastic");
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf modulo 7 precision 5 s:%7.5s\n", "bombastic");
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("printf modulo 7 point 5 s:%7.5s\n", "yolo");
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf modulo 7 point 5 s:%7.5s\n", "yolo");
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("printf modulo 8 point 5 i:%8.5i\n", 34);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf modulo 8 point 5 i:%8.5i\n", 34);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("modulo 10 point 5 i:%10.5i\n", -216);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("modulo 10 point 5 i:%10.5i\n", -216);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("modulo 8 point 3 i:%8.3i\n", -8473);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("modulo 8 point 3 i:%8.3i\n", -8473);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("modulo minus 8 point 5 i:%-8.5il\n", 34);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("modulo minus 8 point 5 i:%-8.5il\n", 34);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("mdulo 0 8 point 5:%08.5i\n", 34);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("mdulo 0 8 point 5:%08.5i\n", 34);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("modulo 5 point 0 i:%5.0il\n", 0);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("modulo 5 point 0 i:%5.0il\n", 0);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("modulo 8 point 5 u:%8.5u\n", 34);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("modulo 8 point 5 u:%8.5u\n", 34);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("modulo - 8 point 5u:%-8.5ul\n", 34);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("modulo - 8 point 5u:%-8.5ul\n", 34);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("print x 0 :%x\n", 0);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("print x 0 :%x\n", 0);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("modulo 4 point 8 x:%4.8x\n", 424242424);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("modulo 4 point 8 x:%4.8x\n", 424242424);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("modulo 20 point 5 d:%20.5d\n", -1024);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("modulo 20 point 5 d:%20.5d\n", -1024);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("printf: neg7 %*.*s\n", -1586, 15, "coucou");
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf: neg7 %*.*s\n", -1586, 15, "coucou");
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("braket modulo star d braket:{%*d}\n", -5, 42);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("braket modulo star d braket:{%*d}\n", -5, 42);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("printf: {%.*s}\n", -5, "42");
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf: {%.*s}\n", -5, "42");
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("printf: {%05.*d}\n", -15, 42);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf: {%05.*d}\n", -15, 42);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("modulo p NULLpointer:%p\n", NULL);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("modulo p NULLpointer:%p\n", NULL);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("printf: %.p\n", s);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf: %.p\n", s);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("printf:%20.u\n", 1024u);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf:%20.u\n", 1024u);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("printf: %5.0u\n", 0);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf: %5.0u\n", 0);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    ret = printf("printf: p30 %.0u\n", 100);
    printf("printf ret:%i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf: p30 %.0u\n", 100);
    ft_printf("ft_printf ret:%i\n", ret2);
    
    /*ret = printf("%015p\n", NULL);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("%015p\n", NULL);
     ft_printf("ft_printf ret:%i\n", ret2);*///ERROR
    
    /*ret = printf("modulo point zero p:%.0p\n", 0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo point zero p:%.0p\n", 0);
     ft_printf("ft_printf ret:%i\n", ret2);*///warning
    
    /*ret = printf("%020.5s\n", "Hallo heimur");
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("%020.5s\n", "Hallo heimur");
     ft_printf("ft_printf ret:%i\n", ret2);*///warning
    
    /*ret = printf("%04.3s%-7.4s", "hello", "world");
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("%04.3s%-7.4s", "hello", "world");
     ft_printf("ft_printf ret:%i\n", ret2);*///warning
    
    /*ret = printf("%\n");
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("%\n");
     ft_printf("ft_printf ret:%i\n", ret2);*///warning
    
    /*ret = printf("%-05\n");
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("%-05\n");
     ft_printf("ft_printf ret:%i\n", ret2);*///warning
    
    
    //15 warning tests inide the unit test, do no need to be able to do

  /*
  **BONUS_PART
  */
  /*
  **BONUS_PART SPECIFIERS
  */

  write(1,"\n|%n basic test|\n",17); //n doesn't print anything but takes the value of number of prior written chars

  ret = printf("printf n:%n\n", &n);
  printf("printf n value:%i\n", n);
  printf("printf ret:%i\n", ret);
  write(1, "ft_", 3);
  ret2 = ft_printf("printf n:%n\n", &n);
  ft_printf("ft_printf n value:%i\n", n);
  ft_printf("ft_printf ret:%i\n", ret2);

  write(1,"\n|%f basic test|\n",17); //Used to write integers with decimals after the comma max 6 thus prints doubles

   ret = printf("printf 4 with f:%f\n", 4.);
   printf("printf ret: %i\n", ret);
   write(1, "ft_", 3);
   ret2 = ft_printf("printf 4 with f:%f\n", 4.);
   ft_printf("ft_printf ret:%i\n", ret2);

   ret = printf("printf 4 with f:%f\n", 1000000000000000000.);
   printf("printf ret: %i\n", ret);
   write(1, "ft_", 3);
   ret2 = ft_printf("printf 4 with f:%f\n", 1000000000000000000.);
   ft_printf("ft_printf ret:%i\n", ret2);

   ret = printf("printf 4.1 with f:%f\n", 4.1); //ERROR when casting to int, only with 4.1 for unknown reason
   printf("printf ret: %i\n", ret);
   write(1, "ft_", 3);
   ret2 = ft_printf("printf 4.1 with f:%f\n", 4.1);
   ft_printf("ft_printf ret:%i\n", ret2);

   ret = printf("printf 0.32 with f:%f\n", 0.32);
   printf("printf ret: %i\n", ret);
   write(1, "ft_", 3);
   ret2 = ft_printf("printf 0.32 with f:%f\n", 0.32);
   ft_printf("ft_printf ret:%i\n", ret2);

   ret = printf("printf 4.001 with f:%f\n", 4.001);
   printf("printf ret: %i\n", ret);
   write(1, "ft_", 3);
   ret2 = ft_printf("printf 4.001 with f:%f\n", 4.001);
   ft_printf("ft_printf ret:%i\n", ret2);

   ret = printf("printf 4.5345435; with f:%f\n", 4.5345435);
   printf("printf ret: %i\n", ret);
   write(1, "ft_", 3);
   ret2 = ft_printf("printf 4.5345435; with f:%f\n", 4.5345435);
   ft_printf("ft_printf ret:%i\n", ret2);

   ret = printf("printf 4.5345437; with f:%f\n", 4.5345437);
   printf("printf ret: %i\n", ret);
   write(1, "ft_", 3);
   ret2 = ft_printf("printf 4.5345437; with f:%f\n", 4.5345437);
   ft_printf("ft_printf ret:%i\n", ret2);

   write(1,"\n|%f precision test|\n",21); //Used to write integers with decimals after the comma max 6 thus prints doubles

    ret = printf("printf 4 with f:%.5f\n", 4.);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4 with f:%.5f\n", 4.);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 4 with f:%.5f\n", 1000000000000000000.);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4 with f:%.5f\n", 1000000000000000000.);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 4.1 with f:%.5f\n", 4.1); //ERROR when casting to long long int, only with 4.1 for unknown reason
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4.1 with f:%.5f\n", 4.1);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 0.32 with f:%.5f\n", 0.3298651);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 0.32 with f:%.5f\n", 0.3298651);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 4.001 with f:%.5f\n", 4.001);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4.001 with f:%.5f\n", 4.001);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 4.5345435; with f:%.8f\n", 4.5345435); //ERROR when casting to long long int for unknown reason
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4.5345435; with f:%.8f\n", 4.5345435);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 4.5345437; with f:%.8f\n", -4.5345437);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4.5345437; with f:%.8f\n", -4.5345437);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 4.2345437; with f:%.4f\n", -4.99999);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4.2345437; with f:%.4f\n", -4.99999);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 4.2345437; with f:%.4f\n", -99.99999);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4.2345437; with f:%.4f\n", -99.99999);
    ft_printf("ft_printf ret:%i\n", ret2);

    write(1,"\n|%f min_witdh test|\n",21);

     ret = printf("printf 4 with f:%12f\n", 4.);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4 with f:%12f\n", 4.);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 4 with f:%12f\n", 1000000000000000000.);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4 with f:%12f\n", 1000000000000000000.);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf -4.001 with e:%34f\n", -4.001);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf -4.001 with e:%34f\n", -4.001);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 4 with f:%-12fg\n", 4.);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4 with f:%-12fg\n", 4.);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 4 with f:%-12fg\n", 1000000000000000000.);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4 with f:%-12fg\n", 1000000000000000000.);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 4 with f:%012fg\n", 4.);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4 with f:%012fg\n", 4.);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 4 with f:%012fg\n", 1000000000000000000.);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4 with f:%012fg\n", 1000000000000000000.);
     ft_printf("ft_printf ret:%i\n", ret2);

     write(1,"\n|%e basic test|\n",17);

    //Used to write integers with decimals after the comma max 6 thus prints doubles in scientific notation
    //Only possible if the %f is completely functional
    //Test %e evan more and use the flags on it, min_witdh, 0-, precision

    ret = printf("printf 4 with e:%e\n", 4.);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4 with e:%e\n", 4.);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 4 with e:%e\n", 1000000000000000000.);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4 with e:%e\n", 1000000000000000000.);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 4.1 with e:%e\n", 4.1); //ERROR when casting to long long int, only with 4.1 for unknown reason
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4.1 with e:%e\n", 4.1);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 0.3298651 with e:%e\n", 0.3298651);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 0.3298651 with e:%e\n", 0.3298651);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 4.001 with e:%e\n", 4.001);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4.001 with e:%e\n", 4.001);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 4.5345437 with e:%e\n", 4.5345437);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4.5345437 with e:%e\n", 4.5345437);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 0.0323243 with e:%e\n", 0.0323243);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 0.0323243 with e:%e\n", 0.0323243);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 430.05345437 with e:%e\n", 430.05345437);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 430.05345437 with e:%e\n", 430.05345437);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf -4.001 with e:%e\n", -4.001);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf -4.001 with e:%e\n", -4.001);
    ft_printf("ft_printf ret:%i\n", ret2);

    write(1,"\n|%e min witdh basic test|\n",27);

   //Used to write integers with decimals after the comma max 6 thus prints doubles in scientific notation
   //Only possible if the %f is completely functional
   //Test %e evan more and use the flags on it, min_witdh, 0- and precision

   ret = printf("printf 0.0323243 with e:%4e\n", 0.0323243);
   printf("printf ret: %i\n", ret);
   write(1, "ft_", 3);
   ret2 = ft_printf("printf 0.0323243 with e:%4e\n", 0.0323243);
   ft_printf("ft_printf ret:%i\n", ret2);

   ret = printf("printf 430.05345437 with e:%34e\n", 430.05345437);
   printf("printf ret: %i\n", ret);
   write(1, "ft_", 3);
   ret2 = ft_printf("printf 430.05345437 with e:%34e\n", 430.05345437);
   ft_printf("ft_printf ret:%i\n", ret2);

   ret = printf("printf -4.001 with e:%34e\n", -4.001);
   printf("printf ret: %i\n", ret);
   write(1, "ft_", 3);
   ret2 = ft_printf("printf -4.001 with e:%34e\n", -4.001);
   ft_printf("ft_printf ret:%i\n", ret2);

   ret = printf("printf 4 with e:%-34ee\n", 4.);
   printf("printf ret: %i\n", ret);
   write(1, "ft_", 3);
   ret2 = ft_printf("printf 4 with e:%-34ee\n", 4.);
   ft_printf("ft_printf ret:%i\n", ret2);

   ret = printf("printf 4 with e:%-12ee\n", 1000000000000000000.);
   printf("printf ret: %i\n", ret);
   write(1, "ft_", 3);
   ret2 = ft_printf("printf 4 with e:%-12ee\n", 1000000000000000000.);
   ft_printf("ft_printf ret:%i\n", ret2);

   ret = printf("printf 4 with e:%034eg\n", 4.);
   printf("printf ret: %i\n", ret);
   write(1, "ft_", 3);
   ret2 = ft_printf("printf 4 with e:%034eg\n", 4.);
   ft_printf("ft_printf ret:%i\n", ret2);

   ret = printf("printf 4 with e:%012ee\n", 1000000000000000000.);
   printf("printf ret: %i\n", ret);
   write(1, "ft_", 3);
   ret2 = ft_printf("printf 4 with e:%012ee\n", 1000000000000000000.);
   ft_printf("ft_printf ret:%i\n", ret2);

   write(1,"\n|%e precision test|\n",21); //Used to write integers with decimals after the comma max 6 thus prints doubles

    ret = printf("printf 4 with e:%.2e\n", 4.);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4 with e:%.2e\n", 4.);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 4 with e:%.2e\n", 1000000000000000000.);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4 with e:%.2e\n", 1000000000000000000.);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 4.1 with e:%.2e\n", 4.1); //ERROR when casting to long long int, only with 4.1 for unknown reason
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4.1 with e:%.2e\n", 4.1);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 0.32 with e:%.2e\n", 0.3298651);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 0.32 with e:%.2e\n", 0.3298651);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 4.001 with e:%.2e\n", 4.001);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4.001 with e:%.2e\n", 4.001);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf 4.2345435; with e:%.8e\n", 4.2345435);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf 4.2345435; with e:%.8e\n", 4.2345435);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf -4.99999 with e:%.4e\n", -4.99999);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf -4.99999 with e:%.4e\n", -4.99999);
    ft_printf("ft_printf ret:%i\n", ret2);

    ret = printf("printf -9.99999 with e:%.4e\n", -9.99999);
    printf("printf ret: %i\n", ret);
    write(1, "ft_", 3);
    ret2 = ft_printf("printf -9.99999 with e:%.4e\n", -9.99999);
    ft_printf("ft_printf ret:%i\n", ret2);

    write(1,"\n|%g basic test|\n",17);
  /*
  **Used to write integers with decimals after the comma in scientific or decimal notation whatver is shorter, max 6 numbers, precision is about all significant numbers not only after the comma, eliminates all that is insignificant
  */
     ret = printf("printf 4 with g:%g\n", 4.);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4 with g:%g\n", 4.);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 4 with g:%g\n", 1000000000000000000.);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4 with g:%g\n", 1000000000000000000.);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 4.1 with g:%g\n", 4.1);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4.1 with g:%g\n", 4.1);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 0.3298651 with g:%g\n", 0.3298651);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 0.3298651 with g:%g\n", 0.3298651);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 4.001 with g:%g\n", 4.001);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4.001 with g:%g\n", 4.001);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 4.2345435; with g:%g\n", 4.2345435);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4.2345435; with g:%g\n", 4.2345435);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 34.2345435 with g:%g\n", 34.2345435);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 34.2345435 with g:%g\n", 34.2345435);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf -4.999999 with g:%g\n", -4.999999);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf -4.999999 with g:%g\n", -4.999999);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf -99.99999 with g:%g\n", -99.99999);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf -99.99999 with g:%g\n", -99.99999);
     ft_printf("ft_printf ret:%i\n", ret2);

     write(1,"\n|%g min witdh basic test|\n",27);

     ret = printf("printf 0.0323243 with g:%4g\n", 0.0323243);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 0.0323243 with g:%4g\n", 0.0323243);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 430.05345437 with g:%34g\n", 430.05345437);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 430.05345437 with g:%34g\n", 430.05345437);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf -4.001 with g:%34g\n", -4.001);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf -4.001 with g:%34g\n", -4.001);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 4 with g:%-34ge\n", 4.);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4 with g:%-34ge\n", 4.);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 4 with g:%-12ge\n", 1000000000000000000.);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4 with g:%-12ge\n", 1000000000000000000.);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 4 with e:%034ge\n", 4.);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4 with e:%034ge\n", 4.);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 4 with e:%012gg\n", 1000000000000000000.);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4 with e:%012gg\n", 1000000000000000000.);
     ft_printf("ft_printf ret:%i\n", ret2);

     write(1,"\n|%g precision test|\n",21); //Used to write integers with decimals after the comma max 6 thus prints doubles

     ret = printf("printf 4 with g:%.2g\n", 4.);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4 with g:%.2g\n", 4.);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 4 with g:%.2g\n", 1000000000000000000.);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4 with g:%.2g\n", 1000000000000000000.);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 4.1 with g:%.2g\n", 4.1); //ERROR when casting to long long int, only with 4.1 for unknown reason
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4.1 with g:%.2g\n", 4.1);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 0.32 with g:%.2g\n", 0.3298651);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 0.32 with g:%.2g\n", 0.3298651);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 4.001 with g:%.2g\n", 4.001);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4.001 with g:%.2g\n", 4.001);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf 4.2345435; with g:%.8g\n", 4.2345435);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf 4.2345435; with g:%.8g\n", 4.2345435);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf -4.99999 with g:%.4g\n", -4.99999);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf -4.99999 with g:%.4g\n", -4.99999);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf -9.99999 with g:%.4g\n", -9.99999);
     printf("printf ret: %i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf -9.99999 with g:%.4g\n", -9.99999);
     ft_printf("ft_printf ret:%i\n", ret2);

     /*
     ** BONUS specifiers FLAG combinations
     */

     write(1,"\n|Flag combinations|\n",21);

     write(1,"\n|Flag combinations f|\n",23);

     ret = printf("printf modulo 7 precision 5 f:%7.5f\n", -9.99999);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf modulo 7 precision 5 f:%7.5f\n", -9.99999);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("modulo 8 point 3 f:%16.3f\n", -8473.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo 8 point 3 f:%16.3f\n", -8473.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("modulo minus 8 point 5 f:%-16.5fl\n", 34.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo minus 8 point 5 f:%-16.5fl\n", 34.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("modulo 0 8 point 5 f:%016.5fl\n", -34.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo 0 8 point 5 f:%016.5fl\n", -34.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("modulo 0 8 point 5 f:%016.5fl\n", 34.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo 0 8 point 5 f:%016.5fl\n", 34.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("modulo 5 point 0 f:%5.0fl\n", 0.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo 5 point 0 f:%5.0fl\n", 0.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("print f 0 :%f\n", 0.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("print f 0 :%f\n", 0.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("modulo 4 point 8 f:%4.8f\n", 424242424.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo 4 point 8 f:%4.8f\n", 424242424.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf: p30 %.0f\n", 100.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf: p30 %.0f\n", 100.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     write(1,"\n|Flag combinations e|\n",23);

     ret = printf("printf modulo 7 precision 5 e:%7.5e\n", -9.99999);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf modulo 7 precision 5 e:%7.5e\n", -9.99999);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("modulo 8 point 3 e:%16.3e\n", -8473.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo 8 point 3 e:%16.3e\n", -8473.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("modulo minus 8 point 5 e:%-33.5el\n", 34.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo minus 8 point 5 e:%-33.5el\n", 34.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("modulo 0 8 point 5 e:%016.5el\n", -34.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo 0 8 point 5 e:%016.5el\n", -34.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("modulo 0 8 point 5 e:%016.5el\n", 34.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo 0 8 point 5 e:%016.5el\n", 34.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("print e 0 :%e\n", 0.1);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("print e 0 :%e\n", 0.1);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("print e 0 :%e\n", 0.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("print e 0 :%e\n", 0.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("modulo 5 point 0 e:%5.0el\n", 0.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo 5 point 0 e:%5.0el\n", 0.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("modulo 5 point 0 e:%5.0el\n", 4453434.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo 5 point 0 e:%5.0el\n", 4454343.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("modulo 4 point 8 e:%4.8e\n", 424242424.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo 4 point 8 e:%4.8e\n", 424242424.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf: p30 %.0e\n", 100.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf: p30 %.0e\n", 100.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     write(1,"\n|Flag combinations g|\n",23);

     ret = printf("printf modulo 7 precision 5 g:%7.5g\n", -9.99999);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf modulo 7 precision 5 g:%7.5g\n", -9.99999);
     ft_printf("ft_printf ret:%i\n", ret2);

     /*ret = printf("modulo 8 point 3 g:%16.3g\n", -8473.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo 8 point 3 g:%16.3g\n", -8473.0);
     ft_printf("ft_printf ret:%i\n", ret2);*///Real function ERROR

     ret = printf("modulo minus 8 point 5 g:%-16.5gl\n", 34.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo minus 8 point 5 g:%-16.5gl\n", 34.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("modulo 0 8 point 5 g:%016.5gl\n", -34.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo 0 8 point 5 g:%016.5gl\n", -34.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("modulo 0 8 point 5 g:%016.5gl\n", 34.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo 0 8 point 5 g:%016.5gl\n", 34.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("modulo 5 point 0 g:%5.0gl\n", 0.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo 5 point 0 g:%5.0gl\n", 0.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("print g 0 :%g\n", 0.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("print g 0 :%g\n", 0.0);
     ft_printf("ft_printf ret:%i\n", ret2);

     /*ret = printf("modulo 4 point 8 g:%4.8g\n", 424242424.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("modulo 4 point 8 g:%4.8g\n", 424242424.0);
     ft_printf("ft_printf ret:%i\n", ret2);*///real function ERROR

     /*ret = printf("printf: p30 %.0g\n", 100.0);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf: p30 %.0g\n", 100.0);
     ft_printf("ft_printf ret:%i\n", ret2);*///real function ERROR


     /*
     **BONUS_PART flags
     */

     write(1,"\n|l flag tests|\n",16);

     ret = printf("printf i:%li\n", 2147483649);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf i:%li\n", 2147483649);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf u:%lu\n", 2147483649 * 3);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf u:%lu\n", 2147483649 * 3);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf X:%lX\n", 2147483649 * 3);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf X:%lX\n", 2147483649 * 3);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf x:%lx\n", 2147483649 * 3);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf x:%lx\n",2147483649 * 3);
     ft_printf("ft_printf ret:%i\n", ret2);

     write(1,"\n|ll flag tests|\n",17);

     ret = printf("printf i:%lli\n", -9223372036854775807);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf i:%lli\n", -9222372036854775807);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf u:%llu\n", 18446744073709551615);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf u:%llu\n", 18446744073709551615);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf X:%llX\n", 18446744073709551615);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf X:%llX\n", 18446744073709551615);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf x:%llx\n", 18446744073709551615);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf x:%llx\n", 18446744073709551615);
     ft_printf("ft_printf ret:%i\n", ret2);

     write(1,"\n|h flag tests|\n",17);

     ret = printf("printf i:%hi\n", -32768);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf i:%hi\n", -32768);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf u:%hu\n", 65535);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf u:%hu\n", 65535);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf X:%hX\n", 65535);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf X:%hX\n", 65535);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf x:%hx\n", 65535);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf x:%hx\n", 65535);
     ft_printf("ft_printf ret:%i\n", ret2);

     write(1,"\n|hh flag tests|\n",17);

     ret = printf("printf i:%hhi\n", -122);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf i:%hhi\n", -122);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf u:%hhu\n", 200);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf u:%hhu\n", 200);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf X:%hhX\n", 200);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf X:%hhX\n", 200);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf x:%hhx\n", 200);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf x:%hhx\n", 200);
     ft_printf("ft_printf ret:%i\n", ret2);

     /*
     **Last bonus flags, don't work in combination with other flags
     */

     write(1,"\n|%# basic test|\n",17);

     ret = printf("printf x with flag #:%#x\n", x);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf x with flag #:%#x\n", x);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf X with flag #:%#X\n", x);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf X with flag #:%#X\n", x);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf x with flag # and value 0:%#x\n", x2);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf x with flag # and value 0:%#x\n", x2);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf X with flag # and value 0:%#X\n", x2);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf X with flag # and value 0:%#X\n", x2);
     ft_printf("ft_printf ret:%i\n", ret2);

     write(1,"\n|%+ basic test|\n",17); //Forces a plus sign in front of positive numbers works with d and i specifiers but not u.

     ret = printf("printf i with flag + on pos numbers:%+i\n", x);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf i with flag + on pos numbers:%+i\n", x);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf i with flag + on neg numbers:%+i\n", i);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf i with flag + on neg numbers:%+i\n", i);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf d with flag + on pos numbers:%+d\n", x);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf d with flag + on pos numbers:%+d\n", x);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf d with flag + on neg numbers:%+d\n", i);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf d with flag + on neg numbers:%+d\n", i);
     ft_printf("ft_printf ret:%i\n", ret2);

     ret = printf("printf i with flag + on zero:%+i\n", x2);
     printf("printf ret:%i\n", ret);
     write(1, "ft_", 3);
     ret2 = ft_printf("printf i with flag + on zero:%+i\n", x2);
     ft_printf("ft_printf ret:%i\n", ret2);


  return(0);
}

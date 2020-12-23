/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:46:22 by sylvain           #+#    #+#             */
/*   Updated: 2020/12/18 03:26:19 by sgeymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	number_lenght(long int nb)
{
	int j;

	j = 1;
	if (nb == INT_MIN)
		return(10);
	if (nb < 0)
	{
		nb = nb * -1;
		j++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		j++;
	}
//	printf("longueur du nombre = %d\n", j);
	return (j);
}

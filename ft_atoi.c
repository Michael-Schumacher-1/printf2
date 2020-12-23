/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:45:08 by sylvain           #+#    #+#             */
/*   Updated: 2020/12/12 23:54:34 by sgeymond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	check_resultat(unsigned long long resultat, int j)
{
	if (resultat > 9223372036854775807 && j == 1)
		return (-1);
	else if (resultat > 9223372036854775807 && j == -1)
		return (0);
	else
		return (resultat * j);
}

int	determinate_sign(char c)
{
	if (c == '+')
		return (1);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int						i;
	int						j;
	unsigned long long		resultat;

	if (!str)
		return (0);
	i = 0;
	resultat = 0;
	j = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		j = determinate_sign(str[i++]);
	while (str[i] > 47 && str[i] < 58)
	{
		resultat = resultat * 10 + (str[i] - 48);
		i++;
		if (resultat > 9223372036854775807 && j == 1)
			return (-1);
		else if (resultat > 9223372036854775807 && j == -1)
			return (0);
	}
	return (check_resultat(resultat, j));
}

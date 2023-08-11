/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:56:18 by nakagawashi       #+#    #+#             */
/*   Updated: 2023/08/07 04:34:50 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <stdlib.h>

int	count_str(int n)
{
	unsigned int	nb;
	int				i;

	nb = n;
	i = 0;
	if (n < 0)
	{
		nb = -n;
		i++;
	}
	if (n == 0)
		i = 1;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char				*str;
	int					i;
	unsigned int		nb2;

	i = count_str (n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i--] = '\0';
	if (n < 0)
	{
		nb2 = -n;
		str[0] = '-';
	}
	else
		nb2 = n;
	if (n == 0)
		str[i] = '0';
	while (nb2 > 0)
	{
		str[i] = nb2 % 10 + 48;
		i--;
		nb2 /= 10;
	}
	return (str);
}

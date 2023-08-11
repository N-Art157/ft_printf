/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 01:32:10 by nakagawashi       #+#    #+#             */
/*   Updated: 2023/08/07 04:08:10 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "ft_printf.h"

int	basecheck(char *base, int len)
{
	int	j;

	j = ft_strlen(base);
	if (j < 2)
		return (1);
	j = 0;
	while (base[j + 1] != '\0')
	{
		if (base[j] != base[j + 1] && base[j] != '+' && base[j] != '-')
			j++;
		else
			return (1);
	}	
	if (base[0] == base[len - 1])
		return (1);
	return (0);
}

void	ft_putnbr_base_fd(int nbr, char *base, int fd, int *i)
{
	size_t				len;
	char			c;
	unsigned int	nb;

	nb = nbr;
	len = ft_strlen(base);
	if (basecheck(base, len) == 1)
		return ;
	if (nbr < 0)
	{
		nb = (unsigned int)nbr;
	}
	if (0 <= nb && nb < len)
	{
		*i += 1;
		c = base[nb];
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr_base_fd(nb / len, base, fd, i);
		ft_putnbr_base_fd(nb % len, base, fd, i);
	}
}

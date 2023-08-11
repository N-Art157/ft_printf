/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 02:48:07 by nakagawashi       #+#    #+#             */
/*   Updated: 2023/08/07 04:07:18 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base_p(unsigned long nbr, char *base, int fd, int *i)
{
	size_t				len;
	char			c;
	unsigned long	nb;

	nb = nbr;
	len = ft_strlen(base);
	if (0 <= nb && nb < len)
	{
		*i += 1;
		c = base[nb];
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr_base_p(nb / len, base, fd, i);
		ft_putnbr_base_p(nb % len, base, fd, i);
	}
}
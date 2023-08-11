/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:52:49 by anakagaw          #+#    #+#             */
/*   Updated: 2023/08/07 04:35:08 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	writer(int nb, int fd, int *i)
{
	char	*str;
	
	str = ft_itoa(nb);
	*i += ft_strlen(str);
	write(fd, str, ft_strlen(str));
	free(str);
}

void	ft_putnbr_fd(int nb, int fd, int *i)
{
	if (nb == -2147483648)
	{
		*i += 11;
		write(fd, "-2147483648", 11);
	}
	else if (nb == 0)
	{
		*i += 1;
		write(fd, "0", 1);
	}
	else
	{
		writer(nb, fd, i);
	}
}


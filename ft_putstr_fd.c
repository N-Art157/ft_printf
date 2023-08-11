/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:59:05 by anakagaw          #+#    #+#             */
/*   Updated: 2023/08/07 03:56:29 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

void	ft_putstr_fd(char	*s, int fd, int *i)
{
	if (s && fd)
	{
		*i += ft_strlen(s);
		write(fd, s, ft_strlen (s));
	}
	if (!s)
	{
		*i += 6;
		write(fd, "(null)", 6);
	}
}

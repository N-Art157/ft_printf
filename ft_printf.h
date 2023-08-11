/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 22:10:37 by anakagaw          #+#    #+#             */
/*   Updated: 2023/08/07 04:21:04 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef FT_PRINTF_H
 #define FT_PRINTF_H

#include <stdlib.h>
#include <unistd.h>

void	ft_putstr_fd(char	*s, int fd, int *i);
void	ft_putchar_fd(char c, int fd, int *i);
void	ft_putnbr_fd(int nb, int fd, int *i);
void	ft_putnbr_base_fd(int nbr, char *base,int fd, int *i);
size_t	ft_strlen(const char *s);
void	ft_putnbr_base_p(unsigned long nbr, char *base, int fd, int *i);
int		ft_printf(const char	*arg_1, ...);
char	*ft_itoa(int n);
#endif
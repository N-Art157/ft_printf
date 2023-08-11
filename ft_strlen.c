/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakagawashinta <nakagawashinta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 15:32:13 by nakagawashi       #+#    #+#             */
/*   Updated: 2023/08/07 03:46:46 by nakagawashi      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (s[n])
	{
		n++;
	}
	return (n);
}

// #include<stdio.h>
// #include<string.h>
// int main(void)
// {
// 	char a[18] = "abcdef";
// 	printf("%d\n",ft_strlen(" "));
// 	printf("%lu",strlen(" "));
// }
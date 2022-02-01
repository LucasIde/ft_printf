/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 02:23:57 by lide              #+#    #+#             */
/*   Updated: 2022/02/01 17:52:24 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int i;

#include "libftprintf.h"

int ft_printf(const char *attr, ...)
{
	va_list	arg_ptr;
	int		i;
	int		printed;

	i = 0;
	va_start(arg_ptr, attr);
	while (attr[i])
	{
		if (attr[i] == '%')
		{
			++i;
			printf("hey");
			if (attr[i] == 'd' || attr[i] == 'i')
				printed = ft_putnbr_i_fd(va_arg(arg_ptr, int), 1);
			if (attr[i] == 'u')
				printed = ft_putnbr_u_fd(va_arg(arg_ptr, unsigned int), 1);/*
			if (attr[++i] == 's')
				printed = ft_putstr_fd(va_arg(arg_ptr, char *), 1);
			if (attr[++i] == 'c' || attr[i] == '%')
				printed = ft_putchar_fd(va_arg(arg_ptr, char), 1, attr[i]);
			if (attr[++i] == 'x' || attr[i] == 'X' || attr[i] == 'p')
				printed = ft_puthex_fd(va_arg(arg_ptr, size_t), 1, attr[i]);*/
		}
		i++;
	}
	va_end(arg_ptr);
	return (printed);
}
		//va_arg(arg_ptr, attr);
		//recuperer % cspdixX% et y placer va arg dans le type correspondant.

int main(void)
{
	int fp;
	//int p;

	fp = ft_printf("%d", 1512);
	//p = printf("\n%d", 1512);
	printf("\n%d\n", fp);
	//printf("%d", p - 1);

	return (0);
}

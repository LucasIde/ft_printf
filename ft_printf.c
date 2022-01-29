/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 02:23:57 by lide              #+#    #+#             */
/*   Updated: 2022/01/29 08:05:39 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n2;
	char	n3;

	n2 = n;
	if (n2 < 0)
	{
		n2 *= -1;
		write(fd, "-", 1);
	}
	if (n2 > 9)
	{
		ft_putnbr_fd((n2 / 10), fd);
		n3 = (n2 % 10) + '0';
		write(fd, &n3, 1);
	}
	else
	{
		n3 = (n2 % 10) + '0';
		write(fd, &n3, 1);
	}
}


int ft_printf(const char *attributes, ...)
{
	va_list	arg_ptr;
	int		i;

	i = 0;
	va_start(arg_ptr, attributes);
	while (attributes[i])
	{
		if (attributes[i] == '%')
		{
			i++;
			if (attributes[i] == 'd' || attributes[i] == 'i')
				ft_putnbr_fd(va_arg(arg_ptr, int), 1);
			//if (attributes[i] == 'c')
		}
		i++;
	}
	va_end(arg_ptr);
	return (0);
		//va_arg(arg_ptr, attributes);
		//recuperer % cspdixX% et y placer va arg dans le type correspondant.
}

int main(void)
{
	ft_printf("%d", 150);
	return (0);
}

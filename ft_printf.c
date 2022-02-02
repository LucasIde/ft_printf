/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 02:23:57 by lide              #+#    #+#             */
/*   Updated: 2022/02/02 20:04:38 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sorting(const char *attr, va_list arg_ptr, int i)
{
	int	printed;

	printed = 0;
	if (attr[i] == 'd' || attr[i] == 'i')
		printed = ft_printnbr_i(va_arg(arg_ptr, int));
	else if (attr[i] == 'u')
		printed = ft_printnbr_u(va_arg(arg_ptr, unsigned int));
	else if (attr[i] == 's')
		printed = ft_printstr(va_arg(arg_ptr, char *));
	else if (attr[i] == 'c')
		printed = ft_printchar(va_arg(arg_ptr, int));
	else if (attr[i] == '%')
		printed = ft_printchar('%');
	else if (attr[i] == 'p')
		printed = ft_printhex_p(va_arg(arg_ptr, unsigned long));
	else if (attr[i] == 'x' || attr[i] == 'X')
		printed = ft_printhex_x(va_arg(arg_ptr, unsigned int), attr[i]);
	return (printed);
}

int	ft_printf(const char *attr, ...)
{
	va_list	arg_ptr;
	int		i;
	int		printed;
	int		tmp;

	i = 0;
	printed = 0;
	va_start(arg_ptr, attr);
	while (attr[i])
	{
		tmp = printed;
		if (attr[i] == '%')
		{
			i++;
			printed += ft_sorting(attr, arg_ptr, i);
			if (tmp > printed)
			{
				va_end(arg_ptr);
				return (printed + 1);
			}
		}
		else
			printed += ft_printchar(attr[i]);
		i++;
	}
	va_end(arg_ptr);
	return (printed);
}

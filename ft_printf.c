/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 02:23:57 by lide              #+#    #+#             */
/*   Updated: 2022/01/29 06:09:55 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *attributes, ...)
{
	va_list	arg_ptr;
	int		i;

	i = 0;
		va_start(arg_ptr, attributes);
	while (attributes[i])
	{
		//recuperer % cspdixX% et y placer va arg dans le type correspondant.
		va_arg(arg_ptr, attributes);
	}
}

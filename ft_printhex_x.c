/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:33:17 by lide              #+#    #+#             */
/*   Updated: 2022/02/02 19:59:54 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	counter(unsigned int i)
{
	int	ct;

	ct = 0;
	if (i == 0)
		ct = 1;
	while (i > 0)
	{
		i /= 16;
		ct++;
	}
	return (ct);
}

static int	d_to_hd(unsigned int i, char maj)
{
	int		modulo;
	char	*hexa;
	int		ct;
	int		printed;

	ct = counter(i);
	hexa = (char *)malloc(sizeof(char) * (ct + 1));
	if (!hexa)
		return (-1);
	hexa[ct] = 0;
	ct--;
	while (ct >= 0)
	{
		modulo = i % 16;
		if (modulo < 10)
			modulo += '0';
		else
			modulo = (modulo % 10) + maj;
		hexa[ct] = modulo;
		ct--;
		i /= 16;
	}
	printed = ft_printstr(hexa);
	free (hexa);
	return (printed);
}

int	ft_printhex_x(unsigned int nb, char attr)
{
	if (attr == 'x')
		return (d_to_hd(nb, 'a'));
	else
		return (d_to_hd(nb, 'A'));
}

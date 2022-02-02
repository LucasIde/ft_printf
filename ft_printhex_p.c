/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_p.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 19:33:02 by lide              #+#    #+#             */
/*   Updated: 2022/02/02 19:55:58 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	counter(unsigned long i)
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

static int	d_to_hd(unsigned long i, int printed, char maj)
{
	int		modulo;
	char	*hexa;
	int		ct;

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
		printed = ft_printstr(hexa);
		free (hexa);
	}
	return (printed);
}

int	ft_printhex_p(unsigned long nb)
{
	int	printed;

	printed = 2;
	write(1, "0x", 2);
	return (d_to_hd(nb, printed, 'a'));
}

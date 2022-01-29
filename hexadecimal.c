/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 02:27:04 by lide              #+#    #+#             */
/*   Updated: 2022/01/29 05:15:51 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	counter(size_t i)
{
	int	ct;

	ct = 0;
	while (i > 0)
	{
		i /= 16;
		ct++;
	}
	return (ct);
}

char	*d_to_hd(size_t i)
{
	int		modulo;
	char	*hexa;
	int		ct;

	ct = counter(i);
	hexa = (char *)malloc(sizeof(char) * (ct + 1));
	if (!hexa)
		return (NULL);
	hexa[ct] = 0;
	ct--;
	while (ct >= 0)
	{
		modulo = i % 16;
		if (modulo < 10)
			modulo += '0';
		else
			modulo = (modulo % 10) + 'A';
		hexa[ct] = modulo;
		ct--;
		i /= 16;
	}
	return (hexa);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:20:25 by lide              #+#    #+#             */
/*   Updated: 2022/02/07 13:19:52 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr_u(unsigned int n)
{
	char	*nb;
	int		ct;

	nb = ft_itoa(n);
	if (!nb)
		return (-1);
	ct = ft_printstr(nb);
	free(nb);
	return (ct);
}

int	ft_printnbr_i(int n)
{
	long	tmp;
	int		ct;
	int		ct_r;

	ct = 0;
	tmp = (long)n;
	if (tmp < 0)
	{
		write(1, "-", 1);
		tmp *= -1;
		ct++;
	}
	ct_r = ft_printnbr_u((unsigned int)tmp);
	if (ct_r == -1)
		return (-1);
	return (ct_r + ct);
}

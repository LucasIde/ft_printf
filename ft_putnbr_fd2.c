/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:53:00 by lide              #+#    #+#             */
/*   Updated: 2022/02/01 16:13:17 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
int	ft_putnbr_fd(int n, int fd)
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
	char	*word;
	size_t		len;

	word = ft_itoa(n);
	len = ft_strlen(word);
	write(fd, word, len);
	free(word);
	return (len);
	///////
	nb = (char *)malloc(sizeof(char) * (ct + 1));
	if (!nb )
		return (0);
	if (n > 9)
	{
		ft_putnbr_u_fd(n / 10);
		nb = n % 10 + '0';
		write(fd, &nb, 1);
	}
	else
	{
		nb = n % 10 + '0';
		write(fd, &nb, 1);
	}
*/

int	ft_count(unsigned int n)
{
	int ct;

	ct = 0;
	while (n > 0)
	{
		n /= 10;
		ct++;
	}
	return (ct);
}

int ft_putnbr_u_fd(unsigned int n, int fd)
{
	char	*nb;
	int		ct;

	//printf("\ncoucou %u\n", n);
	ct = ft_count(n);
	nb = ft_itoa(n);
	write(fd, nb, ft_strlen(nb));
	free(nb);
	return (ct);
}

int	ft_putnbr_i_fd(int n, int fd)
{
	long tmp;
	int ct;

	//printf("\nsalut %d\n", n);
	ct = 0;
	tmp = (long)n;
	if (tmp < 0)
	{
		write(fd, "-", 1);
		tmp *= -1;
		ct++;
	}
	return (ft_putnbr_u_fd((unsigned int)tmp, fd) + ct);
}

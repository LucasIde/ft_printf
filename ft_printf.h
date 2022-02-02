/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 18:33:26 by lide              #+#    #+#             */
/*   Updated: 2022/02/02 19:33:43 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"
/// a suprimer !!!
# include <stdio.h>
///

int	ft_printf(const char *attr, ...);
int	ft_printnbr_u(unsigned int n);
int	ft_printnbr_i(int n);
int	ft_printstr(char *s);
int	ft_printchar(char c);
int	ft_printhex_p(unsigned long nb);
int	ft_printhex_x(unsigned int nb, char attr);

#endif

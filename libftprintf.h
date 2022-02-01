#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "libft/libft.h"
/// a suprimer !!!
# include <stdio.h>
///

int	ft_printf(const char *, ...);
int ft_putnbr_u_fd(unsigned int n, int fd);
int	ft_putnbr_i_fd(int n, int fd);

#endif

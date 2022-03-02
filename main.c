#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int i;
	int ct;
	int ct2;

	i = 127864;
	ct = ft_printf("%d\n", i);
	ct2 = printf("%d\n", i);
	printf("%d\n", ct);
	printf("%d\n", ct2);
	return (0);
}

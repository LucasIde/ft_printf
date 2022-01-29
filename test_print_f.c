
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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
/*
long	ft_unsigned(unsigned int i)
{
	long	j;

	if (i >= 0)
		return ((long)i);
	else
	{
		j = 4294967296 + i;
		return (j);
	}
} vraiment utile ?
*/
int main(void)
{
	char *c;
	int ct;
	char ch[] = "a";
	unsigned int i = -1;
	size_t j;
	void *v;

	v = (void *)ch;
	j = (size_t)v;
	ct = 0;
	printf("\n%u\n", i);
	//c = d_to_hd(j);
	while (c[ct])
	{
		write(1, &c[ct], 1);
		ct++;
	}
	return (0);
}

//doit gerer le cas négatif passage unsigned
//dois rajouter 0x devant adresse passage de void * dans size_t

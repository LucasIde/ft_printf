
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int counter(int i)
{
	int ct;

	ct = 0;
	while (i > 0)
	{
		i /= 16;
		ct++;
	}
	return (ct);
}

char *d_to_hd(int i)
{
	int modulo;
	char *hexa;
	int ct;

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

int main(void)
{
	char *c;
	int ct;
	char c2 = 'a';
	int i = -1;
	void *v;

	ct = 0;
	printf("%u\n", i);
	c = d_to_hd(i);//doit gerer le cas négatif passage unsigned
	while (c[ct])
	{
		write(1, &c[ct], 1);
		ct++;
	}
	return (0);
}
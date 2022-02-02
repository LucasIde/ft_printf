#include "ft_printf.h"

int main(void)
{
	int fp;
	int p;
	int a = 1;
	void *v2;
	unsigned int i = 4294967296;

	v2 = &a;
	fp = ft_printf("|%X|\n", i);
	p = printf("|%X|\n", i);
	printf("fake %d\n", fp);
	printf("true %d\n", p);

	return (0);
}

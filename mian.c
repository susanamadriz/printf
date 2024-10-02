#include "ft_printf.h"
int	ft_printf(char const *str, ...);


int main()
{
	char *c;

	c = "c";
	printf("PRINTF: %p\n", c);
	ft_printf("MI MIERDA DE FUNCIÓN: %p", c);
	
	return (0);
}
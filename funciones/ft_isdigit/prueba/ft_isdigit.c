#include <ctype.h>
#include <stdio.h>

int ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return(1);
	return(0);
}

int main(void)
{
	int	i;

	i = 0;
	while (i <= 127)
	{
		printf("mio %d, original %d, caracter %c\n", ft_isdigit(i), isdigit(i), i);

/*		if (ft_isdigit(i) == 0 && isdigit(i) == 0)
			printf("OK ");
		else if (ft_isdigit(i) > 0 && isdigit(i) > 0)
			printf("OK\n");
		else*/
		i++;
	}
	return (0);
}

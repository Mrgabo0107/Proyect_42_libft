#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return(1);
	return(0);
}

int main(void)
{
	int	i;

	i = 0;
	while (i <= 127)
	{
		printf("%d (%c) -> ", i, i);

		if (ft_isalpha(i) == 0 && isalpha(i) == 0)
			printf("OK ");
		else if (ft_isalpha(i) > 0 && isalpha(i) > 0)
			printf("OK\n");
		else
			printf("Error\n");
		i++;
	}
	return (0);
}

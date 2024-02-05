#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int xy;

	xy = *a;
	*a = *b;
	*b = xy;
}

int	main()
{
	int	a = 23;
	int	b = 44;
	ft_swap(&a, &b);
	printf("%d %d", a, b);
	return (0);
}

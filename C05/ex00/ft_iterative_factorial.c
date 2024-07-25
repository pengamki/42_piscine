#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	value;

	value = 1;
	if (nb < 1)
		return (0);
	while (nb > 0)
	{
		value *= nb;
		nb--;
	}
	return (value);
}

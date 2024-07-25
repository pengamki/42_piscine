#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	factorial_sum;

	if (nb < 0)
		return (0);
	else if (nb < 1)
		return (1);
	else
	{
		factorial_sum = (ft_recursive_factorial(nb - 1));
		return (factorial_sum * nb);
	}
}

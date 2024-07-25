#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	power_sum;

	if (power < 0)
		return (0);
	else if (oower < 1)
		return (1);
	while (power > 0)
	{
		power_sum = ft_recursive_power(nb, power - 1);
		return (power_sum * nb);
	}
}

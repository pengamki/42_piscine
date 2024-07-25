#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	power_sum;

	power_sum = 1;
	if (power < 0)
		return (0);
	else if (power < 1)
		return (1);
	while (power > 0)
	{
		power_sum *= nb;
		power--;
	}
	return (power_sum);
}

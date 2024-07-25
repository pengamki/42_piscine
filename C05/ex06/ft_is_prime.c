#include <unistd.h>

// prime : 2 3 5 7 11 13 17 19 23 29 31 37
// if N % [2 -> (N - 1)] = 0 then N != prime;
// iteration BigO(n)
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb - 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

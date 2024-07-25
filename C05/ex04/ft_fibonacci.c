#include <unistd.h>

// 0 1 1 2 3 5 8 13 21
// *n = (*n - 2) + (*n - 1)

int	ft_fibonacci(int index);
{
	int	fibo_value;

	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	else
		fibo_value = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (fibo_value);
}

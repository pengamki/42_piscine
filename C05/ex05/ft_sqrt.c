#include <unistd.h>

// 2 * 2 = 4
// 3 * 3 = 9
// i * i <= prod
// iteration >> BigO(n)
int	ft_sqrt(int nb)
{
	int	i;
	
	i = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if(i * i == nb)
			return (1);
		i++;
	}
	return (0);
}

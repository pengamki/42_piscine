#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	rush(int a, int b);

void	ft_printrow_bet(int a);

int	main(void)
{
	rush(5, 1);
	return (0);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	rush(int a, int b)
{
	int	row;

	row = 0;
	while (row < b)
	{
		if (row == 0)
		{
			col = 0;
			while (col < a)
			{
				if (col == 0)
					ft_putchar('/');
				else if (col == a - 1)
					ft_putchar('\\');
				else
					ft_putchar('*');
				col++;
			}
			ft_putchar('\n');
		}
		else if (row == b - 1)
		{
			col = 0;
			while (col < a)
			{
				if (col == 0)
					ft_putchar('\\');
				else if (col == a - 1)
					ft_putchar('/');
				else
					ft_putchar('*');
				col++;
			}
			ft_putchar('\n');
		}
		else
		{
			col = 0;
			while (col < a)
			{
				if (col == 0)
					ft_putchar('*');
				else if (col == a - 1)
					ft_putchar('*');
				else
					ft_putchar(' ');
				col++;
			}
			ft_putchar('\n');
		}
		row++;
	}
}
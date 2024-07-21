/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:38:41 by pengamki          #+#    #+#             */
/*   Updated: 2024/07/13 15:39:12 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_printrow(int col, char a, char b, char c);

void	rush(int a, int b)
{
	int	row;
	int	q;
	int	w;
	int	e;

	q = 'o';
	w = '-';
	e = '|';
	row = 0;
	while (row < b)
	{
		if (row == 0)
			ft_printrow(a, q, w, q);
		else if (row == b - 1)
			ft_printrow(a, q, w, q);
		else
			ft_printrow(a, e, ' ', e);
		row++;
	}
}

void	ft_printrow(int col, char a, char b, char c)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (i == 0)
			ft_putchar(a);
		else if (i == col - 1)
			ft_putchar(c);
		else
			ft_putchar(b);
		i++;
	}
	if (col != 0)
		ft_putchar('\n');
}

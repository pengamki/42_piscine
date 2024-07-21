/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:03:12 by pengamki          #+#    #+#             */
/*   Updated: 2024/07/10 14:07:12 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comma(int a)
{
	if (a != '7')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	hun;
	int	doz;
	int	uni;

	hun = '0';
	while (hun <= '7')
	{
		doz = hun + 1;
		while (doz <= '8')
		{
			uni = doz + 1;
			while (uni <= '9')
			{
				write (1, &hun, 1);
				write (1, &doz, 1);
				write (1, &uni, 1);
				print_comma(hun);
				uni++;
			}
			doz++;
		}
		hun++;
	}
}

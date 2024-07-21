/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_j.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:01:30 by pengamki          #+#    #+#             */
/*   Updated: 2024/07/14 15:50:32 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int 	a1;
	int	a2;
	int	b1;
	int	b2;

	//Front 1st Digit  0-9
	a1 = '0';
	while (a1 <= '9')
	{
		//Front 2nd Digit condition 0-9 or 0-8 if Front 1st Digit equal 9
		a2 = '0';
		if (a1 != '9')
		{
			//write Front 1st case
			while (a2 <= '9')
			{
				write (1, &a1, 1);
				write (1, &a2, 1);
				write (1, " ", 1);
				a2++;
			}
			a1++;
		}
		else
		{
			//write Front 2nd case
			while (a2 <= '8')
			{
				write (1, &a1, 1);
				write (1, &a2, 1);
				write (1, " ", 1);
				a2++;
			}
			a1++;
		}

	}
}

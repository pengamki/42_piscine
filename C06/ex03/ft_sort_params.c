/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:53:21 by pengamki          #+#    #+#             */
/*   Updated: 2024/07/26 16:12:43 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *c)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
// ./a.out[0] param[1] param[2] param[3]

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < argc)
	{
		j = 1;
		while (j < argc)
		{
			while (*argv[j])
			{
				argv[j]++;
			}
			j++;
		}
		i++; 
	}
}

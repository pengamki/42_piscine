/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 21:47:31 by pengamki          #+#    #+#             */
/*   Updated: 2024/07/25 21:54:02 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int argc, char *argv[])
{
	int	index;

	index = 1;
	if (argc == 0)
		return (argc);
	while (index <= argc - 1)
	{
		write (1, argv[index], ft_strlen(argv[index]));
		write (1, "\n", 1);
		index++;
	}
	return (argc);
}

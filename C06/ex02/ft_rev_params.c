/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:48:05 by pengamki          #+#    #+#             */
/*   Updated: 2024/07/26 15:52:28 by pengamki         ###   ########.fr       */
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
	if (argc < 2)
		return (argc);
	argc--;
	while (argc > 0)
	{
		write (1, argv[argc], ft_strlen(argv[argc]));
		argc--;
		write (1, "\n", 1);
	}
	return (argc);
}

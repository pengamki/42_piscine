/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:33:26 by pengamki          #+#    #+#             */
/*   Updated: 2024/07/21 15:51:07 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_check_non_printable(char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_check_non_printable(str[i]);
		i++;
	}
}

void	ft_check_non_printable(char c)
{
	char	*hex_sheet;

	hex_sheet = "0123456789abcdef";
	if (c < 32 || c == 127)
	{
		write(1, "\\", 1);
		write(1, &hex_sheet[c / 16], 1);
		write(1, &hex_sheet[c % 16], 1);
	}
	else
		write(1, &c, 1);
}

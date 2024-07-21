/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:41:59 by pengamki          #+#    #+#             */
/*   Updated: 2024/07/21 14:32:10 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	cap_offset(char *str, int i);

void	decap_offset(char *str, int i);

int	g_is_offset;

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	g_is_offset = 1;
	while (str[i] != '\0')
	{
		if (g_is_offset == 1)
			cap_offset(str, i);
		else
			decap_offset(str, i);
		i++;
	}
	return (str);
}

void	cap_offset(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
		g_is_offset = 0;
	}
	else if (str[i] >= 'A' && str[i] <= 'Z')
		g_is_offset = 0;
	else if (str[i] >= '0' && str[i] <= '9')
		g_is_offset = 0;
	else
		g_is_offset = 1;
}

void	decap_offset(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] += 32;
		g_is_offset = 0;
	}
	else if (str[i] >= '0' && str[i] <= '9')
		g_is_offset = 0;
	else if (str[i] < 'a' || str[i] > 'z')
		g_is_offset = 1;
}

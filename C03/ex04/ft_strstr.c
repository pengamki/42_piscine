/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 20:08:39 by pengamki          #+#    #+#             */
/*   Updated: 2024/07/21 21:23:11 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_rest(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find && check_rest(str, to_find))
			return (str);
		str++;
	}
	return (0);
}

int	check_rest(char *str, char *to_find)
{
	while (*str && *to_find)
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (*to_find == '\0');
}

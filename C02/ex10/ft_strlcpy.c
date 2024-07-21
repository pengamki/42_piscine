/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 22:39:57 by pengamki          #+#    #+#             */
/*   Updated: 2024/07/21 16:09:49 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_srcsize(char *src);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
	{
		count++;
		if (size == 0)
			continue ;
		if (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (size)
		dest[i] = '\0';
	return (count);
}

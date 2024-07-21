/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:24:19 by pengamki          #+#    #+#             */
/*   Updated: 2024/07/21 19:04:13 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	append;

	i = 0;
	while (dest[i] != 0)
		i++;
	append = 0;
	while (src[append] != 0)
	{
		dest[i] = src[append];
		i++;
		append++;
	}
	dest[i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pengamki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 19:05:41 by pengamki          #+#    #+#             */
/*   Updated: 2024/07/21 21:26:25 by pengamki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	append;

	i = 0;
	append = 0;
	while (dest[i] != '\0')
		i++;
	while (append < nb && src[append] != '\0')
	{
		dest[i] = src[append];
		i++;
		append++;
	}
	dest[i] = '\0';
	return (dest);
}

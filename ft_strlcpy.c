/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:51:44 by marvin            #+#    #+#             */
/*   Updated: 2024/10/23 20:59:00 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (size > 0)
	{
		i = 0;
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}
/*copia un strean a un memoria de tamaño determinado
incluido el nulo
#include <stddef.h>

int	main(void)
{
	char dst[10];
	char *src = "Hello";
	size_t len = ft_strlcpy(dst, src, 10);
	printf("Resultado: %s, Longitud: %zu\n", dst, len);
	return (0);
}*/
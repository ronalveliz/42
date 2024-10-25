/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:15:22 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/10/25 19:53:38 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

/* Ejemplo main Busca la primera aparición de un byte específico
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello World";
	char *result = ft_memchr(str, 'o', 8);
	if (result)
		printf("ft_memchr: %s\n", result);  // Output: o World
	return (0);
}*/
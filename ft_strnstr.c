/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:47:35 by kitsune           #+#    #+#             */
/*   Updated: 2024/10/23 20:57:43 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *cadbig, const char *sub_cad, size_t len)
{
	size_t	i;
	size_t	cadlen;

	if (!*sub_cad)
		return ((char *)cadbig);
	cadlen = ft_strlen(sub_cad);
	if (cadlen > len)
		return (NULL);
	i = 0;
	while (cadbig[i] && i + cadlen <= len)
	{
		if (ft_strncmp(&cadbig[i], sub_cad, cadlen) == 0)
			return ((char *)(cadbig + i));
		i++;
	}
	return (NULL);
}
/*// Ejemplo main busca la primera coincidencia del caracter enviado
#include <stddef.h>
#include <stdio.h>

int	main(void)
{
	char cadbig[] = "Hello World";
	char sub_cad[] = "World";
	char *result = ft_strnstr(cadbig, sub_cad, 11);
	if (result)
		printf("ft_strnstr: %s\n", result);  // Output: World
	return (0);
}*/
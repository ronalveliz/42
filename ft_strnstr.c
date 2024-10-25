/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:47:35 by kitsune           #+#    #+#             */
/*   Updated: 2024/10/25 21:45:54 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *cadbig, const char *sub_cad, size_t len)
{
	size_t	i;
	size_t	cadlen;

	if (*sub_cad == '\0' || cadbig == sub_cad)
		return ((char *)cadbig);
	cadlen = ft_strlen(sub_cad);
	i = 0;
	while (cadbig[i] && i < len)
	{
		if (cadbig[i] == *sub_cad)
		{
			if (ft_strncmp(&cadbig[i], sub_cad, cadlen) == 0)
			{
				if (i + cadlen > len)
					return (NULL);
				return ((char *)&cadbig[i]);
			}
		}
		i++;
	}
	return (NULL);
}

/*// Ejemplo de uso de la función ft_strnstr crea subcadenas a partir de la 
cadena principal
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
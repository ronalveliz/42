/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:34:03 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/10/08 18:58:06 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <string.h>
//#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;
	size_t	i;

	len = 0;
	while (s1[len])
		len++;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[len] = '\0';
	return (dup);
}

/*// Ejemplo main
#include <stdio.h>

int	main(void)
{
	char	str[] = "Libft project";
	char	*copy;

	copy = ft_strdup(str);
	if (!copy)
		return (1); // Error en la asignación de memoria
	printf("Original: %s\nDuplicado: %s\n", str, copy);
	free(copy); // Liberar memoria
	return (0);
}*/

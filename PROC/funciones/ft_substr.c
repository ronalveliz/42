/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 23:06:44 by kitsune           #+#    #+#             */
/*   Updated: 2024/10/08 18:54:54 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "stdlib.h"
//#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)ft_malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[len] = '\0';
	return (substr);
}
/*#include <stdio.h>

int	main(void)
{
	char *str = "Libft is awesome";
	char *substr;

	// Obtener una subcadena desde el índice 6 con longitud 7.
	substr = ft_substr(str, 6, 7);
	if (substr)
	{
		printf("Subcadena: %s\n", substr);
		free(substr);  // Liberar la memoria
	}
	else
	{
		printf("Error en la asignación de memoria.\n");
	}

	return (0);
}*/

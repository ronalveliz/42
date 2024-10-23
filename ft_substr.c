/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 23:06:44 by kitsune           #+#    #+#             */
/*   Updated: 2024/10/23 20:54:48 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subcadena;
	size_t			i;
	unsigned int	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_calloc(1, sizeof(char)));
	if (len > slen - start)
		len = slen - start;
	subcadena = (char *)malloc(sizeof(char) * (len + 1));
	if (!subcadena)
		return (NULL);
	i = 0;
	while (i < len)
	{
		subcadena[i] = s[start + i];
		i++;
	}
	subcadena[len] = '\0';
	return (subcadena);
}
/*ejemplo de main crear una cadena apartir de un inicio-numero de datos
#include <stdio.h>

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

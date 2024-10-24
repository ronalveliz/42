/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 23:33:05 by kitsune           #+#    #+#             */
/*   Updated: 2024/10/24 20:42:54 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cadfinal;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	cadfinal = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!cadfinal)
		return (NULL);
	i = 0;
	while (start < end)
		cadfinal[i++] = s1[start++];
	cadfinal[i] = '\0';
	return (cadfinal);
}
/*ejemplo de main
#include <stdio.h>

int	main(void)
{
	char *s1 = "   ---Hello, world!---   ";
	char *set = " -";
	char *trimmed_str;

	trimmed_str = ft_strtrim(s1, set);
	if (trimmed_str)
	{
		printf("Cadena recortada: '%s'\n", trimmed_str);
		free(trimmed_str); // Liberar la memoria asignada
	}
	else
	{
		printf("Error en la asignación de memoria.\n");
	}

	return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 23:33:05 by kitsune           #+#    #+#             */
/*   Updated: 2024/10/08 18:54:54 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
//#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = strlen(s1);
	while (s1[start] && ft_isset(s1[start], set))
		start++;
	while (end > start && ft_isset(s1[end - 1], set))
		end--;
	trimmed_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trimmed_str)
		return (NULL);
	i = 0;
	while (start < end)
		trimmed_str[i++] = s1[start++];
	trimmed_str[i] = '\0';
	return (trimmed_str);
}
/*#include <stdio.h>

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
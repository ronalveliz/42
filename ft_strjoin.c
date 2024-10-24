/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:34:50 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/10/24 17:46:46 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		new_str[i] = s1[i];
		i++;
	}
	while (i < s1_len + s2_len)
	{
		new_str[i] = s2[i - s1_len];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
#include <stdio.h>
#include <stdlib.h>

// concatenar 2 cadenas   tomando como base la primera
int	main(void)
{
	char *s1 = "Hello, ";
	char *s2 = "world!";
	char *joined_str;

	joined_str = ft_strjoin(s1, s2);
	if (joined_str)
	{
		printf("Cadena resultante: %s\n", joined_str);
		free(joined_str); // Liberar la memoria asignada
	}
	else
	{
		printf("Error en la asignación de memoria.\n");
	}

	return (0);
}*/

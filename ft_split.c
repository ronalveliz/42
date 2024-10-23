/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 01:04:28 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/10/23 21:07:12 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

static void	free_words(char **words)
{
	int	i;

	i = 0;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		start;
	int		i;
	int		j;

	res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && count_words(s, c) != 0)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
			res[j++] = ft_substr(s, start, (i - start));
		if (!res[j - 1])
			return (free_words(res), NULL);
	}
	res[j] = NULL;
	return (res);
}

/*
#include "libft.h"

int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("Hola, mundo! Esto es una prueba", ' ');
	i = 0;
	while (result[i])
	{
		printf("Palabra %d: %s\n", i + 1, result[i]);
		free(result[i]);  // No olvides liberar la memoria de cada palabra
		i++;
	}
	free(result);  // También liberamos el arreglo de punteros
	return (0);
}
}*/
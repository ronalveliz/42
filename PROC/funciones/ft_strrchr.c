/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:46:52 by kitsune           #+#    #+#             */
/*   Updated: 2024/10/22 20:02:35 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i - 1] == (char)c)
		{
			return ((char *)(s + i - 1));
		}
		i--;
	}
	if (s[0] == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}

/*
// Ejemplo main  ultima aparicion del caracter emviado #include <stddef.h>
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello World";
	char *result = ft_strrchr(str, 'o');
	if (result)
		printf("ft_strrchr: %s\n", result);  // Output: orld
	return (0);
}*/
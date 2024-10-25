/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:13:27 by marvin            #+#    #+#             */
/*   Updated: 2024/10/25 22:02:55 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	l;

	l = (unsigned char)c;
	while (*s)
	{
		if (*s == l)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

//#include <stdio.h> encontrar el primer caracter
/*int main()
{
	char	*s;
	char	*result;

	s = "Hello, World!";
	result = ft_strchr(s, 'o');
	printf("Resultado: %s\n", result);
	return (0);
}
*/

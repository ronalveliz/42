/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:47:35 by kitsune           #+#    #+#             */
/*   Updated: 2024/10/08 19:04:51 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>
//#include <stdio.h>
//#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] && (i + j) < len
			&& haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return (char *)(haystack + i);
		i++;
	}
	return (NULL);
}

/*// Ejemplo main
#include <stdio.h>

int	main(void)
{
	char haystack[] = "Hello World";
	char needle[] = "World";
	char *result = ft_strnstr(haystack, needle, 11);
	if (result)
		printf("ft_strnstr: %s\n", result);  // Output: World
	return (0);
}*/

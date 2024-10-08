/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:15:40 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/10/08 18:54:54 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*include "libft.h";*/
//#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/*// Ejemplo main Compara los primeros n bytes de dos áreas de memoria.
#include <stdio.h>

int	main(void)
{
	char mem1[] = "abcdef";
	char mem2[] = "abcdeg";
	int result = ft_memcmp(mem1, mem2, 5);
	printf("ft_memcmp: %d\n", result);  // Output: 0, los primeros
	//5 bytes son iguales
	return (0);
}*/

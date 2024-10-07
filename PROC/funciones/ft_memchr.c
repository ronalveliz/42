/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitsune <kitsune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:19:09 by kitsune           #+#    #+#             */
/*   Updated: 2024/10/07 22:26:57 by kitsune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

/*// Ejemplo main Busca la primera aparición de un byte específico
#include <stdio.h>
int main(void)
{
    char str[] = "Hello World";
    char *result = ft_memchr(str, 'o', 8);
    if (result)
        printf("ft_memchr: %s\n", result);  // Output: o World
    return 0;
}*/
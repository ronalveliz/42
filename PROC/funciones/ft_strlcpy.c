/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 21:51:44 by marvin            #+#    #+#             */
/*   Updated: 2024/09/29 21:51:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stddef.h>*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*copia un strean a un memoria de tamaño determinado 
incluido el nulo
int main()
{
    char dst[10];
    char *src = "Hello";
    size_t len = ft_strlcpy(dst, src, 10);
    printf("Resultado: %s, Longitud: %zu\n", dst, len);
    return 0;
}*/
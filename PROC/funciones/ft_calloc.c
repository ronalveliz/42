/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:07:21 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/10/08 18:57:33 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
/*include "libft.h";*/

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;
	size_t	i;

	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/*// Ejemplo main
#include <stdio.h>

int	main(void)
{
	int		*arr;
	size_t	n;
	size_t	i;

	n = 5;
	arr = (int *)ft_calloc(n, sizeof(int));
	if (!arr)
		return (1); // Error en la asignación de memoria
	for (i = 0; i < n; i++)
		printf("arr[%zu] = %d\n", i, arr[i]);
			// Todos los valores deberían ser 0
	free(arr); // Liberar memoria
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:07:21 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/10/23 21:12:30 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*// Ejemplo main
#include "libft.h"      // Para ft_calloc y ft_bzero
#include <stdio.h>      // Para printf

int	main(void)
{
	int	*array;

	size_t count = 5;  // Número de elementos en el arreglo
	size_t size = sizeof(int);  // Tamaño de cada elemento (en este caso,
			un entero)
	// Llama a ft_calloc para reservar memoria
	array = (int *)ft_calloc(count, size);
	if (array == NULL) // Verifica si la asignación fue exitosa
	{
		printf("Error: no se pudo asignar memoria.\n");
		return (1);  // Termina el programa con un código de error
	}
	Imprime los valores del arreglo para verificar que están inicializados a cero
    printf("Valores del arreglo inicializados a cero:\n");
	for (size_t i = 0; i < count; i++)
	{
		printf("array[%zu] = %d\n", i, array[i]);
	}
	// Liberar la memoria reservada
	free(array);
	return (0);  // Termina el programa con éxito
}
}*/

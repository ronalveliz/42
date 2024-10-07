/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitsune <kitsune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:57:15 by kitsune           #+#    #+#             */
/*   Updated: 2024/10/07 22:57:21 by kitsune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    size_t total_size;
    void *ptr;
    size_t i;

    total_size = count * size;
    ptr = malloc(total_size);
    if (!ptr)
        return NULL;

    i = 0;
    while (i < total_size)
    {
        ((unsigned char *)ptr)[i] = 0;
        i++;
    }
    return ptr;
}

// Ejemplo main
#include <stdio.h>

int main(void)
{
    int *arr;
    size_t n = 5;
    size_t i;

    arr = (int *)ft_calloc(n, sizeof(int));
    if (!arr)
        return 1;  // Error en la asignación de memoria

    for (i = 0; i < n; i++)
        printf("arr[%zu] = %d\n", i, arr[i]);  // Todos los valores deberían ser 0

    free(arr);  // Liberar memoria
    return 0;
}

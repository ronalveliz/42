/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitsune <kitsune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 23:01:06 by kitsune           #+#    #+#             */
/*   Updated: 2024/10/07 23:01:12 by kitsune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char *ft_strdup(const char *s1)
{
    size_t len;
    char *dup;
    size_t i;

    len = 0;
    while (s1[len])
        len++;

    dup = (char *)malloc(sizeof(char) * (len + 1));
    if (!dup)
        return NULL;

    i = 0;
    while (i < len)
    {
        dup[i] = s1[i];
        i++;
    }
    dup[len] = '\0';

    return dup;
}

// Ejemplo main
#include <stdio.h>

int main(void)
{
    char str[] = "Libft project";
    char *copy;

    copy = ft_strdup(str);
    if (!copy)
        return 1;  // Error en la asignación de memoria

    printf("Original: %s\nDuplicado: %s\n", str, copy);

    free(copy);  // Liberar memoria
    return 0;
}

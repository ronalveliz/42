/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitsune <kitsune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:29:02 by kitsune           #+#    #+#             */
/*   Updated: 2024/10/07 22:39:52 by kitsune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
        size_t i;
        unsigned char   *ptr1;
        unsigned char *ptr2;

        ptr1 = (unsigned char *)s1;
        ptr2 = (unsigned char *)s2;
        i = 0;
        while (i < n)
        {
            if (ptr1[i] != ptr2[i])
                return (ptr1[i] - ptr2[i]);
            i++;
        }
        return 0;
    }

/*// Ejemplo main Compara los primeros n bytes de dos áreas de memoria.
#include <stdio.h>
int main(void)
{
    char mem1[] = "abcdef";
    char mem2[] = "abcdeg";
    int result = ft_memcmp(mem1, mem2, 5);
    printf("ft_memcmp: %d\n", result);  // Output: 0, los primeros 
    //5 bytes son iguales
    return 0;
}*/

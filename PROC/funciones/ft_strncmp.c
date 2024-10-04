/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 00:18:13 by marvin            #+#    #+#             */
/*   Updated: 2024/10/01 00:18:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    
    while (n && (*s1 || *s2))
    {
        if (*s1 != *s2)
            return (unsigned char)*s1 - (unsigned char)*s2;
        s1++;
        s2++;
        n--;
    }
    return 0;
}
int main()
{
    char *s1 = "Hello";
    char *s2 = "Hella";
    int result = ft_strncmp(s1, s2, 4);
    printf("Resultado: %d\n", result);
    return 0;
}

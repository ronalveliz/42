/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:32:58 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 17:32:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*include "libft.h";*/
//#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset (s, 0, n);
}

/* Ejemplo main
#include <stdio.h>
int main(void)
{
    char str[50] = "Hello World";
    ft_bzero(str + 6, 5);
    printf("ft_bzero: %s\n", str);  // Output: Hello (luego bytes nulos)
    return 0;
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:06:29 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/10/24 20:40:53 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* Ejemplo main
#include <stdio.h>

int	main(void)
{
	char str[50] = "Hello World";
	ft_bzero(str + 6, 5);
	printf("ft_bzero: %s\n", str);  // Output: Hello (luego bytes nulos)
	return (0);
}*/
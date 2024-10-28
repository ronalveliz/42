/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:18:28 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/10/24 20:41:12 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	s = (char *)src;
	d = (char *)dst;
	if (d == s)
		return (dst);
	if (d > s)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	else
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	return (dst);
}
/*#include <stdio.h>
realiza una copia de  los datos en una temporal y con el inicio lo pegamos .
#include <string.h>
int	main(void)
{
	char overlap[50] = "Overlap Example";
	ft_memmove(overlap + 2, overlap, strlen(overlap) + 1);
	printf("ft_memmove (overlap): %s\n", overlap);  // Output: OvOverlap Example
	return (0);
}*/

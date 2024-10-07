/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:33:10 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 17:33:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char				*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*d ++ = *s ++;
	return (dst);
}

/*int main(void)
{
    char src[50] = "Source String";
    char dest[50];
    ft_memcpy(dest, src, strlen(src) + 1);
    printf("ft_memcpy: %s\n", dest);  // Output: Source String
    return 0;
}*/
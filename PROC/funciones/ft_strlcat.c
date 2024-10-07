/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:08:42 by marvin            #+#    #+#             */
/*   Updated: 2024/09/29 22:08:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dst_len == dstsize)
		return (dstsize + src_len);
	i = dst_len;
	j = 0;
	while (src[j] && (i + 1) < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
/* Ejemplo main
#include <stdio.h>
int main(void)
{
    char dst[20] = "Hello";
    char src[] = " World";
    size_t len = ft_strlcat(dst, src, sizeof(dst));
    printf("ft_strlcat: %s (len: %zu)\n", dst, len); 
	Output: Hello World (len: 11)
    return 0;
}
*/
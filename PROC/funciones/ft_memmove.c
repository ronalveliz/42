/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:56:33 by marvin            #+#    #+#             */
/*   Updated: 2024/09/21 23:56:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	s = (const char *)src;
	d = (char *)dst;
	if (d == s)
		return (dst);
	if (d > s)
	{
		while (len --)
		{
			d[len] = s[len];
		}
	}
	else
	{
		while (len--)
		{
			*d ++ = *s ++;
		}
	}
	return (dst);
}
/*#include <stdio.h>
#include <string.h>
int main(void)
{
    char overlap[50] = "Overlap Example";
    ft_memmove(overlap + 2, overlap, strlen(overlap) + 1);
    printf("ft_memmove (overlap): %s\n", overlap);  // Output: OvOverlap Example
    return 0;
}*/
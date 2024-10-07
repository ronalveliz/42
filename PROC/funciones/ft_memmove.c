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

/*#include"libft.h"*/

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d;
    const char *s;
	s = (const char *)src;
    d = (char *)dst;
    if (d == s)
        return dst;
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
    return dst;
}

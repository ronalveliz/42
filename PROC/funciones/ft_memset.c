/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:42:15 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/10/08 18:54:54 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>
//#include <stdio.h>
//#include <string.h>
//#include "libft.h";

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>
int	main(void)
{
	char str[50] = "Hello World";
	ft_memset(str + 6, '.', 3);
	printf("ft_memset: %s\n", str);  // Output: Hello ...
	return (0);
}*/
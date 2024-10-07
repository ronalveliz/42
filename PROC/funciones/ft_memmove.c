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

//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (const char *)src;
	if (d == s)
	{
		return (dst);
	}
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
			*d ++ = *s ++;
		}
	}
	return (dst);
}

/*int	main(void)
{
	// Caso 1: Copia sin solapamiento (normal)
	char src1[] = "Hello, World!";
	char dst1[20];

	printf("Caso 1 (sin solapamiento):\n");
	printf("Antes de memmove:\n");
	printf("src1: %s\n", src1);
	printf("dst1: %s\n", dst1);

	ft_memmove(dst1, src1, strlen(src1) + 1);  // Incluye el '\0'
	
	printf("Después de memmove:\n");
	printf("src1: %s\n", src1);
	printf("dst1: %s\n", dst1);
	printf("\n");
	return (0);
}
*/

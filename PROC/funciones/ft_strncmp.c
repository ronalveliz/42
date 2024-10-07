/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitsune <kitsune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 00:18:13 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 22:18:27 by kitsune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

/* Ejemplo main Compara los primeros `n` caracteres
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hellp";
    int result = ft_strncmp(str1, str2, 4);
    printf("ft_strncmp: %d\n", result);  Output: 0, las primeras 
                                        4 letras son iguales
    return 0;
}*/

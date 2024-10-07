/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitsune <kitsune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:46:52 by kitsune           #+#    #+#             */
/*   Updated: 2024/10/07 22:08:34 by kitsune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	if (s[0] == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}

/*/ Ejemplo main
#include <stdio.h>
int main(void)
{
    char str[] = "Hello World";
    char *result = ft_strrchr(str, 'o');
    if (result)
        printf("ft_strrchr: %s\n", result);  // Output: orld
    return 0;
}*/
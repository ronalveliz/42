/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:13:27 by marvin            #+#    #+#             */
/*   Updated: 2024/09/30 20:13:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h> encontrar el primer caracter

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			return ((char *) s);
		}
		s ++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

/*int main()
{
    char *s = "Hello, World!";
    char *result = ft_strchr(s, 'o');
    printf("Resultado: %s\n", result);
    return 0;
}
*/

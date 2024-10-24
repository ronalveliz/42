/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:50:30 by marvin            #+#    #+#             */
/*   Updated: 2024/10/22 22:39:32 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

/*// Prueba de ft_tolower  mayuscula a minuscula
int	main(void)
{
	char c = 'B';
	printf("Resultado: %c\n", ft_tolower(c));
	return (0);
}*/
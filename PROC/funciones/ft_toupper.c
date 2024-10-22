/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:48:45 by marvin            #+#    #+#             */
/*   Updated: 2024/10/09 20:34:46 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

/*// Ejemplo main minúscula a mayuscula
#include <stdio.h>

int	main(void)
{
	char c = 'a';
	printf("ft_toupper: %c\n", ft_toupper(c));  // Output: A
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:46:00 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/10/23 00:53:26 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

    if (!s || !f)
        return;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
        i++ ;
	}
}
/*
int	main(void)
{
	char str[] = "hello world";

	printf("Antes de ft_striteri: %s\n", str);

	// Aplicamos ft_striteri con la función to_uppercase
	ft_striteri(str, to_uppercase);

	printf("Después de ft_striteri: %s\n", str);

	return (0);
}
*/
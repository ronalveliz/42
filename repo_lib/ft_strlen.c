/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@estudiante.42madrid.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:45:18 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/10/24 20:40:46 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	signed	len;

	len = 0;
	while (c[len] != '\0')
	{
		len++;
	}
	return (len);
}
/*
int	main(void)
{
	printf("%zu", ft_strlen("asdfg"));
}*/

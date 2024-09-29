/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:48:45 by marvin            #+#    #+#             */
/*   Updated: 2024/09/29 22:48:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

// Prueba de ft_toupper
int main()
{
    char c = 'b';
    printf("Resultado: %c\n", ft_toupper(c));
    return 0;
}

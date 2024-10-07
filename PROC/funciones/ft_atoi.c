/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kitsune <kitsune@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:52:19 by kitsune           #+#    #+#             */
/*   Updated: 2024/10/07 22:53:04 by kitsune          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_atoi(const char *str)
{
    int sign;
    int result;
    size_t i;

    sign = 1;
    result = 0;
    i = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return result * sign;
}

/*// Ejemplo main cadena  a int

int main(void)
{
    char str[] = "  -12345";
    int number = ft_atoi(str);
    printf("ft_atoi: %d\n", number);  // Output: -12345
    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:28:41 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/09/17 19:29:34 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


include "libft.h";

int ft_isalnum(int c) {
    if(ft_isalpha(c) || ft_isdigit(c)){
        return (1);
    }
    return(0);
}

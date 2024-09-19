/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dveliz-c <dveliz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:42:15 by dveliz-c          #+#    #+#             */
/*   Updated: 2024/09/17 19:44:05 by dveliz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	void	*ft_memset(void *s, int c, size_t n){
		unsigned char *str = s;
		size_t v;
		v = 0;
	while (v < n){
		*str = (unsigned char)c;
	}
	*str ++;
	return (s);
}

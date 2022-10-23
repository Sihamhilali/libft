/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:58:01 by selhilal          #+#    #+#             */
/*   Updated: 2022/10/23 19:32:31 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*h;
	char	find;

	find = (char)c;
	h = (char *)str;
	i = 0;
	while (i < n)
	{
		if (h[i] == find)
			return ((void *)h + i);
		i++;
	}
	return (NULL);
}

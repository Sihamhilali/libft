/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:58:01 by selhilal          #+#    #+#             */
/*   Updated: 2022/10/18 17:30:05 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*h;

	h = (char *)str;
	i = 0;
	while (i < n)
	{
		if (h[i] == c)
			return (h + i);
		i++;
	}
	return (NULL);
}

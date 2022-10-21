/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:24:06 by selhilal          #+#    #+#             */
/*   Updated: 2022/10/18 18:31:52 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*copied;
	char	*becopied;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	copied = (char *) dest;
	becopied = (char *) src;
	while (i < n)
	{
		copied[i] = becopied[i];
		i++;
	}
	return (dest);
}

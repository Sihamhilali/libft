/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:40:35 by selhilal          #+#    #+#             */
/*   Updated: 2022/10/23 14:56:26 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*copied;
	char	*becopied;

	copied = (char *)dest;
	becopied = (char *)src;
	if (becopied < copied)
	{
		while (n-- > 0)
		{
			copied[n] = becopied[n];
		}
		return (dest);
	}
	return (ft_memcpy(dest, src, n));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:37:08 by selhilal          #+#    #+#             */
/*   Updated: 2022/10/22 10:22:42 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (*s2 == '\0')
		return ((char *) s1);
	if (!n)
		return (NULL);
	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] == s2[0])
		{
			j = 1;
			while (s2[j] && s1[i + j] == s2[j] && i + j < n)
				j++;
			if (s2[j] == '\0')
				return ((char *)s1 + i);
		}
		i++;
	}
	return (0);
}

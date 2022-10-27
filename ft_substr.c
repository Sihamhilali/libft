/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:17:03 by selhilal          #+#    #+#             */
/*   Updated: 2022/10/25 22:14:31 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start < ft_strlen(s))
	{
		if ((ft_strlen(s) - start) < len)
			ptr = malloc(ft_strlen(s) - start + 1);
		else
			ptr = malloc(len + 1);
		if (!ptr)
			return (NULL);
		i = -1;
		while (++i < len && s[start])
			ptr[i] = s[start++];
		ptr[i] = 0;
		return (ptr);
	}
	ptr = malloc(sizeof(char));
	if (!ptr)
		return (0);
	ptr[0] = '\0';
	return (ptr);
}

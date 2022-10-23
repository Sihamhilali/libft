/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:52:53 by selhilal          #+#    #+#             */
/*   Updated: 2022/10/23 19:48:56 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr1;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	j = ft_strlen(s1) + ft_strlen(s2);
	ptr1 = malloc (j + 1);
	if (!ptr1)
		return (NULL);
	ft_memcpy(ptr1, s1, ft_strlen(s1));
	ft_memcpy(ptr1 + ft_strlen(s1), s2, ft_strlen(s2));
	ptr1[j] = '\0';
	return (ptr1);
}

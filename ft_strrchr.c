/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:39:30 by selhilal          #+#    #+#             */
/*   Updated: 2022/10/23 19:38:24 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t			len;
	char			s;

	len = ft_strlen(str);
	s = (char)c;
	while (len > 0)
	{
		if (str[len] == s)
			return ((char *)str + len);
		len--;
	}
	if (str[len] == s)
		return ((char *)str + len);
	return (NULL);
}

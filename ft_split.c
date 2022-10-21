/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:52:18 by selhilal          #+#    #+#             */
/*   Updated: 2022/10/20 22:25:22 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
		i++;
		if (s[i] != c)
		count++;
		while (s[i] && s[i] != c)
		i++;
	}
	return (count);
}

int	count_word(char const *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (s[i] && s[i] == c)
	i++;
	while (s[i] && s[i] != c)
	{
		w++;
		i++;
	}
	return (w);
}

char	*ft_table(char const *s, char c)
{
	int		len;
	char	*ptr;
	int		i;

	len = count_word(s, c);
	i = 0;
	ptr = malloc(sizeof(char) * len + 1);
	while (i < len)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		w;

	if (!s)
		return (NULL);
	w = ft_count(s, c);
	str = (char **)malloc(sizeof(char *)) * (w + 1));
	if (!str)
		return (NULL);
	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			str[w++] = ft_table(&s[i], c);
		}
		while (s[i] && s[i] != c)
			i++;
	}
	str[w] = 0;
	return (str);
}

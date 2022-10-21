/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:47:09 by selhilal          #+#    #+#             */
/*   Updated: 2022/10/20 23:32:57 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*ptr;
	int		t;

	i = ft_count(n);
	t = 0;
	ptr = malloc((sizeof(char) * (i + 1)));
	if (!ptr)
		return (0);
	if (n < 0)
	{
		ptr[0] = '-';
		t = 1;
	}
	while (i-- > t)
	{
		if (n < 0)
		ptr[i] = '0' + n % 10 * (-1);
		else
			ptr[i] = '0' + n % 10 ;
		n = n / 10;
	}
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:56:22 by selhilal          #+#    #+#             */
/*   Updated: 2022/10/27 00:22:56 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
//int main()
//{
//	char  *t;
//	t = malloc(sizeof(char) * 1);
//	ft_memset(t, 'a', 1000000);
//	t[999999] = 'b';
//	printf("%c\n",t[999999]);
//}

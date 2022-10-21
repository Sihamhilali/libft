/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:18:44 by selhilal          #+#    #+#             */
/*   Updated: 2022/10/21 11:02:28 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<string.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

int main()
{
	//char t[]="sihamhilali";
	//char *d = NULL;
	//int h[]={1,2,3,5,5,6,8,6};
	int *k = 100;
	bzero(&k,4);
	
	printf("%d",k) ;
}

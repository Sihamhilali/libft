/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:12:08 by selhilal          #+#    #+#             */
/*   Updated: 2022/10/20 23:37:45 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	i = n;
	if (i <= 9)
	{
		ft_putchar_fd(i + '0', fd);
	}
	else
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putchar_fd((i % 10) + '0', fd);
	}
}

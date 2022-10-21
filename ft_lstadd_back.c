/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:40:54 by selhilal          #+#    #+#             */
/*   Updated: 2022/10/21 15:09:37 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*p;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	p = ft_lstlast(*lst);
	p -> next = new;
}

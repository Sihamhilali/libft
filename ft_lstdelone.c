/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:10:29 by selhilal          #+#    #+#             */
/*   Updated: 2022/10/22 09:13:37 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstdelone(t_list	*lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	if (del)
	{
		del(lst -> content);
	}
	free(lst);
}

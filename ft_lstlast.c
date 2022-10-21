/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:45:25 by selhilal          #+#    #+#             */
/*   Updated: 2022/10/21 14:04:47 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list	*lst)
{

	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst -> next == NULL)
			return (lst);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:51:36 by selhilal          #+#    #+#             */
/*   Updated: 2022/10/21 13:44:53 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list	*lst)
{
	int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}
//int main()
//{
//    t_list  *head;
//    t_list  *new;
//	t_list *lst;
//
//    head = ft_lstnew("A");
//	new = ft_lstnew("B");
//	lst = ft_lstnew("c");
//
//	head->next = new;
//	new->next = lst;
//    
//    
//    printf("%d" , ft_lstsize(head));
//}

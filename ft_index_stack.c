/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 12:03:47 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/30 12:52:50 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

t_list	*ft_get_min(t_list **stack)
{
	t_list	*head;
	t_list	*min;
	int		check;

	head = *stack;
	min = NULL;
	check = 0;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (check == 0 || head->value < min->value))
			{
				min = head;
				check = 1;
			}
			head = head->next;
		}
	}
	return (min);
}


void    ft_index_stack(t_list **stack)
{
	t_list	*head;
	int		index;

	head = ft_get_min(stack);
	index = 0;
	while (head)
	{
		head->index = index++;
		head = ft_get_min(stack);
	}
}
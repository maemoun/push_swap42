/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:22:28 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/28 20:43:20 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_get_min_pos(t_list **stack)
{
	t_list	*head;
	int		pos;
	int		min_value;
	int		min_pos;

	head = *stack;
	min_value = head->value;
	min_pos = 1;
	pos = 1;
	while (head)
	{
		if (head->value < min_value)
		{
			min_value = head->value;
			min_pos = pos;
		}
		head = head->next;
		pos++;
	}
	return (min_pos);
}
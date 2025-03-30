/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 11:53:04 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/30 13:25:04 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	range_increment(int *start, int *end)
{
	(*start)++;
	(*end)++;
}

int	ft_get_max_pos(t_list **stack)
{
	t_list	*head;
	int		pos;
	int		max_value;
	int		max_pos;

	head = *stack;
	max_value = head->value;
	max_pos = 0;
	pos = 0;
	while (head)
	{
		if (head->value > max_value)
		{
			max_value = head->value;
			max_pos = pos;
		}
		head = head->next;
		pos++;
	}
	return (max_pos);
}

void    return_to_stack_a(t_list **stack_a, t_list **stack_b, int size)
{
    int	pos;

	while (*stack_b)
	{
		pos = ft_get_max_pos(stack_b);
		if (pos == 0)
		{
			pa(stack_a, stack_b);
			size--;
		}
		else if (pos <= size / 2)
			rb(stack_b);
		else if (pos > size / 2)
			rrb (stack_b);
	}
}

void    ft_sort_range(t_list **stack_a, t_list **stack_b, int size)
{
    int	start;
	int	end;

	start = 0;
	end = 15;
	if (size > 100)
		end = 35;
	while (*stack_a)
	{
		if ((*stack_a)->index <= start)
		{
			pb(stack_b, stack_a);
			rb(stack_b);
			range_increment(&start, &end);
		}
		else if ((*stack_a)->index > start && (*stack_a)->index <= end)
		{
			pb(stack_b, stack_a);
			range_increment(&start, &end);
		}
		else if ((*stack_a)->index > end)
			ra(stack_a);
	}
	return_to_stack_a(stack_a, stack_b, size);
}

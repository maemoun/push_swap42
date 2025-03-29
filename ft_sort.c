/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 19:59:44 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/28 20:53:57 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void    ft_sort_three(t_list **stack)
{
	if (ft_get_min_pos(stack) == 1)
	{
		if ((*stack)->next->value > (*stack)->next->next->value)
		{
			rra(stack);
			sa(stack);
		}
	}
	else if (ft_get_min_pos(stack) == 2)
	{
		if ((*stack)->value < (*stack)->next->next->value)
			sa(stack);
		else if ((*stack)->value > (*stack)->next->next->value)
			ra(stack);
	}
	else if (ft_get_min_pos(stack) == 3)
	{
		if ((*stack)->value < (*stack)->next->value)
			rra(stack);
		else if ((*stack)->value > (*stack)->next->value)
		{
			sa(stack);
			rra(stack);
		}
	}
}

void	ft_sort_four(t_list **stack_a, t_list **stack_b)
{
	int		min_pos;

	min_pos = ft_get_min_pos(stack_a);
	if (min_pos == 1)
		pb(stack_b, stack_a);
	else
	{
		if (min_pos == 3)
			ra(stack_a);
		if (min_pos == 2 || min_pos == 3)
			sa(stack_a);
		if (min_pos == 4)
			rra(stack_a);
		pb(stack_b, stack_a);
	}
	ft_sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	ft_sort(t_list **stack_a, t_list **stack_b, int size)
{
	(void)stack_b;
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		ft_sort_three(stack_a);
	else if (size == 4)
		ft_sort_four(stack_a, stack_b);
}
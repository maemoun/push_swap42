/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:01:59 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/28 20:26:52 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_list **stack)
{
	t_list	*head;
	t_list	*tmp;

	if (*stack && (*stack)->next)
	{
		head = *stack;
		tmp = head->next;
		head->next = tmp->next;
		tmp->next = head;
		*stack = tmp;
        printf("sa\n");
	}
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_b)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
		printf("pa\n");
	}
}

void	ra(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	if (*stack && (*stack)->next)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		last = *stack;
		while (last->next)
			last = last->next;
		last->next = tmp;
		tmp->next = NULL;
        printf("ra\n");
	}
}

void	rra(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	if (*stack && (*stack)->next)
	{
		last = *stack;
		while (last->next)
		{
			tmp = last;
			last = last->next;
		}
		tmp->next = NULL;
		last->next = *stack;
		*stack = last;
        printf("rra\n");
	}
}

void	sb(t_list **stack)
{
	t_list	*head;
	t_list	*tmp;

	if (*stack && (*stack)->next)
	{
		head = *stack;
		tmp = head->next;
		head->next = tmp->next;
		tmp->next = head;
		*stack = tmp;
        printf("sb\n");
	}
}

void	pb(t_list **stack_b, t_list **stack_a)
{
	t_list	*tmp;

	if (*stack_a)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		tmp->next = *stack_b;
		*stack_b = tmp;
		printf("pb\n");
	}
}

void	rb(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	if (*stack && (*stack)->next)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		last = *stack;
		while (last->next)
			last = last->next;
		last->next = tmp;
		tmp->next = NULL;
        printf("rb\n");
	}
}

void	rrb(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	if (*stack && (*stack)->next)
	{
		last = *stack;
		while (last->next)
		{
			tmp = last;
			last = last->next;
		}
		tmp->next = NULL;
		last->next = *stack;
		*stack = last;
        printf("rrb\n");
	}
}

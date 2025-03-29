/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:36:56 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/28 20:37:30 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

// void    hh()
// {
// 	printf("\n");
//     system("leaks -q program");
// }


void	ft_init_stack(t_list **stack, int *tab, int size)
{
	t_list	*new_node;
	int		i;

	i = 0;
	while (i < size)
	{
		new_node = ft_lstnew(tab[i]);
		if (!new_node)
		{
			free(tab);
			ft_free_stack(stack);
			return ;
		}
		ft_lstadd_back(stack, new_node);
		i++;
	}
}

int main(int ac, char **av)
{
	// atexit(hh); //leaks testing
	int		*arr;
	int		size;
	char	**tab;
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac >= 2)
	{
		tab = ft_check_errors(ac, av, &size);
		arr = malloc(sizeof(int) * size);
		if (!arr)
		{
			ft_free(tab);
			return (1);
		}
		ft_get_nbrs(tab, size, arr);
		ft_free(tab);
		ft_dup_nbrs(arr, size);
		ft_check_is_sorted(arr, size);
		stack_a = NULL;
		stack_b = NULL;
		ft_init_stack(&stack_a, arr, size);
		free(arr);
		ft_sort(&stack_a, &stack_b, size);

		t_list *cur = stack_a;
		while (cur)
		{
			printf("%d    ", cur->value);
			cur = cur->next;
		}
		ft_free_stack(&stack_a);
	}
}

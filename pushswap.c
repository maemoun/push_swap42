/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:36:56 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/28 16:16:52 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void    hh()
{
    system("leaks program");
}

int main(int ac, char **av)
{
	char **tab;
	char *str;
	int *arr;
	int i = 1;
	int size = 0;

	if (ac >= 2)
	{
		str = ft_strjoin(ac, av);
		tab = ft_split(str);
		free(str);
		if (!tab)
			return (1);
		while (tab[size])
			size++;
		if (ft_validate(tab) == 0)
		{
			ft_free(tab);
			ft_pr_error("Error!\n", NULL);
		}
		arr = malloc(sizeof(int) * size);
		if (!arr)
		{
			ft_free(tab);
			return (0);
		}
		ft_get_nbrs(tab, size, arr);
		ft_free(tab);
		ft_dup_nbrs(arr, size);
		ft_check_is_sorted(arr, size);




		system("leaks -q program"); // testing

		int e = 0;
		while (e < size)
		{
			printf("[%d]\n", arr[e]);
			e++;
		}
	}
}

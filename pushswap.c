/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:36:56 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/28 17:32:28 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void    hh()
{
    system("leaks -q program");
}




int main(int ac, char **av)
{
	atexit(hh); //leaks testing
	int *arr;
	int size = 0;
	char **tab;

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

}

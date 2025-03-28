/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_nbrs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 14:41:53 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/28 16:14:09 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void    ft_get_nbrs(char **tab, int size, int *arr)
{
    int i = 0;

	if (size == 1)
	{
		ft_free(tab);
        free(arr);
		exit(0);
	}
    while (i < size)
	{
		arr[i] = ft_atoi(tab[i], tab, arr);
		i++;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup_nbrs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:23:50 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/30 13:37:49 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void    ft_dup_nbrs(int *arr, int size)
{
    int i = 0;
    int j;
    int tmp;

    while (i < size - 1)
    {
        j = i + 1;
        tmp = arr[i];
        while (j < size)
        {
            if (tmp == arr[j])
            {
                free(arr);
                ft_pr_error("Eroor\n", NULL);
                return ;
            }
            j++;
        }
        i++;
    }
}
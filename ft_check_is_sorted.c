/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_is_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 16:17:04 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/28 16:25:05 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"


void    ft_check_is_sorted(int *arr, int size)
{
    int i = 0;
    while (arr[i])
    {
        if (arr[i] < arr[i + 1])
            i++;
        else
            break;
    }
    if (i == size - 1)
    {
        free(arr);
        exit (0);
    }
}
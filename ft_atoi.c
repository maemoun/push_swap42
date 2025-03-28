/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 14:48:33 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/28 16:03:23 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_atoi(const char *str, char **tab, int *arr)
{
	int			i;
	int			sign;
	long		res;

	sign = 1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		if ((res * sign) < -2147483648 || (res * sign) > 2147483647)
        {
            ft_free(tab);
            free(arr);
            ft_pr_error("Error!\n", NULL);
        }
		i++;
	}
	return (res * sign);
}

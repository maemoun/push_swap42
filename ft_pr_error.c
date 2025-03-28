/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pr_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 14:42:02 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/28 16:09:13 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void    ft_pr_error(char *msg, char *str)
{
	int i = 0;
	if (str != NULL)
		free (str);
	if (msg != NULL)
	{
		while (msg[i])
		{
			write(2, &msg[i], 1);
			i++;
		}
	}
	exit(1);
}
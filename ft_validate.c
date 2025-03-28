/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:57:25 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/20 20:01:03 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return(1);
	return(0);
}

int	ft_validate(char **tab)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	if (!tab)
		return(0);
	while(tab[i])
	{
		j = 0;
		while(tab[i][j])
		{
			if (ft_isdigit(tab[i][j]))
			{
				if (tab[i][j + 1] && !ft_isdigit(tab[i][j + 1]))
					return(0);
			}
			else if(tab[i][j] == '-' || tab[i][j] == '+')
			{
				if (!ft_isdigit(tab[i][j + 1]) || !tab[i][j  + 1])
					return(0);
			}
			else
					return(0);
			j++;
		}
		i++;
	}
	return(1);
}

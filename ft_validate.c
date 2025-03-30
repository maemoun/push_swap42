/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:57:25 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/30 12:44:18 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return(1);
	return(0);
}

int	ft_vali1(char c)
{
	if (!ft_isdigit(c) || c == '\0')
		return(0);
	return 1;
}

int	ft_validate(char **tab)
{
	int i;
	int j;

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
			else if ((tab[i][j] == '-' || tab[i][j] == '+') && (ft_vali1(tab[i][j + 1]) == 0))
				return(0);
			j++;
		}
		i++;
	}
	return(1);
}

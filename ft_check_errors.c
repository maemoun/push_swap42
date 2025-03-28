/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 17:06:38 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/28 17:27:36 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

char **ft_check_errors(int ac, char **av, int *size)
{
	char *str;
	char **tab;
	int i;

	str = ft_strjoin(ac, av);
	tab = ft_split(str);
	free(str);
	if (!tab)
		exit(1);
	i = 0;
	while (tab[i])
		i++;
	*size = i;
	if (ft_validate(tab) == 0)
	{
		ft_free(tab);
		ft_pr_error("Error!\n", NULL);
	}
	return tab;
}

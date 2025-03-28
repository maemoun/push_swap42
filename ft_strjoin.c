/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:37:08 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/28 16:10:23 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	check_only_tabs_spaces(char **av, char *str)
{
	int i = 0;
	int j;
	int flag;

	while (av[i])
	{
		j = 0;
		flag = 1;
		while (av[i][j] != '\0')
		{
			if (av[i][j] != ' ' && av[i][j] != '\t')
			{
				flag = 0;
				break ;
			}
			j++;
		}
		if (flag == 1)
			ft_pr_error("Error\n", str);

		i++;
	}
}

static int	ft_strlen_join(char *s)
{
	int i;
	i = 0;

	if (!s)
		return(0);
	while(s[i])
		i++;
	return(i);
}

char    *ft_strjoin(int ac, char **av)
{
	int i;
	char *str;
	int j;
	int k;
	int len = 0;

	i = 1;
	while(i < ac)
	{
		len += ft_strlen_join(av[i]);
		len++;
		i++;
	}
	str = malloc(len + 1);
	if (!str)
		return(NULL);
	i = 1;
	j = 0;
	k = 0;
	check_only_tabs_spaces(av, str);
	while (av[i])
	{
		if(av[i][0] == '\0')
			ft_pr_error("Error\n", str);
		str[k] = av[i][j];
		j++;
		k++;
		if (av[i][j] == '\0')
		{
			str[k] = ' ';
			k++;
			i++;
			j = 0;
		}
	}
	str[k] = '\0';
	return(str);
}

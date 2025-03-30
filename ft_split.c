/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:45:59 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/30 12:47:13 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int ft_len(const char *s)
{
	int i;

	i = 0;
	while (s[i] && (s[i] != ' ' && s[i] != '\t'))
		i++;
	return(i);
}

static int	ft_word(char *s)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && (s[i] == ' ' || s[i] == '\t'))
			i++;
		if (s[i] && (s[i] != ' ' && s[i] != '\t'))
			j++;
		while (s[i] && (s[i] != ' ' && s[i] != '\t'))
			i++;
	}
	return(j);
}

static void	ft_free_split(char **arr, int i)
{
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
}
static char	**ft_spl(char **arr, const char *s, int word)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (word)
	{
		while (s[i] && (s[i] == ' ' || s[i] == '\t'))
			i++;
		if(s[i])
		{
			arr[j] = ft_substr(s, i, ft_len(s + i));
			if (!arr[j])
			{
				ft_free_split(arr, j);
				return(NULL);
			}
		}
		j++;
		while(s[i] && (s[i] != ' ' && s[i] != '\t'))
			i++;
		word--;
	}
	arr[j] = NULL;
	return(arr);
}

char    **ft_split(char *s)
{
	char **arr;
	int word;

	if (!s)
		return(NULL);
	word = ft_word(s);
	if (word == 0)
		ft_pr_error("Error\n", NULL);
	arr = malloc((word + 1) * 8);
	if (!arr)
		return(NULL);
	return(ft_spl(arr, s, word));
}
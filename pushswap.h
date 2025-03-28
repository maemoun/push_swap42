/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:37:13 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/28 16:21:11 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
#define PUSHSWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char    *ft_strjoin(int ac, char **av);
char    **ft_split(char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
void	ft_free(char **tab);
int     ft_validate(char **tab);
void    ft_pr_error(char *msg, char *str);
void    ft_get_nbrs(char **tab, int size, int *arr);
int     ft_atoi(const char *str, char **tab, int *arr);
void    ft_dup_nbrs(int *arr, int size);
void    ft_check_is_sorted(int *arr, int size);


#endif
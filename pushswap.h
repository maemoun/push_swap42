/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeskhai <maeskhai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:37:13 by maeskhai          #+#    #+#             */
/*   Updated: 2025/03/30 13:03:26 by maeskhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
#define PUSHSWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list {
    int value;
    int index;
    struct s_list *next;
} t_list;

char    **ft_check_errors(int ac, char **av, int *size);
char    *ft_strjoin(int ac, char **av);
char    **ft_split(char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
void	ft_free(char **tab);
void    ft_pr_error(char *msg, char *str);
int     ft_validate(char **tab);
void    ft_get_nbrs(char **tab, int size, int *arr);
int     ft_atoi(const char *str, char **tab, int *arr);
void    ft_dup_nbrs(int *arr, int size);
void    ft_check_is_sorted(int *arr, int size);
void	ft_free_stack(t_list **stack);


t_list	*ft_lstnew(int nbr);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);


void    ft_sort(t_list **stack_a, t_list **stack_b, int size);
void    ft_sort_range(t_list **stack_a, t_list **stack_b, int size);


void	sa(t_list **stack);
void	pa(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack);
void	rra(t_list **stack);
void	sb(t_list **stack);
void	pb(t_list **stack_b, t_list **stack_a);
void	rb(t_list **stack);
void	rrb(t_list **stack);

int     ft_get_min_pos(t_list **stack);
void    ft_index_stack(t_list **stack);



#endif
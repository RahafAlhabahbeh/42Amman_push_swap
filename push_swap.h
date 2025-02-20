/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-haba <ral-haba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:05:11 by ral-haba          #+#    #+#             */
/*   Updated: 2025/02/03 11:01:12 by ral-haba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include <stdlib.h>
# include "Libft/libft.h"

typedef struct s_node
{
	int					data;
	int					index;
	int					push_cost;
	int				above_median;
	int				cheapest;
	struct s_node		*next;
	struct s_node		*prev;
	struct s_node		*target_node;
}	t_node;

int				error_syntax(char *str_n);
int				error_duplicate(t_node *a, int n);
void			free_stack(t_node **stack);
void			free_errors(t_node **a);

void			init_stack_a(t_node **a, char **argv);
char			**split(char *s, char c);

void			init_nodes_a(t_node *a, t_node *b);
void			init_nodes_b(t_node *a, t_node *b);
void			current_index(t_node *stack);
void			set_cheapest(t_node *stack);
t_node			*get_cheapest(t_node *stack);
void			prep_for_push(t_node **s, t_node *n, char c);

int				stack_len(t_node *stack);
t_node			*find_last(t_node *stack);
int			stack_sorted(t_node *stack);
t_node			*find_min(t_node *stack);
t_node			*find_max(t_node *stack);

void			sa(t_node **a, int print);
void			sb(t_node **b, int print);
void			ss(t_node **a, t_node **b, int print);
void			ra(t_node **a, int print);
void			rb(t_node **b, int print);
void			rr(t_node **a, t_node **b, int print);
void			rra(t_node **a, int print);
void			rrb(t_node **b, int print);
void			rrr(t_node **a, t_node **b, int print);
void			pa(t_node **a, t_node **b, int print);
void			pb(t_node **b, t_node **a, int print);

void			sort_three(t_node **a);
void			sort_stacks(t_node **a, t_node **b);

#endif

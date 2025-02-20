/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-haba <ral-haba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:05:52 by ral-haba          #+#    #+#             */
/*   Updated: 2025/02/03 10:57:48 by ral-haba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate(t_node **stack)
{
	t_node	*last;

	if (!*stack || !(*stack)->next)
		return ;
	last = find_last(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}

void	rra(t_node **a, int print)
{
	rev_rotate(a);
	if (!print)
		write (1, "rra\n", 4);
}

void	rrb(t_node **b, int print)
{
	rev_rotate(b);
	if (!print)
		write (1, "rrb\n", 4);
}

void	rrr(t_node **a, t_node **b, int print)
{
	rev_rotate(a);
	rev_rotate(b);
	if (!print)
		write (1, "rrr\n", 4);
}

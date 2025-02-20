/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-haba <ral-haba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:07:27 by ral-haba          #+#    #+#             */
/*   Updated: 2025/02/03 11:01:30 by ral-haba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_node **head)
{
	if (!*head || !(*head)->next)
		return ;
	*head = (*head)->next;
	(*head)->prev->prev = *head;
	(*head)->prev->next = (*head)->next;
	if ((*head)->next)
		(*head)->next->prev = (*head)->prev;
	(*head)->next = (*head)->prev;
	(*head)->prev = NULL;
}

void	sa(t_node **a, int print)
{
	swap(a);
	if (!print)
		write (1, "sa\n", 3);
}

void	sb(t_node **b, int print)
{
	swap(b);
	if (!print)
		write (1, "sb\n", 3);
}

void	ss(t_node **a, t_node **b, int print)
{
	swap(a);
	swap(b);
	if (!print)
		write (1, "ss\n", 3);
}

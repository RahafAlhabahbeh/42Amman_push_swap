/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-haba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 11:37:36 by ral-haba          #+#    #+#             */
/*   Updated: 2024/06/21 12:02:26 by ral-haba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_strcmp("Rahaf", "Rahaf1"));
	printf("\n%d", ft_strcmp("Rahaf", "Ra"));
	printf("\n%d", ft_strcmp("Ra", "Rahaf"));
	printf("\n%d", ft_strcmp("Rahaf", "Rahaf"));
}
*/

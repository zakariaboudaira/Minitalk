/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dataprinter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <zboudair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 09:26:28 by zboudair          #+#    #+#             */
/*   Updated: 2022/01/04 19:40:31 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	ft_dataprinter(t_msg *g_head)
{
	t_msg	*g_node;

	g_node = g_head;
	while (g_node)
	{
		write(1, g_node->data, ft_strlen(g_node->data));
		g_node = g_node->next;
	}
	write(1, "\n", 1);
}

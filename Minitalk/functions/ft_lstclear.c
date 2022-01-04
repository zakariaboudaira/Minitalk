/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <zboudair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 16:49:11 by zboudair          #+#    #+#             */
/*   Updated: 2022/01/04 19:40:39 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	ft_lstclear(t_msg **lst)
{
	t_msg	*current;
	t_msg	*next;

	current = *lst;
	next = NULL;
	if ((lst != 0))
	{
		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
		*lst = NULL;
	}
}

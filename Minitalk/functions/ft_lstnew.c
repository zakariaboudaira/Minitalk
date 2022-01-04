/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <zboudair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 16:27:05 by zboudair          #+#    #+#             */
/*   Updated: 2022/01/04 19:40:42 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

t_msg	*ft_lstnew(void)
{
	t_msg	*head;

	head = malloc(sizeof(t_msg));
	if (head == NULL)
		return (NULL);
	ft_bzero(head->data, BUFFSIZE);
	head->current_bit = 1 << 6;
	head->current_byte = 0;
	head->overflow = 0;
	head->received = 0;
	head->next = NULL;
	return (head);
}

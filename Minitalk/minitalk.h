/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <zboudair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 19:58:48 by rtulchiy          #+#    #+#             */
/*   Updated: 2022/01/03 15:17:09 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# define BUFFSIZE 1000
# define LONG_MAX 9223372036854775807

# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <zconf.h>

typedef struct s_msg
{
	char			data[BUFFSIZE];
	int				current_bit;
	int				current_byte;
	int				received;
	int				overflow;
	struct s_msg	*next;
}t_msg;
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *str);
void	ft_putnbr(int nb);
void	ft_error(char *str_error);
t_msg	*ft_lstnew(void);
void	ft_dataprinter(t_msg *head);
void	ft_lstclear(t_msg **lst);

#endif

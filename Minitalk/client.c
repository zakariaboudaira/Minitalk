/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zboudair <zboudair@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 14:58:09 by zboudair          #+#    #+#             */
/*   Updated: 2022/01/04 19:56:56 by zboudair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_char(int pid, unsigned char c)
{
	unsigned char		b;

	b = 1 << 6;//b=1 binary == 00000001 after << binary = 01000000 you have to google it 
	while (b)
	{
		if (c & b) //& google it
		{
			if (kill(pid, SIGUSR1) == -1)//kill is used to send the signals
				ft_error("bad pid\n");
		}
		else
		{
			if (kill(pid, SIGUSR2) == -1)
				ft_error("bad pid\n");
		}
		b >>= 1;
		usleep(50);
	}
}

void	handler(char *spid, char *str)
{
	int			pid;
	int			i;

	i = 0;
	pid = ft_atoi(spid);//converting the pid
	while (str[i])
	{
		send_char(pid, str[i]);
		i++;
	}
	send_char(pid, str[i]);
}

int	main(int ac, char **argv)
{
	if (ac == 3)
		handler(argv[1], argv[2]);
	return (0);
}

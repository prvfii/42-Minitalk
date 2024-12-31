/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:14:46 by firdawssema       #+#    #+#             */
/*   Updated: 2024/06/17 10:58:55 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handlesignal(int sig, siginfo_t *info, void *context)
{
	static int	bit;
	static int	c;

	(void)context;
	if (sig == SIGUSR2)
		c |= (1 << bit);
	bit++;
	if (bit == 8)
	{
		if (c == 0)
			kill(info->si_pid, SIGUSR1);
		write(1, &c, 1);
		bit = 0;
		c = 0;
	}
}

int	main(int argc, char *argv[])
{
	int					pid;
	struct sigaction	sa;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	pid = getpid();
	ft_printf("PID : %d\n", pid);
	sa.sa_sigaction = handlesignal;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_SIGINFO;
	while (argc == 1)
	{
		sigaction(SIGUSR1, &sa, NULL);
		sigaction(SIGUSR2, &sa, NULL);
		pause();
	}
	return (0);
}

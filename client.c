/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:14:37 by firdawssema       #+#    #+#             */
/*   Updated: 2024/06/17 11:22:37 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		return (0);
	return (result * sign);
}

void	sendsignal(char c, int pid)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c >> bit) & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		bit++;
		usleep(100);
	}
}

void	sig_handler(int sig)
{
	if (sig == SIGUSR1)
		ft_printf("Message received by server!\n");
}

int	main(int argc, char *argv[])
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		if (pid)
		{
			while (argv[2][i] != '\0')
			{
				sendsignal(argv[2][i], pid);
				i++;
			}
			signal(SIGUSR1, sig_handler);
			sendsignal('\0', pid);
		}
		else
			ft_printf("PID error, must contain only numbers.");
	}
	else
		ft_printf("Error\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:23:58 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/23 11:43:07 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_str(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
		str = "(null)";
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
		count++;
	}
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:01:18 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/14 17:02:41 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("Is 'A' printable? %d\n", ft_isprint('A')); // Affichera 1
	printf("Is 31 printable? %d\n", ft_isprint(31));   // Affichera 0
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:52:42 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/14 16:54:21 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("Is 127 ASCII? %d\n", ft_isascii(127));  // Ceci affichera 1
	printf("Is 128 ASCII? %d\n", ft_isascii(128));  // Ceci affichera 0
	return 0;
}
*/
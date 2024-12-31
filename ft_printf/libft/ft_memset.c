/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:06:33 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/14 17:23:01 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*conv_ptr;
	size_t			i;

	conv_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		*(conv_ptr + i) = x;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	buffer[10];

	memset(buffer, 'A', sizeof(buffer));
	printf("Buffer after memset: %s\n", buffer);
	// Pour montrer l'effet clairement, mettons un caractère nul à la fin
	buffer[sizeof(buffer) - 1] = '\0';
	printf("Buffer after adding null terminator: %s\n", buffer);
	return (0);
}
*/
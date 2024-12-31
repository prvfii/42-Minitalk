/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:28:10 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/14 17:28:16 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*conv_ptr;
	size_t			i;

	conv_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		*(conv_ptr + i) = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	str[11] = "HelloWorld";
	int		i;

	printf("Before ft_bzero: %s\n", str);
	// Using ft_bzero to set the contents of the array to zero
	ft_bzero(str, sizeof(str));
	printf("After ft_bzero: ");
	for (i = 0; i < 10; i++)
	{
		// Printing each character as a numeric value because they are now zeros
		printf("%d ", str[i]);
	}
	printf("\n");
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:28:53 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/15 09:54:49 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*conv_dest;
	const char	*conv_src;
	size_t		i;

	if (!src && !dest)
		return (NULL);
	conv_dest = (char *)dest;
	conv_src = (const char *)src;
	i = 0;
	while (i < n)
	{
		*(conv_dest + i) = *(conv_src + i);
		i++;
	}
	return (dest);
}
/*
int main(void)
{
    char src[50] = "Hello, this is a test of the memcpy function.";
    char dest[50];

    // Copying string from src to dest
    ft_memcpy(dest, src, sizeof(src));

    // Printing the destination buffer
    printf("Copied string: %s\n", dest);

    // Example of copying part of a data array
    int src_ints[] = {1, 2, 3, 4, 5};
    int dest_ints[5];
    ft_memcpy(dest_ints, src_ints, 5 * sizeof(int));

    // Printing the destination integer array
    printf("Copied integers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", dest_ints[i]);
    }
    printf("\n");

    return 0;
}*/
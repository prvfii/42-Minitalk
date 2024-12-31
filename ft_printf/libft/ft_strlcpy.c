/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:14:25 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/15 10:14:34 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	i = 0;
	if (!dest || !src)
		return (0);
	if (size == 0)
		return (len_src);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}
/*
int	main(void)
{
	char	dest[50];
	char	*src;
	size_t	size;
	size_t	copied;

	src = "Firdawsse";
	size = 50;
	printf("Before copy: '%s'\n", dest);
	copied = ft_strlcpy(dest, src, size);
	printf("After copy: '%s'\n", dest);
	printf("Number of characters that would have been copied: %zu\n", copied);
	return (0);
}
*/

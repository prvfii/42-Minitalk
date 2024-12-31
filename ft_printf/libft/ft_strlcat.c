/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: firdawssemazouz <firdawssemazouz@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:45:53 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/15 17:02:24 by firdawssema      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	di;
	size_t	si;

	si = ft_strlen(src);
	if (!dst && size == 0)
		return (si);
	d = ft_strlen(dst);
	di = d;
	if (size <= di)
		return (size + si);
	s = 0;
	while (src[s] && d + 1 < size)
	{
		dst[d] = src[s];
		s++;
		d++;
	}
	dst[d] = 0;
	return (di + si);
}
/*
int	main(void)
{
	char	*dest;
	char	*src;
	size_t	size;
	size_t	copied;

	src = "Firdawsse";
	dest = "sallllut ";
	size = 50;
	printf("Before copy: '%s'\n", dest);
	copied = ft_strlcat(dest, src, size);
	printf("After cat: '%s'\n", dest);
	printf("Number of characters that would have been copied: %zu\n", copied);
	return (0);
}*/
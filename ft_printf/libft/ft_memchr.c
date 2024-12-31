/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:53:27 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/15 12:54:31 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*search;
	size_t			i;

	search = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (search[i] == c)
			return ((void *)(search + i));
		i++;
	}
	return (NULL);
}

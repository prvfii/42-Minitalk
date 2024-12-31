/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:36:07 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/16 13:29:57 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	finish = 0;
	if (start < slen)
		finish = slen - start;
	if (finish > len)
		finish = len;
	if (start >= slen)
	{
		new = (char *)malloc(sizeof(char));
		if (!new)
			return (0);
		new[0] = '\0';
		return (new);
	}
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, s + start, finish + 1);
	return (new);
}
/*
int	main(void)
{
	s = "Hello, world!";
	start = 7;
	len = 5;
	substring = ft_substr(s, start, len);
	if (substring)
	{
		printf("Substring: '%s'\n", substring);
		free(substring); // Remember to free the allocated memory
	}
	else
	{
		printf("Failed to allocate memory for substring.\n");
	}
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: firdawssemazouz <firdawssemazouz@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:36:44 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/17 19:16:22 by firdawssema      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*str;
	unsigned char	sc;

	str = (char *)s;
	sc = (unsigned char)c;
	i = ft_strlen(str);
	if (sc == str[i])
		return (&str[i]);
	if (sc == 0)
		return (str);
	while (i >= 0)
	{
		if (str[i] == sc)
			return (&str[i]);
		i--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: firdawssemazouz <firdawssemazouz@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:53:16 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/15 20:29:18 by firdawssema      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while (n > 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		n--;
	}
	return (0);
}
/*
int	main(void) {
	char str1[] = "Hel  ";
	char str2[] = "Hel";

	int result = memcmp(str1, str2, sizeof(str1));
	if(result == 0) {
		printf("The two strings are identical.\n");
	} else {
		printf("The two strings are different.\n");
	}

	return (0);
}*/
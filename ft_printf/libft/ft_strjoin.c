/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:46:19 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/16 14:45:05 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_allen(char const *s1, char const *s2)
{
	int	len1;
	int	len2;
	int	lenall;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	lenall = len1 + len2 + 1;
	return (lenall);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	str = (char *)malloc(sizeof(char) * ft_allen(s1, s2));
	if (!str)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char const	*s1;
	char const	*s2;
	char		*result;

	s1 = "Hello, ";
	s2 = "world!";
	result = ft_strjoin(s1, s2);
	if (result != NULL)
	{
		printf("Concatenated String: '%s'\n", result);
		free(result); // Remember to free the allocated memory
	}
	else
	{
		printf("Failed to allocate memory for the concatenated string.\n");
	}
	return (0);
}
*/
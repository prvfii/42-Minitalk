/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: firdawssemazouz <firdawssemazouz@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:51:20 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/17 19:19:44 by firdawssema      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countstrings(char const *str, char charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == charset)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != charset)
			i++;
	}
	return (count);
}

static int	ftstrlenwithoutsep(char const *str, char charset)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != charset)
		i++;
	return (i);
}

static char	*makeword(char const *str, char charset)
{
	int		i;
	char	*tab;
	int		strlen;

	strlen = ftstrlenwithoutsep(str, charset);
	tab = malloc((strlen + 1) * sizeof(char));
	i = 0;
	if (!tab)
		return (NULL);
	while (i < strlen)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

static void	ft_free(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**matrix;
	int		countstr;

	countstr = countstrings(s, c);
	matrix = malloc((countstr + 1) * sizeof(char **));
	i = 0;
	if (!matrix)
		return (NULL);
	while (i < countstr)
	{
		while (*s && *s == c)
			s++;
		matrix[i] = makeword(s, c);
		if (!matrix[i])
		{
			ft_free(matrix);
			return (NULL);
		}
		s += ftstrlenwithoutsep(s, c);
		i++;
	}
	matrix[i] = 0;
	return (matrix);
}
/*
int	main(void)
{
	char const	*str;
	char		sep;
	char		**words;

	str = "hello!";
	sep = ' ';
	words = ft_split(str, sep);
	// Print each word
	for (int i = 0; words[i] != NULL; i++)
	{
		printf("'%s'\n", words[i]);
		free(words[i]);
	}
	free(words);
	return (0);
}
*/
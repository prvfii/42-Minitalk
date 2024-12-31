/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:48:28 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/16 13:39:58 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
int	main(void)
{
	const char	*original = ((void *)0);
	char		*copie;

	// Utilisation de la fonction strdup pour dupliquer la chaîne
	copie = ft_strdup(original);

	// Affichage de la chaîne dupliquée
	printf("Chaîne originale: %s\n", original);
	printf("Chaîne dupliquée: %s\n", copie);
	// Libération de la mémoire allouée pour la copie
	free(copie);
	return (EXIT_SUCCESS);
}
*/
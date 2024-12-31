/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: firdawssemazouz <firdawssemazouz@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:25:54 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/15 20:27:17 by firdawssema      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
int	main(void)
{
	int		*array;
	size_t	n;

	n = 10;
	array = ft_calloc(n, sizeof(int));
	if (array == NULL)
	{
		fprintf(stderr, "Échec de l'allocation de mémoire\n");
		return (EXIT_FAILURE);
	}
	fprintf(stderr, "reussi");
	free(array);
	return (0);
}
*/
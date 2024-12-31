/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:03:19 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/14 17:05:56 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int main(void)
{
    char *str1 = "Hello, world!";
    char *str2 = "";
    char *str3 = "1234567890";

    printf("Length of '%s': %zu\n", str1, ft_strlen(str1));
    printf("Length of an empty string: %zu\n", ft_strlen(str2)); // Affichera 0
    printf("Length of '%s': %zu\n", str3, ft_strlen(str3)); // Affichera 10

    return 0;
}
*/

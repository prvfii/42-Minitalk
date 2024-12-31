/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:06:02 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/23 12:03:07 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_returnwrite(va_list arguments, const char str)
{
	int	count;

	count = 0;
	if (str == 'c')
		count += ft_char(va_arg(arguments, int));
	else if (str == 's')
		count += ft_str(va_arg(arguments, char *));
	else if (str == 'd' || str == 'i')
		count += ft_base(va_arg(arguments, int), "0123456789");
	else if (str == 'x')
		count += ft_ubase(va_arg(arguments, unsigned int), "0123456789abcdef");
	else if (str == 'X')
		count += ft_ubase(va_arg(arguments, unsigned int), "0123456789ABCDEF");
	else if (str == '%')
		count += ft_char('%');
	else if (str == 'p')
	{
		ft_str("0x");
		count += 2;
		count += ft_lbase(va_arg(arguments, unsigned long long),
				"0123456789abcdef");
	}
	else if (str == 'u')
		count += ft_ubase(va_arg(arguments, unsigned int), "0123456789");
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	arguments;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(arguments, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_returnwrite(arguments, format[i + 1]);
			i++;
		}
		else
			count += ft_char(format[i]);
		i++;
	}
	va_end(arguments);
	return (count);
}
/*
#include <stdio.h>
#define	TEST "\n%%\n"
int main()
{
	printf("%d", ft_printf(TEST));
	printf("%d", printf(TEST));
}*/

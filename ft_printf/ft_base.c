/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:29:23 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/23 11:40:29 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(long nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr = nbr * -1;
		count++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

int	ft_base(int nbr, char *base)
{
	int		len;
	long	num;
	int		nbrlen;

	nbrlen = ft_nbrlen(nbr);
	num = nbr;
	len = ft_strlen(base);
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num < len)
		write(1, &base[num], 1);
	if (num >= len)
	{
		ft_base((num / len), base);
		ft_base((num % len), base);
	}
	return (nbrlen);
}

int	ft_ubase(unsigned int nbr, char *base)
{
	int		len;
	long	num;
	int		nbrlen;

	nbrlen = 0;
	num = nbr;
	len = ft_strlen(base);
	if (num < len)
		nbrlen += write(1, &base[num], 1);
	if (num >= len)
	{
		nbrlen += ft_ubase((num / len), base);
		nbrlen += ft_ubase((num % len), base);
	}
	return (nbrlen);
}

int	ft_lbase(unsigned long long nbr, char *base)
{
	unsigned int		len;
	unsigned long long	num;
	int					nbrlen;

	nbrlen = 0;
	num = nbr;
	len = ft_strlen(base);
	if (num < len)
		nbrlen += write(1, &base[num], 1);
	if (num >= len)
	{
		nbrlen += ft_lbase((num / len), base);
		nbrlen += ft_lbase((num % len), base);
	}
	return (nbrlen);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:06:44 by fimazouz          #+#    #+#             */
/*   Updated: 2024/04/23 11:55:22 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>

int	ft_char(char c);
int	ft_str(char *str);
int	ft_nbrlen(long nbr);
int	ft_base(int nbr, char *base);
int	ft_ubase(unsigned int nbr, char *base);
int	ft_lbase(unsigned long long nbr, char *base);
int	ft_printf(const char *format, ...);
int	ft_returnwrite(va_list arguments, const char str);

#endif
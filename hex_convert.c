/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_convert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:20:37 by rel-mham          #+#    #+#             */
/*   Updated: 2022/11/04 09:22:21 by rel-mham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex_convert(unsigned long nbr, char c, int *l)
{
	char	*hex_arr;

	if (c == 'x')
		hex_arr = "0123456789abcdef";
	else if (c == 'X')
		hex_arr = "0123456789ABCDEF";
	if (nbr < 16)
		ft_putchar(hex_arr[nbr % 16], l);
	else
	{
		hex_convert(nbr / 16, c, l);
		hex_convert(nbr % 16, c, l);
	}
}

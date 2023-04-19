/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:16:09 by rel-mham          #+#    #+#             */
/*   Updated: 2022/11/04 09:17:10 by rel-mham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex_addr(unsigned long long nbr, int *l)
{
	char	*hex_arr;

	// if (c == 'x')
		hex_arr = "0123456789abcdef";
	// else if (c == 'X')
	// 	hex_arr = "0123456789ABCDEF";
	if (nbr < 16)
		ft_putchar(hex_arr[nbr % 16], l);
	else
	{
		hex_addr(nbr / 16, l);
		hex_addr(nbr % 16, l);
	}
}

void	ft_putaddr(void *nbr, int *l)
{
	ft_putstr("0x", l);
	hex_addr((unsigned long long)nbr, l);
}

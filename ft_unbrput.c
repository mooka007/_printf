/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbrput.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:18:16 by rel-mham          #+#    #+#             */
/*   Updated: 2022/11/04 09:20:16 by rel-mham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unbrput(unsigned int nbr, int *l)
{
	char			c;
	unsigned long	nb;

	nb = nbr;
	if (nb > 9)
	{
		ft_unbrput(nb / 10, l);
		ft_unbrput(nb % 10, l);
	}
	else
	{
		c = nb + '0';
		write (1, &c, 1);
		(*l)++;
	}
}

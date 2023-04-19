/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:15:06 by rel-mham          #+#    #+#             */
/*   Updated: 2022/10/19 09:31:41 by rel-mham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *l)
{
	int				neg;
	char			c;
	long long int	nb;

	nb = n;
	neg = -1;
	if (nb < 0)
	{
		write(1, "-", 1);
		(*l)++;
		nb *= neg;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10, l);
		ft_putnbr(nb % 10, l);
	}
	else
	{
		c = nb + '0';
		write (1, &c, 1);
		(*l)++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mham <rel-mham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:46:48 by rel-mham          #+#    #+#             */
/*   Updated: 2022/11/17 18:01:46 by rel-mham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_char(va_list ptr, char c, int *l)
{
	if (c == '%')
		ft_putchar('%', l);
	else if (c == 'c')
		ft_putchar(va_arg(ptr, int), l);
	else if (c == 's')
		ft_putstr(va_arg(ptr, char *), l);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ptr, int), l);
	else if (c == 'x' || c == 'X')
		hex_convert(va_arg (ptr, unsigned int), c, l);
	else if (c == 'p')
		ft_putaddr(va_arg(ptr, void *), l);
	else if (c == 'u')
		ft_unbrput(va_arg(ptr, unsigned int), l);
}

int	ft_printf(const char *s, ...)
{
	int		len;
	int		i;
	va_list	ptr;

	i = 0;
	len = 0;
	va_start(ptr, s);
	while (s[i])
	{
		if (s[i] != '%')
		{
			write(1, &s[i], 1);
			len++;
		}
		else if (s[i] == '%')
		{
			if (s[i + 1] == '\0')
				break ;
			check_char(ptr, s[i + 1], &len);
			i++;
		}
		i++;
	}
	va_end(ptr);
	return (len);
}

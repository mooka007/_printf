/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:00:04 by rel-mham          #+#    #+#             */
/*   Updated: 2022/11/04 20:31:23 by rel-mham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *l);
void	ft_putstr(char *s, int *l);
void	ft_putnbr(int n, int *l);
void	ft_putaddr(void *nbr, int *l);
void	ft_unbrput(unsigned int nbr, int *l);
void	hex_convert(unsigned long nbr, char c, int *l);
int		ft_printf(const char *s, ...);

#endif

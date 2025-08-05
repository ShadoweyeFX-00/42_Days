/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 08:43:21 by momakhkh          #+#    #+#             */
/*   Updated: 2025/08/02 10:40:14 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		ft_print_char('-');
		nb *= -1;
		i = nb;
	}
	i = nb;
	if (i >= 10)
		ft_putnbr(i / 10);
	ft_print_char(i % 10 + '0');
}
/*
int main ()
{
	ft_putnbr(-21483647);
}*/

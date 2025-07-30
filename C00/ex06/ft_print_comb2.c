/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 03:45:44 by momakhkh          #+#    #+#             */
/*   Updated: 2025/07/17 04:15:23 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int a, int b)
{
	ft_putchar((a / 10) + '0');
	ft_putchar((a % 10) + '0');
	ft_putchar(' ');
	ft_putchar((b / 10) + '0');
	ft_putchar((b % 10) + '0');
	if (a < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print_numbers(x, y);
			y++;
		}
		x++;
	}
}

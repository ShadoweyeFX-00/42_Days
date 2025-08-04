/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:32:04 by momakhkh          #+#    #+#             */
/*   Updated: 2025/08/04 18:14:05 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	pow;

	pow = 1;
	while (power > 0)
	{
		pow *= nb;
		power--;
	}
	if (!power)
		return (pow);
	return (0);
}
/*
int main ()
{
	int base = 2;
	int exponent  = 5;
	int result = ft_iterative_power(base, exponent);

	printf("%d to the power of %d is %d\n", base, exponent, result);
}*/

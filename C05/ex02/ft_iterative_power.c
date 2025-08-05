/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 16:32:04 by momakhkh          #+#    #+#             */
/*   Updated: 2025/08/05 13:32:40 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (res);
}
/*
int main ()
{
	int nb = 2;
	int power  = 5;
	int result = ft_iterative_power(nb, power);

	printf("%d to the power of %d is %d\n", nb, power, result);
}*/

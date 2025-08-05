/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 17:14:43 by momakhkh          #+#    #+#             */
/*   Updated: 2025/08/05 10:57:10 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb % 2)
		i = 1;
	else
		i = 2;
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		i += 2;
	}
	if (nb == 1)
		return (1);
	return (0);
}
/*
int main(void)
{
    int number = 16;
    int result = ft_sqrt(number);
    printf("ft_sqrt(%d) = %d\n", number, result);
    return 0;
}*/

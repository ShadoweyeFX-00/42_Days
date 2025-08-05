/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 08:37:43 by momakhkh          #+#    #+#             */
/*   Updated: 2025/08/02 08:45:49 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	x;
	int	res;
	int	sign;

	x = 0;
	res = 0;
	sign = 1;
	while (str[x] == ' ' || str[x] == '\t' || str[x] == '\f'
		|| str[x] == '\v' || str[x] == '\r' || str[x] == '\n')
		x++;
	while (str[x] == '-' || str[x] == '+')
		if (str[x++] == '-')
			sign *= -1;
	while (str[x] >= '0' && str[x] <= '9')
		res = res * 10 + ((str[x++] - '0') * sign);
	return (res);
}
/*
#include <stdio.h>
int main ()
{
	printf("%d\n", ft_atoi(" 	 ++--++----+++-+234jhb"));
}*/

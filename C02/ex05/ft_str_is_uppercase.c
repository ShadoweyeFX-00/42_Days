/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 05:16:46 by momakhkh          #+#    #+#             */
/*   Updated: 2025/07/28 05:28:17 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char*str)
{
	unsigned int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] > 90 || str[x] < 65)
			return (0);
		x++;
	}
	return (1);
}
/*
int main()
{
	char *str = "ABCDEFGHIJ";
	printf("%d", ft_str_is_uppercase(str));
}*/

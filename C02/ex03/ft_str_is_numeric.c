/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 04:39:15 by momakhkh          #+#    #+#             */
/*   Updated: 2025/07/31 10:25:19 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char*str)
{
	unsigned int	x;

	x = 0;
	while (str[x])
	{
		if (!(str[x] >= '0' && str[x] <= '9'))
			return (0);
		x++;
	}
	return (1);
}
/*
int	main()
{
	char str[] = "0123456d789";
	printf("%i", ft_str_is_numeric(str));
}*/

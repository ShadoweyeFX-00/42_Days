/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 04:41:53 by momakhkh          #+#    #+#             */
/*   Updated: 2025/07/28 05:26:11 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char*str)
{
	unsigned int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] > 122 || str[x] < 97)
			return (0);
		x++;
	}
	return (1);
}
/*
int main()
{
	char str[] = "wqeqwe";
	printf("%d", ft_str_is_lowercase(str));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 04:38:05 by momakhkh          #+#    #+#             */
/*   Updated: 2025/07/28 05:24:48 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	if (str [x] == '\0')
	{
		return (1);
	}
	while (str[x] != '\0')
	{
		if ((str[x] >= 'A' && str[x] <= 'Z')
			|| (str[x] >= 'a' && str[x] <= 'z'))
			x++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	printf("%d\n", ft_str_is_alpha("abcdefgh"));
	printf("%d\n", ft_str_is_alpha("abc4efgh"));
	printf("%d\n", ft_str_is_alpha("++__- -+--abcdefgh"));
}*/

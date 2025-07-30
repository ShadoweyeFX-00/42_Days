/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:53:39 by momakhkh          #+#    #+#             */
/*   Updated: 2025/07/29 09:46:50 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char*s1, char*s2)
{
	unsigned int	x;

	x = 0;
	while (s1[x] && s2[x] && s1[x] == s2[x])
	{
		x++;
	}
	return (s1[x] - s2[x]);
}
/*
int main ()
{
	char str[] = "";

	printf("%d\n", ft_strcmp("ShadoweyeFX", "ShadoweyeFX"));
}*/

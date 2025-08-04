/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:50:12 by momakhkh          #+#    #+#             */
/*   Updated: 2025/08/03 08:26:47 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char*s1, char*s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (s1[x] && s2[x] && s1[x] == s2[x] && x < n)
	{
		x++;
	}
	if (x != n)
		return (s1[x] - s2[x]);
	else
		return (0);
}
/*
int main ()
{
	char s1[] = "AdaM";
	char s2[] = "Adam";
	printf("%i", ft_strncmp(s1, s2, 3));
}*/

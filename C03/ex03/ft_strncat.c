/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:56:16 by momakhkh          #+#    #+#             */
/*   Updated: 2025/08/03 08:26:55 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char*dest, char*src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (dest[x])
	{
		x++;
	}
	while (src[y] && y < nb)
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
/*
int main ()
{
	char dest[69] = "momakhkh";
	char src[] = " kiwiko";
	ft_strncat(dest, src, 2);
	printf("%s", dest);
}*/

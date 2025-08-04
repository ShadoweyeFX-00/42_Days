/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:52:13 by momakhkh          #+#    #+#             */
/*   Updated: 2025/08/03 08:26:50 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char*dest, char*src)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (dest[x])
	{
		x++;
	}
	while (src[y])
	{
		dest[x] = src [y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
/*
int main ()
{
	char src[] = " wqe";
	char dest[] = "mouad";	
	ft_strcat(dest, src);
	printf("%s\n", dest);
}*/

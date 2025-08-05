/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:54:48 by momakhkh          #+#    #+#             */
/*   Updated: 2025/08/05 10:54:50 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int	x;
	       
	x = 0;
	while (src[x])
        x++;
	char *dest = malloc(x + 1);
	if (!dest)
		return NULL;
	
	int y;
	
	y = 0;
	while (y <= x)
	{
		dest[y] = src[y];
		y++;
	}
	return dest;
}

int main(void)
{
	char *s = ft_strdup("Shadow");
	printf("%s\n", s);
	free(s);
}

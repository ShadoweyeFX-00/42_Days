/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:57:01 by momakhkh          #+#    #+#             */
/*   Updated: 2025/08/03 08:26:59 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char*str, char*to_find)
{
	unsigned int	x;

	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		x = 0;
		while (to_find[x] && str[x] && to_find[x] == str[x])
			x++;
		if (to_find[x] == '\0')
			return (str);
		str++;
	}
	return (0);
}
/*
int main ()
{
	char str[] = "aabc";
	char to_find[] = "abc";
	char *result = ft_strstr(str , to_find);
	printf("%s\n", result);
}*/

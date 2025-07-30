/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 04:43:45 by momakhkh          #+#    #+#             */
/*   Updated: 2025/07/28 05:32:53 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	x;

	x = 0;
	while (str[x])
	{
		if ((str[x] >= 'a' && str[x] <= 'z')
			|| (str[x] >= 'A' && str[x] <= 'Z')
			|| (str[x] >= '0' && str[x] <= '9'))
		{
			if (str[x] >= 'a' && str[x] <= 'z')
				str[x] = str[x] - 32;
			x++;
			while (((str[x] >= 'a' && str[x] <= 'z')
					|| (str[x] >= 'A' && str[x] <= 'Z')
					|| (str[x] >= '0' && str[x] <= '9')) && str[x])
			{
				if (str[x] >= 'A' && str[x] <= 'Z')
					str[x] = str[x] +32;
				x++;
			}
		}
		x++;
	}
	return (str);
}
/*
int main ()
{
	char	str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("%s \n",ft_strcapitalize(str));
	return 0;
}*/

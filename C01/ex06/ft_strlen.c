/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 20:29:59 by momakhkh          #+#    #+#             */
/*   Updated: 2025/07/20 21:08:45 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	z;

	z = 0;
	while (*str != '\0')
	{
		z++;
		str++;
	}
	return (z);
}
//#include <stdio.h>
//int main(int argc, char **argv)
//{
//	if(argc == 2)
//		printf("%d\n", ft_strlen(argv[1]));	
//}

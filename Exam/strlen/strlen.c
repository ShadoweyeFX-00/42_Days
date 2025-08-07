/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:41:54 by momakhkh          #+#    #+#             */
/*   Updated: 2025/08/07 17:41:55 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int x = 0;

	while (str[x])
		x++;
	return (x);
}

int main (int argc, char **argv)
{
	int y = 0;
	
	while(argv[1][y])
		y++;
	return y;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:42:00 by momakhkh          #+#    #+#             */
/*   Updated: 2025/08/07 17:42:01 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int x;

	if (argc == 2)
	{
		x = 0;
		while (argv[1][x])
		{
			if (argv[1][x] >= 'a' && argv[1][x] <= 'z')
				argv[1][x] = ('m' - (argv[1][x] - 'n'));
			else if (argv[1][x] >= 'A' && argv[1][x] <= 'Z')
				argv[1][x] = ('M' - (argv[1][x] - 'N'));
			write(1, &argv[1][x], 1);
			x++;
		}
	}
	write(1, "\n", 1);
	return 0;
}

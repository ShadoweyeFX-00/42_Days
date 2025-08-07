/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:41:16 by momakhkh          #+#    #+#             */
/*   Updated: 2025/08/07 17:41:17 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int x = 0;

	if (argc == 2)
	{
		while (argv[1][x])
		{
			while (argv[1][x] == ' ' || == '\t' || argv[1][x] == '\n')
				x++;
			while (argv[1][x] != ' ' && argv[1][x] != '\t' && argv[1][x] != '\n' && argv[1][x])
			{
				write(1, &argv[1][x], 1);
				x++;
			}
			break;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n");
}

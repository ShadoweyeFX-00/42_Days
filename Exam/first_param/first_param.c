/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:41:12 by momakhkh          #+#    #+#             */
/*   Updated: 2025/08/07 17:41:13 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int x = 0;

	if (argc == 1)
		write(1, "\0", 1);
	else if (argc >= 2)
	{
		while (argv[1][x])
			write(1, &argv[1][x++], 1);
		write(1, "\n", 1);
	}
	return 0;
}

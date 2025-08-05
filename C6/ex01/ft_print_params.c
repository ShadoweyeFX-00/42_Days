/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 09:07:14 by momakhkh          #+#    #+#             */
/*   Updated: 2025/08/03 16:41:38 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		write(1, &str[x++], 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	x;

	x = 1;
	while (x < argc)
		ft_putstr(argv[x++]);
	return (0);
}

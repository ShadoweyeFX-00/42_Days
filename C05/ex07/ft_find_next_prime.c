/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 18:19:51 by momakhkh          #+#    #+#             */
/*   Updated: 2025/08/05 10:57:17 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	if (nb <= 1)
		return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 1)
		return (2);
	while (i)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}

/*int main ()
{
    printf("%d\n", ft_find_next_prime(10));
}*/

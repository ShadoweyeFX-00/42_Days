/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 20:21:30 by momakhkh          #+#    #+#             */
/*   Updated: 2025/07/20 21:08:36 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a / *b;
	*b = *a % *b;
	*a = x;
}
/*
int main()
{
	int a = 31;
	int b = 17;

	ft_ultimate_div_mod(&a, &b);
	printf("A = %d , B = %d ,", a, b);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momakhkh <momakhkh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 17:40:41 by momakhkh          #+#    #+#             */
/*   Updated: 2025/08/07 17:40:42 by momakhkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*rang;
	int	i;

	if (max > min)
	{
		rang = (int *)malloc(sizeof(int) * (max - min));
		i = min;
		while (i < max)
		{
			rang[i - min] = i;
			i++;
		}
	}
	else
		rang = NULL;
	return (rang);
}

int main(void)
{
	int *arr = ft_range(3, 8);
	for (int i = 0; i < 8 - 3; i++)
		printf("%d ", arr[i]);
	printf("\n");
	free(arr);
}

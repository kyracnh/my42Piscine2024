/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanmazir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:03:26 by aanmazir          #+#    #+#             */
/*   Updated: 2024/08/12 16:36:03 by aanmazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	while (len <= 0)
		return (0);
	tab = (int *)malloc(sizeof(int) * len);
	if (!tab)
		return (0);
	i = 0;
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
/*int main()
{
	int a = 5, i = 0;
	int b = 5;
	int *n = ft_range(a, b);
	printf("%d\n", n);
	while (i < (b - a))
	{
		printf("%d\n", n[i]);
		i++;
	}
}*/

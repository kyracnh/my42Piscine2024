/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanmazir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 11:43:39 by aanmazir          #+#    #+#             */
/*   Updated: 2024/08/12 16:36:56 by aanmazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * len);
	if (!range)
		return (-1);
	i = 0;
	while (min < max)
		(*range)[i++] = min++;
	return (len);
}
/*int main()
{
	int min = 1;
	int max = 5, i = 0;
	int *range;
	int ul_range = ft_ultimate_range(&range, min, max);
	while (i < ul_range)
	{
		printf("%d\n", range[i++]);
	}
}*/

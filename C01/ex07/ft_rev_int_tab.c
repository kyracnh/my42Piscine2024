/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanmazir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:36:08 by aanmazir          #+#    #+#             */
/*   Updated: 2024/07/29 18:39:12 by aanmazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		swp = tab[i];
		tab[i] = tab[j];
		tab[j] = swp;
		i++;
		j--;
	}
}
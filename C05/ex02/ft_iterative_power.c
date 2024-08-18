/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanmazir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:47:56 by aanmazir          #+#    #+#             */
/*   Updated: 2024/08/08 09:38:33 by aanmazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (nb > 1 && power > 1)
	{
		while (power > 1)
		{
			i *= nb;
			power--;
		}
	}
	return (i);
}

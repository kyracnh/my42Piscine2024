/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanmazir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:04:06 by aanmazir          #+#    #+#             */
/*   Updated: 2024/08/08 09:56:37 by aanmazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	n;

	n = nb;
	i = 2;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (nb >= 2)
	{
		while (i * i <= n)
		{
			if (i * i == n)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
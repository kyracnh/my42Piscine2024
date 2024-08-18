/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanmazir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:49:04 by aanmazir          #+#    #+#             */
/*   Updated: 2024/08/08 10:01:02 by aanmazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	counter;

	counter = 2;
	if (nb <= 1)
		return (0);
	while (counter <= (nb / 2))
	{
		if (!(nb % counter))
			return (0);
		else
			counter += 1;
	}
	return (1);
}

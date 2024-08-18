/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanmazir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:46:34 by aanmazir          #+#    #+#             */
/*   Updated: 2024/08/10 10:51:07 by aanmazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arc, char **arv)
{
	int	i;
	int	counter;

	counter = arc - 1;
	while (counter >= 1)
	{
		i = 0;
		while (arv[counter][i] != '\0')
		{
			write(1, &arv[counter][i++], 1);
		}
		write(1, "\n", 1);
		counter--;
	}
}

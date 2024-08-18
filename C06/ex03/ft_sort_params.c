/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanmazir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:51:08 by aanmazir          #+#    #+#             */
/*   Updated: 2024/08/10 10:55:23 by aanmazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	putchar(char c)
{
	write(1, &c, 1);
}

char	f_swap(char **f, char **l)
{
	char	*swp;

	swp = *f;
	*f = *l;
	*l = swp;
	return (0);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int arc, char **arv)
{
	int	i;
	int	counter;

	counter = 1;
	while (counter < arc - 1)
	{
		i = 1;
		while (i < arc - 1)
		{
			if (ft_strcmp(arv[i], arv[i + 1]) > 0)
			{
				f_swap(&arv[i], &arv[i + 1]);
			}
			i++;
		}
		counter++;
	}
	i = 1;
	while (i < arc)
	{
		putstr(arv[i]);
		putchar('\n');
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanmazir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:02:02 by aanmazir          #+#    #+#             */
/*   Updated: 2024/08/08 09:53:23 by aanmazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fib;

	if (index <= 1)
		return (index);
	else if (index < 0)
		return (-1);
	else
		fib = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (fib);
}

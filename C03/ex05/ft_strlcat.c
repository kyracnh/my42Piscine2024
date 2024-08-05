/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanmazir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:37:33 by aanmazir          #+#    #+#             */
/*   Updated: 2024/08/05 14:20:19 by aanmazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	srclength;
	unsigned int	dstlength;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	srclength = 0;
	dstlength = 0;
	while (src[srclength] != '\0')
		srclength++;
	while (dest[dstlength] != '\0')
		dstlength++;
	j = dstlength;
	if (size == 0 || size <= dstlength)
		return (srclength + size);
	while (src[i] != '\0' && i < size - dstlength - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dstlength + srclength);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanmazir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:31:06 by aanmazir          #+#    #+#             */
/*   Updated: 2024/08/12 16:38:23 by aanmazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

int	global_length(int size, char **strs, char sep_len)
{
	int	g_length;
	int	i;

	g_length = 0;
	i = 0;
	while (i < size)
	{
		g_length += ft_strlen(strs[i]);
		g_length += sep_len;
		i++;
	}
	g_length -= sep_len;
	return (g_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		g_length;
	char	*j;
	char	*str;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	g_length = global_length(size, strs, ft_strlen(sep));
	str = (char *)malloc((g_length + 1) * sizeof(char));
	j = str;
	if (!j)
		return (0);
	i = 0;
	j[0] = '\0';
	while (i < size)
	{
		j = ft_strcat(j, strs[i]);
		if (i < size - 1)
		{
			j = ft_strcat(j, sep);
		}
		i++;
	}
	j += '\0';
	return (j);
}

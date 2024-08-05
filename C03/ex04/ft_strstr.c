/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanmazir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 20:28:35 by aanmazir          #+#    #+#             */
/*   Updated: 2024/08/04 16:30:12 by aanmazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = 0;
	if (to_find[len] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + len] == to_find[len] && str[i + len] != '\0')
			len++;
		if (to_find[len] == '\0')
			return (str + i);
		i++;
		len = 0;
	}
	return (0);
}

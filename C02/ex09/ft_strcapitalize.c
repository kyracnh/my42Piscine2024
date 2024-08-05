/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanmazir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:58:21 by aanmazir          #+#    #+#             */
/*   Updated: 2024/08/03 18:21:17 by aanmazir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[i] <= 'z')
		{
			str[0] -= 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] >= 32 && str[i - 1] <= 48)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
int main()
{
	char *h = "hello jlaksj 5uyk -hj KH llm+lkhll";
	printf("%s\n", ft_strcapitalize(h));
}

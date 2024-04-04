/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:16:21 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/19 11:43:39 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_str_is_alpha_or_numeric(char str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		return (1);
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (!ft_str_is_alpha_or_numeric(str[i - 1])
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (ft_str_is_alpha_or_numeric(str[i - 1])
			&& (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int     main(void)
{
        char    test1[] = "salut, comment tu vas ? 
	42mots quarante-deux; cinquante+et+un";

        ft_strcapitalize(test1);
        printf("%s\n", test1);
        return (0);
}*/

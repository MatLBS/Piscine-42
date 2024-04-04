/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:03:42 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/17 13:41:30 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z' )
			return (0);
		i++;
	}
	return (1);
}
/*
int     main(void)
{
        char    test1[] = "ETjV";
	int	autre;

        autre = ft_str_is_uppercase(test1);
	printf("%d\n", autre);
        return (0);
}*/

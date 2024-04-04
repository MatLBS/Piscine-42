/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:53:59 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/17 13:38:35 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9' ))
			return (0);
		i++;
	}
	return (1);
}
/*
int     main(void)
{
        char    test1[] = "";
	int	autre;

        autre = ft_str_is_numeric(test1);
	printf("%d\n", autre);
        return (0);
}*/

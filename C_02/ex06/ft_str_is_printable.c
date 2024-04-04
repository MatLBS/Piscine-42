/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:18:04 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/19 15:12:17 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}
/*
int     main(void)
{
        char    test1[] = "eohvbi hi\n u";
	int	autre;

        autre = ft_str_is_printable(test1);
	printf("%d\n", autre);
        return (0);
}*/

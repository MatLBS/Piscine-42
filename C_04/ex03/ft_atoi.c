/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:22:30 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/27 11:48:44 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	valeur;
	int	sign;

	valeur = 0;
	sign = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	if (sign % 2 == 0)
		sign = 1;
	else
		sign = -1;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		valeur = valeur * 10 + str[i] - '0';
		i++;
	}
	return (sign * valeur);
}
/*
int	main(void)
{
	printf("42:%d\n", ft_atoi("  \n  42t4457"));
	printf("-42:%d\n", ft_atoi(" --+-42sfs:f545"));
	printf("0:%d\n", ft_atoi("\0 1337"));
	printf("0:%d\n", ft_atoi("-0"));
	printf("0:%d\n", ft_atoi(" - 1 3 2 5 6 3 2 1 6 7"));
	printf("-1325632167:%d\n", ft_atoi("-1325632167"));
	printf("-100:%d\n", ft_atoi("-100"));
	printf("min:%d\n", ft_atoi("\t---+2147483648"));
	printf("max:%d\n", ft_atoi("\v2147483647"));
}

int	main(void)
{
	if (argc != 2)
		return (0);
	char	test[] = "  \n-12345";

	printf("La valeur de la chaine est : %d\n", ft_atoi(argv[1]));
	printf("La valeur de la chaine est : %d\n", ft_atoi(test));
	return (0);
}*/

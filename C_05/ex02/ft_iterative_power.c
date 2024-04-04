/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:02:56 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/24 15:24:24 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	multiplicateur;

	i = 1;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	multiplicateur = nb;
	while (i < power)
	{
		nb = nb * multiplicateur;
		i++;
	}
	return (nb);
}
/*
   int	main(void)
   {
   printf("0:%d\n", ft_iterative_power(0, 0));
   printf("0:%d\n", ft_iterative_power(1, -1));
   printf("1:%d\n", ft_iterative_power(10, 0));
   printf("10:%d\n", ft_iterative_power(10, 1));
   printf("100:%d\n", ft_iterative_power(10, 2));
   printf("216:%d\n", ft_iterative_power(6, 3));
   }*/

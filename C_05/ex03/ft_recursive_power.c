/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:14:34 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/25 14:13:31 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
   int	main(void)
   {
   printf("0:%d\n", ft_recursive_power(0, 0));
   printf("0:%d\n", ft_recursive_power(1, -1));
   printf("1:%d\n", ft_recursive_power(10, 0));
   printf("10:%d\n", ft_recursive_power(10, 1));
   printf("100:%d\n", ft_recursive_power(10, 2));
   printf("216:%d\n", ft_recursive_power(6, 3));
   }*/

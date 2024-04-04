/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:39:39 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/24 09:54:13 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
   int	main(void)
   {
   printf("0:%d\n", ft_recursive_factorial(-10));
   printf("0:%d\n", ft_recursive_factorial(-1));
   printf("1:%d\n", ft_recursive_factorial(0));
   printf("1:%d\n", ft_recursive_factorial(1));
   printf("3628800:%d\n", ft_recursive_factorial(10));
   printf("6:%d\n", ft_recursive_factorial(3));
   }*/

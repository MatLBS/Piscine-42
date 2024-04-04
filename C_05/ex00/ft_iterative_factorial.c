/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:26:04 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/24 09:52:49 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	resultat;

	i = 1;
	resultat = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		resultat = resultat * i;
		i++;
	}
	return (resultat);
}
/*
   int	main(void)
   {
   printf("0:%d\n", ft_iterative_factorial(-10));
   printf("0:%d\n", ft_iterative_factorial(-1));
   printf("1:%d\n", ft_iterative_factorial(0));
   printf("1:%d\n", ft_iterative_factorial(1));
   printf("3628800:%d\n", ft_iterative_factorial(10));
   printf("6:%d\n", ft_iterative_factorial(3));
   }*/

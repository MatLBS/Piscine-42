/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:01:03 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/25 14:15:02 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_find_next_prime(12));
	return (0);
}


   int	main(void)
   {
   printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
   ft_find_next_prime(-1) == 2 ? "OK" : "Fail",
   ft_find_next_prime(-3) == 2 ? "OK" : "Fail",
   ft_find_next_prime(0) == 2 ? "OK" : "Fail",
   ft_find_next_prime(1) == 2 ? "OK" : "Fail",
   ft_find_next_prime(2) == 2 ? "OK" : "Fail",
   ft_find_next_prime(3) == 3 ? "OK" : "Fail",
   ft_find_next_prime(4) == 5 ? "OK" : "Fail",
   ft_find_next_prime(5) == 5 ? "OK" : "Fail",
   ft_find_next_prime(6) == 7 ? "OK" : "Fail",
   ft_find_next_prime(7) == 7 ? "OK" : "Fail",
   ft_find_next_prime(10) == 11 ? "OK" : "Fail",
   ft_find_next_prime(11) == 11 ? "OK" : "Fail",
   ft_find_next_prime(13) == 13 ? "OK" : "Fail",
   ft_find_next_prime(19) == 19 ? "OK" : "Fail",
   ft_find_next_prime(20) == 23 ? "OK" : "Fail"
   );
   }*/

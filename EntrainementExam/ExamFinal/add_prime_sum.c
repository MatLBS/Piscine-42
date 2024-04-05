/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 09:08:36 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/02 10:06:24 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	is_prime(int nb)
{
	int	i; 
	
	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	else 
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	valeur;

	i = 0;
	valeur = 0;
	while (str[i] != '\0')
	{
		valeur = valeur * 10 + str[i] - '0';
		i++;
	}
	return (valeur);
	printf("%d\n", valeur);
}

int	main(int argc, char **argv)
{
	int	i;
	int	nb;

	i = 2;
	nb = 0;
	if (argc == 2)
	{
		while (i <= ft_atoi(argv[1]))
		{
			if (is_prime(i))
			{
				nb += i; 
			}
			i++;
		}
	}
	ft_putnbr(nb);
	write (1, "\n", 1);
	return (0);
}

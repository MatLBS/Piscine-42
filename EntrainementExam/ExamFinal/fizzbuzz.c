/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:22:02 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/02 11:33:50 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar (nb + '0');
	else
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
}
int	main(void)
{
	int	i;
	int	nb;

	i = 1;
	nb = 100;
	while (i <= nb)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write (1, "FizzBuzz", 8);
			write (1, "\n", 1);
		}
		else if (i % 3 == 0)
		{
			write (1, "Fizz", 4);
			write (1, "\n", 1);
		}
		else if (i % 5 == 0)
		{
			write (1, "Buzz", 4);
			write (1, "\n", 1);
		}
		else
		{
			ft_putnbr(i);
			write (1, "\n", 1);
		}
		i++;
	}
}

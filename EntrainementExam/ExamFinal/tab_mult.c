/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:41:56 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/02 15:56:40 by matle-br         ###   ########.fr       */
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
	{
		ft_putchar (nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	ft_atoi(char *str)
{
	int	valeur;
	int	i;

	valeur = 0;
	i = 0;
	while (str[i])
	{
		valeur = valeur * 10 + str[i] - '0';
		i++;
	}
	return (valeur);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (i < 10)
	{
		ft_putnbr(i);
		write (1, " x ", 3);
		ft_putnbr(ft_atoi(argv[1]));
		write (1, " = ", 3);
		ft_putnbr(i * ft_atoi(argv[1]));
		write (1, "\n", 1);
		i++;
	}
	return (0);
}

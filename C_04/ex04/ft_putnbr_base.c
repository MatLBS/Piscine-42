/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 09:23:03 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/31 14:46:49 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	is_base_valid(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = 0;
		while (str[j] != '\0')
		{
			if (str[i] == str[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	print_base(long int decimal, char *base, long int base_len)
{
	if (decimal >= base_len)
	{
		print_base(decimal / base_len, base, base_len);
	}
	write(1, base + (decimal % base_len), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	long int	i;

	base_len = is_base_valid(base);
	if (!base_len)
		return ;
	i = nbr;
	if (i < 0)
	{
		i = i * -1;
		write (1, "-", 1);
	}
	print_base(i, base, base_len);
}
/*
int	main(void)
{
	ft_putnbr_base(-5478773672, "0123456879");
	return (0);
}
*/

int	main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}

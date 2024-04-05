/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:20:53 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/03 10:11:21 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[i] == '\0' || str[i + 1] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	print_base(char *base, long nb, int size)
{
	if (nb >= size)
	{
		print_base(base, nb / size, size);
	}
	write (1, base + (nb % size), 1);
}

void ft_putnbr_base(int nbr, char *base)
{
	long	i;
	int	base_len;

	i = nbr;
	if (check_base(base) == 0)
		return ;
	base_len = ft_strlen(base);
	if (i < 0)
	{
		write (1, "-", 1);
		i = -i;
	}
	print_base(base, i, base_len);
}

int     main(void)
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


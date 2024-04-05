/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:36:01 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/02 12:08:50 by matle-br         ###   ########.fr       */
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

int	ft_atoi(char *str)
{
	int	i;
	int	valeur;

	i = 0;
	valeur = 0;
	while (str[i])
	{
		valeur = valeur * 10 + str[i] - '0';
		i++;
	}
	return (valeur);
}

void	print_base(int nb, char *base, int base_len)
{
	if (nb >= base_len)
	{
		print_base(nb / base_len, base, base_len);
	}
	write (1, base + (nb % base_len), 1);
}

int	main(int argc, char **argv)
{
	char *base_hexa;
	int base_len;

	base_hexa = "0123456789abcdef";
	base_len = ft_strlen(base_hexa);
	if (argc == 2)
	{
		print_base(ft_atoi(argv[1]), base_hexa, base_len);
	}
	write (1, "\n", 1);
	return (0);
}

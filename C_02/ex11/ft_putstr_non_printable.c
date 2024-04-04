/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:43:20 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/19 17:20:21 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hexa;
	int		i;
	int		division;
	int		modulo;

	hexa = "0123456789abcdef";
	i = 0;
	division = 0;
	modulo = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			division = (unsigned char)str[i] / 16;
			modulo = (unsigned char)str[i] % 16;
			ft_putchar('\\');
			ft_putchar(hexa[division]);
			ft_putchar(hexa[modulo]);
		}
		else
		{	
			ft_putchar(str[i]);
		}
	i++;
	}
}

void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "Coucou\ntu vas bien ?";
	ft_putstr("Coucou\\0atu vas bien ?:");
	ft_putstr_non_printable(c);
	char d[] = "\x81\xbe";
	ft_putstr("\n\\81\\be:");
	ft_putstr_non_printable(d);
}

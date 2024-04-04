/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:39:34 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/01 14:56:41 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_base_valid(char *str);
int	index_num(char c, char *base);
int	ft_strlen(char *str);
int	ft_atoi(char *str, int base_len, char *base);
int	ft_atoi_base(char *str, char *base);

void	print_base(long int nb, char *base, long int taille_finale, char *tab)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		tab[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
	{
		tab[0] = base[0];
	}
	while (nb > 0)
	{
		tab[taille_finale - i] = base[nb % ft_strlen(base)];
		nb = nb / ft_strlen(base);
		i++;
	}
	tab[taille_finale] = '\0';
}

int	taille_base_to(int nb, char *base_to)
{
	int	valeur_base;
	int	taille_base;

	taille_base = 0;
	valeur_base = ft_strlen(base_to);
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb /= valeur_base;
		taille_base++;
	}
	return (taille_base);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		taille_finale;
	char	*tab;

	taille_finale = 0;
	if (is_base_valid(base_from) == 0)
		return (0);
	if (is_base_valid(base_to) == 0)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	if (nb < 0)
	{
		taille_finale++;
	}
	taille_finale += taille_base_to(nb, base_to);
	tab = malloc (sizeof(char) * taille_finale + 1);
	if (tab == NULL)
		return (0);
	print_base(nb, base_to, taille_finale, tab);
	return (tab);
}
/*
int	main(void)
{
	printf("42:%s\n", ft_convert_base("--2a", "0123456789abcdef", "0123456789"));
	printf("-2a:%s\n", ft_convert_base("-42", "0123456789", "0123456789abcdef"));
}*/

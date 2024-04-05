/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:21:28 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/04 14:45:08 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	nb_letters(int nb)
{
	int	i;

	i = 0;
	if (nb < 1)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int	len;
	int	i;
	int	len1;
	int	flag;
	char	*tab;

	flag = 0;
	i = 0;
	len1 = 0;
	if (nbr < 0)
	{
		len1 = 1;
		flag = 1;
		nbr = -nbr;
	}
	len = nb_letters(nbr) + len1;
	tab = malloc(sizeof(char) * len + 1);
	if (tab == NULL)
		return (0);
	tab[len] = '\0';
	while (len - len1 > 0)
	{
		tab[len - 1] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	if (flag == 1)
	{
		tab[0] = '-';
	}
	return (tab);
}


int	main(void)
{
	printf("%s\n", ft_itoa(-0));
	return (0);
}

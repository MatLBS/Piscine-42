/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:00:31 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/04 09:58:37 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_nblen(int size)
{
	int	i;

	i = 0;
	if (size < 1)
		i++;
	while (size > 0)
	{
		size /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int	flag;
	int	len;
	char	*tab;
	int	len1;

	flag = 0;
	len1 = 0;
	if (nbr < 0)
	{
		len1 = 1;
		nbr = -nbr;
		flag = 1;
	}
	len = ft_nblen(nbr) + len1;
	tab = malloc(sizeof(char) * (len + 1));
	if (tab == NULL)
		return (0);
	tab[len] = '\0';
	while ((len - len1) > 0)
	{
		tab[len - 1] = nbr % 10 + '0';
		len--;
		nbr /= 10;
	}
	if (flag == 1)
		tab[0] = '-';
	return (tab);
}

int	main(void)
{
	int	i;

	i = -0;
	printf("%s\n", ft_itoa(i));
	return (0);
}

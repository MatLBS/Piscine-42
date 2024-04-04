/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 10:57:17 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/18 09:08:54 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	fin;
	int	temporaire;

	i = 0;
	fin = size - 1;
	while (i < fin)
	{
		temporaire = tab[i];
		tab[i] = tab[fin];
		tab[fin] = temporaire;
		i++;
		fin--;
	}
}

#include <stdio.h>
int     main(void)
{
        int	index;
	int	tab[] = {1, 2, 3, 4, 5};

	index = 0;

	while (tab[index] != '\0')
	{
		printf("%d ", tab[index]);
		index++;
	}
	index = 0;
	printf("\n");
	ft_rev_int_tab(tab, 5);

	while (tab[index] != '\0')
	{
		printf("%d ", tab[index]);
		index++;
	}

        return (0);
}

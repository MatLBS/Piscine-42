/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 21:16:21 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/18 09:18:04 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	fin;
	int	i;
	int	y;
	int	temporaire;

	i = 0;
	y = 0;
	fin = size - 1;
	while (y < fin)
	{
		i = 0;
		while (i < fin)
		{
			if (tab[i] > tab[i + 1])
			{
				temporaire = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temporaire;
			}
			i++;
		}
		y++;
	}
}

int     main(void)
{
        int     index;
        int     tab[] = {5, 4, 3, 2, 1, 9, 8, 45, 16};

        index = 0;

        while (tab[index] != '\0')
        {
                printf("%d ", tab[index]);
                index++;
        }
        index = 0;
        printf("\n");
        ft_sort_int_tab(tab, 9);

        while (tab[index] != '\0')
        {
                printf("%d ", tab[index]);
                index++;
        }

        return (0);
}

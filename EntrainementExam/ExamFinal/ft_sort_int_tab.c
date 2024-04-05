/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:05:19 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/02 19:12:30 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	fin;
	int	j;
	int	temp;

	fin = size - 1;
	j = 0;
	while (j < fin)
	{
		i = 0;
		while (i < fin)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = temp;
			}
			i++;
		}
		j++;
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


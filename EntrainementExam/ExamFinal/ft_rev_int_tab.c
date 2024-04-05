/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:54:07 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/02 19:01:40 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	fin;

	i = 0;
	fin = size - 1;
	while (i < fin)
	{
		temp = tab[i];
		tab[i] = tab[fin];
		tab[fin] = temp;
		i++;
		fin--;
	}
}

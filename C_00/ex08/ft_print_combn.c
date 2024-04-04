/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 08:30:34 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/31 12:06:56 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	if (0 < n && n < 10)
	{
		char	min_tab[n];
		char	max_tab[n];
		int	i;
		int	base;

		base = 0;
		i = 0;
		while (i < n)
		{
			min_tab[i] = '0' + i;
			max_tab[i] = (10 - n) + i + '0';
			i++;
		}
		ft_affichage(mi_tab, max_tab, n);


	}

}

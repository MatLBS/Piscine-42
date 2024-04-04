/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:45:13 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/16 16:13:57 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	test(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || (i == y && j == x && i != 1 && j != 1))
		ft_putchar('/');
	else if ((i == 1 && j == x) || (i == y && j == 1))
		ft_putchar('\\');
	else if (i == 1 || i == y || j == 1 || j == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i >= 0 && i < y)
	{
		i++;
		j = 0;
		while (j >= 0 && j < x)
		{
			j++;
			test(i, j, x, y);
		}
		ft_putchar('\n');
	}
}

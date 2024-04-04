/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:46:08 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/16 19:44:43 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}
/*
int	main(void)
{
	int	nombre1;
	int	nombre2;

	nombre1 = 10;
	nombre2 = 3;
	ft_ultimate_div_mod(&nombre1, &nombre2);
	printf("%d\n", nombre1);
	printf("%d\n", nombre2);
	return (0);
}*/

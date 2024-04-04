/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:18:01 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/16 19:42:39 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
int	main(void)
{
	int	nombre1;
	int	nombre2;
	int	resultat;
	int	reste;

	ft_div_mod (nombre1, nombre2, &resultat, &reste);
	return (0);
}*/

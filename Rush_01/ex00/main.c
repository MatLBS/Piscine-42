/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostrub <rostrub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 10:48:20 by rostrub           #+#    #+#             */
/*   Updated: 2024/03/24 16:48:38 by rostrub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int ac, char **av)
{
	t_struct	idk;

	if (ac != 2 || !check_input(av[1]))
		return (ft_error());
	if (!ft_init_all(&idk, av[1]))
		return (ft_error());
	ft_init_tab(idk.tab, idk.size);
	ft_smart_fill(&idk, idk.size);
	if (value_check(idk.value, idk.size))
	{
		if (!ft_brut_force(0, 0, &idk))
			ft_error();
	}
	else
		ft_error();
	ft_free_tab(idk.tab, idk.size);
	ft_free_tab(idk.value, idk.size);
	return (0);
}

int	ft_init_all(t_struct *idk, char *str)
{
	char	**args;

	args = ft_split(str, " ");
	if (!args)
		return (ft_error());
	idk->size = ft_strlen(args) / 4;
	if (idk->size != 4)
		return (0);
	idk->tab = ft_alloc_tab(idk->size, idk->size);
	idk->value = ft_alloc_tab(idk->size, 4);
	if (!idk->tab || !idk->value)
	{
		if (idk->tab)
			ft_free_tab(idk->tab, idk->size);
		if (idk->value)
			ft_free_tab(idk->value, idk->size);
		ft_free_strr(args, idk->size * 4);
		return (0);
	}
	ft_init_value(idk->value, args, idk->size);
	ft_free_strr(args, idk->size * 4);
	return (1);
}

int	ft_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

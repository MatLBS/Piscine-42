/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:46:11 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/28 15:25:30 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_base_valid(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == ' '
			|| (str[i] >= 9 && str[i] <= 13))
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	index_num(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi(char *str, int base_len, char *base)
{
	int	i;
	int	valeur;
	int	sign;

	valeur = 0;
	sign = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	if (sign % 2 == 0)
		sign = 1;
	else
		sign = -1;
	while (str[i] != '\0' && index_num(str[i], base) != -1)
	{
		valeur = valeur * base_len + (index_num(str[i], base));
		i++;
	}
	return (sign * valeur);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	base_len;
	int	final_number;

	i = 0;
	base_len = ft_strlen(base);
	if (is_base_valid(base) == 0)
		return (0);
	final_number = (ft_atoi(str, base_len, base));
	return (final_number);
}

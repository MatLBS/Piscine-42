/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:11:47 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/03 10:39:56 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	index_num(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi(char *str, char *base, int base_len)
{
	int	i;
	int	sign;
	int	value;

	i = 0;
	sign = 0;
	value = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	if (sign % 2 == 0)
		sign = 1;
	else
		sign = -1;
	while (str[i] != '\0' && (index_num(str[i], base) != -1))
	{
		value = value * base_len + index_num(str[i], base);
		i++;
	}
	return (sign * value);
}

int ft_atoi_base(char *str, char *base)
{
	int	i;
	int	base_len;
	int	final_number;

	if (check_base(base) == 0)
		return (0);
	base_len = ft_strlen(base);
	final_number = ft_atoi(str, base, base_len);
	return (final_number);
}


int     main(void)
{
        printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
        printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
        printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
        printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
        printf("0:%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
        printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
        printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
        printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
        printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
}


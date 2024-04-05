/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 16:01:20 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/31 17:29:00 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_present(char *str, int i2, char c)
{
	int	i;

	i = 0;
	while(i < i2)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	first_time(char *str, int i2, char c)
{
	int	i;

	i = 0;
	while (i < i2)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_inter(char *s1, char *s2)
{
	int	i;
	int	s1_len;
	int	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	while (s2[i] != '\0' && s1[i] != '\0')
	{
		if ((is_present(s1, s1_len, s1[i])) && (is_present(s2, s2_len, s2[i])) && first_time(s1, i, s1[i]))
		{
			write (1, &s1[i], 1);
		}
		i++;
	}
}


int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_inter(argv[1], argv[2]);
	}
	write (1, "\n", 1);
	return (0);
}

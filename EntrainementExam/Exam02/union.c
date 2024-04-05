/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 08:54:03 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/30 09:37:03 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	nouveau(char *s, int max_pos, char c)
{
	int	i;

	i = 0;
	while (i < max_pos)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while(s1[i] != '\0')
	{
		if (nouveau(s1, i, s1[i]))
			write(1, &s1[i], 1);
		i++;
	}
	j = 0;
	while(s2[j] != '\0')
	{
		if (nouveau(s1, i, s2[j]) && nouveau(s2, j, s2[j]))
		{
			write(1, &s2[j], 1);
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
        if (argc == 3)
                ft_union(argv[1], argv[2]);
        write(1, "\n", 1);
        return (0);
}


/*
int		not_seen_before(char *s, int max_pos, char c)
{
	int i;

	i = -1;
	while (++i < max_pos)
		if (s[i] == c)
			return (0);
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int j;

	i = -1;
	while (s1[++i])
		if (not_seen_before(s1, i, s1[i]))
			write(1, &s1[i], 1);
	j = -1;
	while (s2[++j])
		if (not_seen_before(s1, i, s2[j]) && not_seen_before(s2, j, s2[j]))
			write(1, &s2[j], 1);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}*/

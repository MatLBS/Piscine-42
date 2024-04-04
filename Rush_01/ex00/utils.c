/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostrub <rostrub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:41:59 by rostrub           #+#    #+#             */
/*   Updated: 2024/03/23 15:04:30 by rostrub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	ft_is_sep(char str, char *sep)
{
	int	i;

	i = 0;
	while (str != sep[i] && sep[i])
		i++;
	if (sep[i] == '\0')
		return (0);
	return (1);
}

int	ft_count_word(char *str, char *sep)
{
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	while (str[i])
	{
		if ((i == 0 && ft_is_sep(str[i], sep) == 0)
			|| (ft_is_sep(str[i], sep) == 0
				&& ft_is_sep(str[i - 1], sep) == 1))
			counter++;
		i++;
	}
	return (counter);
}

char	*ft_dup(char *str, char *sep)
{
	char	*tab;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (str[i] && ft_is_sep(str[i], sep) == 0)
	{
		i++;
		size++;
	}
	tab = malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size && str[i])
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split2(char **tab, int word, char *str, char *charset)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = -1;
	while (++i2 < word)
	{
		while (str[i1] && ft_is_sep(str[i1], charset) == 1)
			i1++;
		if (str[i1])
			tab[i2] = ft_dup(&str[i1], charset);
		if (!tab[i2])
		{
			ft_free_strr(tab, i2);
			return (NULL);
		}
		while (str[i1] && ft_is_sep(str[i1], charset) == 0)
			i1++;
	}
	tab[i2] = NULL;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		word;

	word = ft_count_word(str, charset);
	tab = malloc(sizeof(char *) * (word + 1));
	if (!tab)
		return (NULL);
	tab = ft_split2(tab, word, str, charset);
	return (tab);
}

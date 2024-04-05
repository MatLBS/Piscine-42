/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:08:39 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/04 17:16:09 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_charset(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	flag;
	int	words;

	i = 0;
	flag = 0;
	words = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset) == 0 && flag == 0)
		{
			words++;
			flag = 1;
		}
		if (is_charset(str[i], charset) == 1 && flag == 1)
			flag = 0;
		i++;
	}
	return (words);
}

char	*ft_strcpy(char *dest, char *src, int size, int j)
{
	int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**print(int number_words, char *str, char *charset, char **tab)
{
	int	i;
	int	j;
	int	k;
	int	count;

	i = 0;
	k = 0;
	count = 0;
	while (count < number_words)
	{
		while (is_charset(str[i], charset) == 1 && str[i])
			i++;
		j = i;
		while (is_charset(str[i], charset) == 0 && str[i])
			i++;
		tab[k] = malloc(sizeof(char) * (i - j + 1));
		if (tab[k] == NULL)
			return (0);
		ft_strcpy(tab[k], str, (i - j), j);
		k++;
		count++;
	}
	return (tab);
}

char    **ft_split(char *str)
{
	char	**tab;
	char	*charset = " \n\t";
	int	nb_words;

	nb_words = count_words(str, charset);
	tab = malloc(sizeof(char *) * (nb_words + 1));
	if (tab == NULL)
		return (0);
	print(nb_words, str, charset, tab);
	tab[nb_words] = 0;
	return (tab);
}

int	main(void)
{
	char	**tab;
	char	*test = "Bon\tjourje m'appelle Mat\teo";

	tab = ft_split(test);
	printf("%s\n%s\n%s\n%s\n%s\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
}

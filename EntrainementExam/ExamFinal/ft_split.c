/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:46:57 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/03 17:20:46 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
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
		if (!is_charset(str[i], charset) && flag == 0)
		{
			words++;
			flag = 1;
		}
		if (is_charset(str[i], charset) && flag == 1)
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

char	**ft_cut(char **tab, int number_words, char *str, char *charset)
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
		while (is_charset(str[i], charset) && str[i])
			i++;
		j = i;
		while (!is_charset(str[i], charset) && str[i])
			i++;
		tab[k] = malloc(sizeof(char) * (i-j+1));
		ft_strcpy(tab[k], str, (i - j), j);
		k++;
		count++;
	}
	return (tab);
}

char **ft_split(char *str, char *charset)
{
	int	number_words;
	char	**tab;

	number_words = count_words(str, charset);
	tab = malloc(sizeof(char *) * (number_words + 1));
	if (tab == NULL)
		return (0);
	tab = ft_cut(tab, number_words, str, charset);
	tab[number_words] = 0;
	return (tab);
}

int     main(void)
{
        char    **tab;
        char    test1[50] = "Boncjour je m'apUpelle Mat eo";
        char    test2[50] = " cU";

        tab = ft_split(test1, test2);
        printf("%s\n%s\n%s\n%s\n%s\n%s\n",
        tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
}






















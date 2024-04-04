/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 10:08:14 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/03 08:32:58 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	counter_word(char *str, char *charset)
{
	int	i;
	int	words;
	int	flag;

	i = 0;
	words = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (!check_charset(charset, str[i]) && flag == 0)
		{
			words++;
			flag = 1;
		}
		if (check_charset(charset, str[i]) && flag == 1)
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

char	**string_size(int number_words, char *str, char *charset, char **tab)
{
	int	i;
	int	j;
	int	k;
	int	compteur;

	i = 0;
	k = 0;
	compteur = 0;
	while (compteur < number_words)
	{
		while (check_charset(charset, str[i]) && str[i] != '\0')
			i++;
		j = i;
		while (!check_charset(charset, str[i]) && str[i] != '\0')
			i++;
		tab[k] = malloc(sizeof(char) * (i - j) + 1);
		if (tab[k] == NULL)
			return (0);
		ft_strcpy(tab[k], str, (i - j), j);
		k++;
		compteur++;
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		number_words;
	char	**tab;
	int		i;

	i = 0;
	number_words = counter_word(str, charset);
	tab = malloc(sizeof(char *) * (number_words + 1));
	if (tab == NULL)
		return (0);
	tab = string_size(number_words, str, charset, tab);
	tab[number_words] = 0;
	return (tab);
}
/*
   int     main(void)
   {
   char    **tab;
   char    test1[50] = "Boncjour je m'apUpelle Mat eo";
   char    test2[50] = " cU";

   tab = ft_split(test1, test2);
   printf("%s\n%s\n%s\n%s\n%s\n%s\n",
   tab[3], tab[4], tab[5], tab[6], tab[7], tab[8]);
   }*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:01:07 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/03 14:08:13 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	int	i;
	int	len;
	char	*tab;

	i = 0;
	len = ft_strlen(src);
	tab = malloc(sizeof(char) * len + 1);
	if (tab == NULL)
		return (0);
	while (src[i])
	{
		tab[i] == src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

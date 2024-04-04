/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:07:04 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/19 15:44:49 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	taille;

	i = 0;
	taille = ft_strlen(src);
	if (size < 1)
	{
		return (taille);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (taille);
}
/*
int main(void)
{
        char    source[] = "12hvleono3456789";

        char    destination[] = "on adore la moulinette";

        printf("lacopie: %d\n", ft_strlcpy(destination, source, 2));
        printf("lacopie: %s\n", destination);
        return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:38:28 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/02 08:22:49 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}

int	taille(int size, char **strs, char *sep)
{
	int	new_length;
	int	i;

	i = 0;
	new_length = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		new_length += ft_strlen(strs[i]);
		i++;
	}
	new_length += 1;
	return (new_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		new_length;
	int		i;
	char	*new_string;

	if (size == 0)
	{
		new_string = malloc(sizeof(char));
		*new_string = '\0';
		return (new_string);
	}		
	new_length = taille(size, strs, sep);
	new_string = malloc(sizeof(char) * new_length);
	if (new_string == NULL)
		return (0);
	ft_strcpy(new_string, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(new_string, sep);
		ft_strcat(new_string, strs[i]);
		i++;
	}
	return (new_string);
}

   int	main(int argc, char **argv)
   {
   printf("./ex03/output___said___this___is___a___success :\n");
   printf("%s\n",  ft_strjoin(argc, argv, "___"));
   }

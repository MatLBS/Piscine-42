/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:41:54 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/20 16:11:08 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;

	i = 0;
	dest_size = ft_strlen(dest);
	if (dest_size >= size)
		return (ft_strlen(src) + size);
	while (src[i] != '\0' && i < (size - dest_size - 1))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + ft_strlen(src));
}
/*
int main(void)
{
        char    destination[] = "Norminette ";

        char    source[] = "ou Moulinette ?";

        printf("Le nombre : %d\n", ft_strlcat(destination, source, 16));
        printf("Mince, ton push n'est pas passe...%s\n", destination);
        return (0);
}*/

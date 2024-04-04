/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:21:24 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/16 19:46:42 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
int	main(void)
{
	int		taille_str;
	char	tableau[] = "Mateo";

	taille_str = ft_strlen(tableau);
	printf("Le nombre de caracteres est : %d\n", taille_str);
	return (0);
}*/

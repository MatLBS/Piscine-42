/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:25:29 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/28 18:38:18 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	char	*str;

	i = 0;
	str = malloc(sizeof(int) * (end - start));
	if (str == NULL)
		return (0);
	while (end >= start)
	{
		str[i] = end;
		end--;
		i++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:17:27 by matle-br          #+#    #+#             */
/*   Updated: 2024/03/29 11:45:25 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	char	c;

	i = 0;
	if (argc <  2)
	{
		write (1, "0\n", 2);
		return (0);
	}
	c = (argc - 1) + '0';
	write (1, &c, 1);
	write (1, "\n", 1);
	return (0);

}

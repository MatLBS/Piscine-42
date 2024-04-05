/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 10:09:23 by matle-br          #+#    #+#             */
/*   Updated: 2024/04/04 10:12:01 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     first_time(char c, char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                if (c == str[i])
                        return (0);
                i++;
        }
        return (1);
}

int     main(int argc, char **argv)
{
        if (argc != 3)
        {
                write (1, "\n", 1);
                return (0);
        }
        int     i;
        int     j;
        char    tab[100];
        int     k;

        i = 0;
        j = 0;
        k = 0;
        while (argv[1][i])
        {
                j = 0;
                while (argv[2][j])
                {
                        if (argv[2][j] == argv[1][i] && first_time(argv[1][i], tab))
                        {
                                write (1, &argv[1][i], 1);
                                tab[k] = argv[1][i];
                                k++;
                        }
                        j++;
                }
                i++;
        }
        return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostrub <rostrub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 10:26:19 by rostrub           #+#    #+#             */
/*   Updated: 2024/03/24 16:15:33 by rostrub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_struct
{
	int		**tab;
	int		**value;
	int		size;
}	t_struct;

//main.c 2/5
int		main(int ac, char **av);
int		ft_init_all(t_struct *idk, char *str);
int		ft_error(void);

//alloc_tab 4/5
int		**ft_alloc_tab(int size, int size2);
void	ft_free_tab(int **tab, int size);
void	ft_free_strr(char **tab, int size);
void	ft_init_tab(int **tab, int size);
void	ft_init_value(int **value, char **av, int size);

//utils.c 5/5
int		ft_is_sep(char str, char *sep);
int		ft_count_word(char *str, char *sep);
char	*ft_dup(char *str, char *sep);
char	**ft_split2(char **tab, int word, char *str, char *charset);
char	**ft_split(char *str, char *charset);

//utils2.c 1/5
int		ft_atoi(char *srt);
int		ft_strlen(char **str);

//value_check 1/5
int		value_check(int **value, int size);
int		print_table(int **value, int size);

//brutforce.c 1/5
int		ft_brut_force(int i, int i2, t_struct *idk);
int		ft_brut_force2(int i, int i2, t_struct *idk);
int		ft_brut_force3(int value, int i, int i2, t_struct *idk);

//check_tab 5/5
int		is_valid_colup(int **tab, int *value, int size);
int		is_valid_coldown(int **tab, int *value, int size);
int		is_valid_rowleft(int **tab, int *value, int size);
int		is_valid_rowright(int **tab, int *value, int size);
int		check_tab(int **tab, int **value, int size);

//check_duplcate.c 2/5
int		check_duplicate_r(int	**tab, int size);
int		check_duplicate_c(int	**tab, int size);

//smart_fill.c 5/5
void	ft_smart_fill(t_struct *idk, int size);
void	ft_smart_fill_up(int **tab, int *value, int size);
void	ft_smart_fill_down(int **tab, int *value, int size);
void	ft_smart_fill_left(int **tab, int *value, int size);
void	ft_smart_fill_right(int **tab, int *value, int size);

//check_input 1/5
int		check_input(char *str);

#endif

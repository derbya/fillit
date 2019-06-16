/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 11:13:26 by aderby            #+#    #+#             */
/*   Updated: 2017/06/22 15:28:50 by bpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define T0 "#....##....#"
# define T1 "#....#...##"
# define T2 "#....###"
# define T3 "##...#....#"
# define T4 "###....#"
# define T5 "#....#....##"
# define T6 "###..#"
# define T7 "##....#....#"
# define T8 "#..###"
# define T9 "##...##"
# define T10 "####"
# define T11 "#....#....#....#"
# define T12 "###...#"
# define T13 "#...##....#"
# define T14 "#...###"
# define T15 "#....##...#"
# define T16 "##....##"
# define T17 "#...##...#"
# define T18 "##..##"

# define ALPHABET "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
# define BUFF 4096

# include "libft.h"
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_grid
{
	int				size;
	char			*content;
}					t_grid;

char				*read_file(char *filename);
int					*get_int_array(char *fs);
int					get_num_tets(char *fs);

int					validate(char *filestring);

int					recursive_solver(t_grid *grid, int *int_array, int num);

t_grid				*create_grid(int size);
void				free_grid(t_grid *grid);
void				print_grid(t_grid *grid);
void				free_everything(t_grid *grid, int *ptr, char *fs);
void				what_cleartet(t_grid *grid, int i, int start);

int					what_function(t_grid *grid, int i, int start, char c);
int					what_tet(char *tet);

int					check_tet0(t_grid *grid, int start);
int					place_tet0(t_grid *grid, int start, char c);
void				clear_tet0(t_grid *grid, int start);

int					check_tet1(t_grid *grid, int start);
int					place_tet1(t_grid *grid, int start, char c);
void				clear_tet1(t_grid *grid, int start);

int					check_tet2(t_grid *grid, int start);
int					place_tet2(t_grid *grid, int start, char c);
void				clear_tet2(t_grid *grid, int start);

int					check_tet3(t_grid *grid, int start);
int					place_tet3(t_grid *grid, int start, char c);
void				clear_tet3(t_grid *grid, int start);

int					check_tet4(t_grid *grid, int start);
int					place_tet4(t_grid *grid, int start, char c);
void				clear_tet4(t_grid *grid, int start);

int					check_tet5(t_grid *grid, int start);
int					place_tet5(t_grid *grid, int start, char c);
void				clear_tet5(t_grid *grid, int start);

int					check_tet6(t_grid *grid, int start);
int					place_tet6(t_grid *grid, int start, char c);
void				clear_tet6(t_grid *grid, int start);

int					check_tet7(t_grid *grid, int start);
int					place_tet7(t_grid *grid, int start, char c);
void				clear_tet7(t_grid *grid, int start);

int					check_tet8(t_grid *grid, int start);
int					place_tet8(t_grid *grid, int start, char c);
void				clear_tet8(t_grid *grid, int start);

int					check_tet9(t_grid *grid, int start);
int					place_tet9(t_grid *grid, int start, char c);
void				clear_tet9(t_grid *grid, int start);

int					check_tet10(t_grid *grid, int start);
int					place_tet10(t_grid *grid, int start, char c);
void				clear_tet10(t_grid *grid, int start);

int					check_tet11(t_grid *grid, int start);
int					place_tet11(t_grid *grid, int start, char c);
void				clear_tet11(t_grid *grid, int start);

int					check_tet12(t_grid *grid, int start);
int					place_tet12(t_grid *grid, int start, char c);
void				clear_tet12(t_grid *grid, int start);

int					check_tet13(t_grid *grid, int start);
int					place_tet13(t_grid *grid, int start, char c);
void				clear_tet13(t_grid *grid, int start);

int					check_tet14(t_grid *grid, int start);
int					place_tet14(t_grid *grid, int start, char c);
void				clear_tet14(t_grid *grid, int start);

int					check_tet15(t_grid *grid, int start);
int					place_tet15(t_grid *grid, int start, char c);
void				clear_tet15(t_grid *grid, int start);

int					check_tet16(t_grid *grid, int start);
int					place_tet16(t_grid *grid, int start, char c);
void				clear_tet16(t_grid *grid, int start);

int					check_tet17(t_grid *grid, int start);
int					place_tet17(t_grid *grid, int start, char c);
void				clear_tet17(t_grid *grid, int start);

int					check_tet18(t_grid *grid, int start);
int					place_tet18(t_grid *grid, int start, char c);
void				clear_tet18(t_grid *grid, int start);

#endif

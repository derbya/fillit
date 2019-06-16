/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_manager.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 10:53:58 by aderby            #+#    #+#             */
/*   Updated: 2017/06/22 15:34:17 by bpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		free_grid(t_grid *grid)
{
	ft_memdel((void **)&(grid->content));
}

t_grid		*create_grid(int size)
{
	t_grid	*grid;

	grid = (t_grid*)malloc(sizeof(t_grid));
	grid->size = size;
	grid->content = (char*)malloc(sizeof(char) * (size * size));
	ft_memset(grid->content, '.', size * size);
	return (grid);
}

void		free_everything(t_grid *grid, int *ptr, char *fs)
{
	free_grid(grid);
	ft_memdel((void **)&(ptr));
	ft_strdel(&fs);
}

static void	what_cleartet2(t_grid *grid, int i, int start)
{
	if (i == 11)
		clear_tet11(grid, start);
	if (i == 12)
		clear_tet12(grid, start);
	if (i == 13)
		clear_tet13(grid, start);
	if (i == 14)
		clear_tet14(grid, start);
	if (i == 15)
		clear_tet15(grid, start);
	if (i == 16)
		clear_tet16(grid, start);
	if (i == 17)
		clear_tet17(grid, start);
	if (i == 18)
		clear_tet18(grid, start);
}

void		what_cleartet(t_grid *grid, int i, int start)
{
	if (i > 10)
		what_cleartet2(grid, i, start);
	if (i == 0)
		clear_tet0(grid, start);
	if (i == 1)
		clear_tet1(grid, start);
	if (i == 2)
		clear_tet2(grid, start);
	if (i == 3)
		clear_tet3(grid, start);
	if (i == 4)
		clear_tet4(grid, start);
	if (i == 5)
		clear_tet5(grid, start);
	if (i == 6)
		clear_tet6(grid, start);
	if (i == 7)
		clear_tet7(grid, start);
	if (i == 8)
		clear_tet8(grid, start);
	if (i == 9)
		clear_tet9(grid, start);
	if (i == 10)
		clear_tet10(grid, start);
}

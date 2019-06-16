/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tet_stuff.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 02:13:39 by aderby            #+#    #+#             */
/*   Updated: 2017/06/22 15:24:45 by bpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	what_function_11_18(t_grid *grid, int i, int start, char c)
{
	if (i == 11)
		return (place_tet11(grid, start, c) == 1 ? 1 : 0);
	if (i == 12)
		return (place_tet12(grid, start, c) == 1 ? 1 : 0);
	if (i == 13)
		return (place_tet13(grid, start, c) == 1 ? 1 : 0);
	if (i == 14)
		return (place_tet14(grid, start, c) == 1 ? 1 : 0);
	if (i == 15)
		return (place_tet15(grid, start, c) == 1 ? 1 : 0);
	if (i == 16)
		return (place_tet16(grid, start, c) == 1 ? 1 : 0);
	if (i == 17)
		return (place_tet17(grid, start, c) == 1 ? 1 : 0);
	if (i == 18)
		return (place_tet18(grid, start, c) == 1 ? 1 : 0);
	return (0);
}

int			what_function(t_grid *grid, int i, int start, char c)
{
	if (i > 10)
		return (what_function_11_18(grid, i, start, c));
	if (i == 0)
		return (place_tet0(grid, start, c) == 1 ? 1 : 0);
	if (i == 1)
		return (place_tet1(grid, start, c) == 1 ? 1 : 0);
	if (i == 2)
		return (place_tet2(grid, start, c) == 1 ? 1 : 0);
	if (i == 3)
		return (place_tet3(grid, start, c) == 1 ? 1 : 0);
	if (i == 4)
		return (place_tet4(grid, start, c) == 1 ? 1 : 0);
	if (i == 5)
		return (place_tet5(grid, start, c) == 1 ? 1 : 0);
	if (i == 6)
		return (place_tet6(grid, start, c) == 1 ? 1 : 0);
	if (i == 7)
		return (place_tet7(grid, start, c) == 1 ? 1 : 0);
	if (i == 8)
		return (place_tet8(grid, start, c) == 1 ? 1 : 0);
	if (i == 9)
		return (place_tet9(grid, start, c) == 1 ? 1 : 0);
	if (i == 10)
		return (place_tet10(grid, start, c) == 1 ? 1 : 0);
	return (0);
}

static int	what_tet_2(char *tet)
{
	if (ft_strcmp(tet, T12) == 0)
		return (12);
	if (ft_strcmp(tet, T13) == 0)
		return (13);
	if (ft_strcmp(tet, T14) == 0)
		return (14);
	if (ft_strcmp(tet, T15) == 0)
		return (15);
	if (ft_strcmp(tet, T16) == 0)
		return (16);
	if (ft_strcmp(tet, T17) == 0)
		return (17);
	if (ft_strcmp(tet, T18) == 0)
		return (18);
	return (0);
}

int			what_tet(char *tet)
{
	if (ft_strcmp(tet, T0) == 0)
		return (0);
	if (ft_strcmp(tet, T1) == 0)
		return (1);
	if (ft_strcmp(tet, T2) == 0)
		return (2);
	if (ft_strcmp(tet, T3) == 0)
		return (3);
	if (ft_strcmp(tet, T4) == 0)
		return (4);
	if (ft_strcmp(tet, T5) == 0)
		return (5);
	if (ft_strcmp(tet, T6) == 0)
		return (6);
	if (ft_strcmp(tet, T7) == 0)
		return (7);
	if (ft_strcmp(tet, T8) == 0)
		return (8);
	if (ft_strcmp(tet, T9) == 0)
		return (9);
	if (ft_strcmp(tet, T10) == 0)
		return (10);
	if (ft_strcmp(tet, T11) == 0)
		return (11);
	return (what_tet_2(tet));
}

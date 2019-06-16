/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t10.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpierce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 15:35:16 by bpierce           #+#    #+#             */
/*   Updated: 2017/06/22 15:20:50 by bpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_tet10(t_grid *grid, int start)
{
	char	*tmp;
	int		i;
	int		j;

	j = 0;
	i = grid->size;
	tmp = grid->content;
	if (start % i > i - 4)
		return (0);
	if (start + 3 > ((i * i) - 1))
		return (0);
	tmp += start;
	while (j < 4)
	{
		if (tmp[j] != '.')
			return (0);
		j++;
	}
	return (1);
}

int		place_tet10(t_grid *grid, int start, char c)
{
	char	*tmp;
	int		i;

	tmp = grid->content;
	if (check_tet10(grid, start))
	{
		tmp += start;
		i = -1;
		while (++i < 4)
			tmp[i] = c;
		return (1);
	}
	return (0);
}

void	clear_tet10(t_grid *grid, int start)
{
	char	*tmp;
	int		i;

	tmp = grid->content;
	tmp += start;
	i = -1;
	while (++i < 4)
		tmp[i] = '.';
	return ;
}

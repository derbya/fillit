/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t18.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpierce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 15:35:16 by bpierce           #+#    #+#             */
/*   Updated: 2017/06/22 15:21:47 by bpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_tet18(t_grid *grid, int start)
{
	char	*tmp;
	int		i;

	i = grid->size;
	tmp = grid->content;
	if ((start % i) == 0)
		return (0);
	if ((start % i) == (i - 1))
		return (0);
	if ((start + i) > ((i * i) - 1))
		return (0);
	tmp += start;
	if (*tmp != '.')
		return (0);
	tmp++;
	if (*tmp != '.')
		return (0);
	tmp += (i - 2);
	if (*tmp != '.')
		return (0);
	tmp++;
	if (*tmp != '.')
		return (0);
	return (1);
}

int		place_tet18(t_grid *grid, int start, char c)
{
	char	*tmp;

	tmp = grid->content;
	if (check_tet18(grid, start))
	{
		tmp += start;
		*tmp = c;
		tmp++;
		*tmp = c;
		tmp += (grid->size - 2);
		*tmp = c;
		tmp++;
		*tmp = c;
		return (1);
	}
	return (0);
}

void	clear_tet18(t_grid *grid, int start)
{
	char	*tmp;

	tmp = grid->content;
	tmp += start;
	*tmp = '.';
	tmp++;
	*tmp = '.';
	tmp += (grid->size - 2);
	*tmp = '.';
	tmp++;
	*tmp = '.';
	return ;
}

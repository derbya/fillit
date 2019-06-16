/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t0.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 15:25:41 by aderby            #+#    #+#             */
/*   Updated: 2017/06/22 15:19:14 by bpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_tet0(t_grid *grid, int start)
{
	char	*tmp;
	int		i;

	i = grid->size;
	tmp = grid->content;
	if (start % i == i - 1)
		return (0);
	if ((start + i + i + 1) > ((i * i) - 1))
		return (0);
	tmp += start;
	if (*tmp != '.')
		return (0);
	tmp += i;
	if (*tmp != '.')
		return (0);
	tmp++;
	if (*tmp != '.')
		return (0);
	tmp += i;
	if (*tmp != '.')
		return (0);
	return (1);
}

int		place_tet0(t_grid *grid, int start, char c)
{
	char *tmp;

	tmp = grid->content;
	if (check_tet0(grid, start))
	{
		tmp += start;
		*tmp = c;
		tmp += grid->size;
		*tmp = c;
		tmp++;
		*tmp = c;
		tmp += grid->size;
		*tmp = c;
		return (1);
	}
	return (0);
}

void	clear_tet0(t_grid *grid, int start)
{
	char *tmp;

	tmp = grid->content;
	tmp += start;
	*tmp = '.';
	tmp += grid->size;
	*tmp = '.';
	tmp++;
	*tmp = '.';
	tmp += grid->size;
	*tmp = '.';
	return ;
}

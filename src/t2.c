/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t2.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 16:30:18 by aderby            #+#    #+#             */
/*   Updated: 2017/06/22 15:25:16 by bpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_tet2(t_grid *grid, int start)
{
	char	*tmp;
	int		i;

	i = grid->size;
	tmp = grid->content;
	if ((start % i) > (i - 3))
		return (0);
	if ((start + i + 2) > ((i * i) - 1))
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
	tmp++;
	if (*tmp != '.')
		return (0);
	return (1);
}

int		place_tet2(t_grid *grid, int start, char c)
{
	char *tmp;

	tmp = grid->content;
	if (check_tet2(grid, start))
	{
		tmp += start;
		*tmp = c;
		tmp += grid->size;
		*tmp = c;
		tmp++;
		*tmp = c;
		tmp++;
		*tmp = c;
		return (1);
	}
	return (0);
}

void	clear_tet2(t_grid *grid, int start)
{
	char *tmp;

	tmp = grid->content;
	tmp += start;
	*tmp = '.';
	tmp += grid->size;
	*tmp = '.';
	tmp++;
	*tmp = '.';
	tmp++;
	*tmp = '.';
	return ;
}

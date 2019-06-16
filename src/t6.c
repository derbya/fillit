/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t6.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 18:25:37 by aderby            #+#    #+#             */
/*   Updated: 2017/06/22 15:20:20 by bpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_tet6(t_grid *grid, int start)
{
	char	*tmp;
	int		i;

	i = grid->size;
	tmp = grid->content;
	if (start % i > i - 3)
		return (0);
	if ((start + i) > ((i * i) - 1))
		return (0);
	tmp += start;
	if (*tmp != '.')
		return (0);
	tmp++;
	if (*tmp != '.')
		return (0);
	tmp++;
	if (*tmp != '.')
		return (0);
	tmp += (i - 2);
	if (*tmp != '.')
		return (0);
	return (1);
}

int		place_tet6(t_grid *grid, int start, char c)
{
	char *tmp;

	tmp = grid->content;
	if (check_tet6(grid, start))
	{
		tmp += start;
		*tmp = c;
		tmp++;
		*tmp = c;
		tmp++;
		*tmp = c;
		tmp += (grid->size - 2);
		*tmp = c;
		return (1);
	}
	return (0);
}

void	clear_tet6(t_grid *grid, int start)
{
	char *tmp;

	tmp = grid->content;
	tmp += start;
	*tmp = '.';
	tmp++;
	*tmp = '.';
	tmp++;
	*tmp = '.';
	tmp += (grid->size - 2);
	*tmp = '.';
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_solver.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpierce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 01:13:23 by bpierce           #+#    #+#             */
/*   Updated: 2017/06/22 13:27:18 by bpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		recursive_solver(t_grid *grid, int *int_array, int num)
{
	int		pos;
	int		len;

	pos = 0;
	len = grid->size * grid->size;
	if (int_array[num] == 27)
		return (1);
	while (pos < len)
	{
		if (what_function(grid, int_array[num], pos, ALPHABET[num]))
		{
			if (recursive_solver(grid, int_array, num + 1))
				return (1);
			what_cleartet(grid, int_array[num], pos);
		}
		pos++;
	}
	return (0);
}

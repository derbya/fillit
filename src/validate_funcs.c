/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_funcs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpierce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/15 13:28:01 by bpierce           #+#    #+#             */
/*   Updated: 2017/06/22 15:27:54 by bpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		is_valid_tet(char *str)
{
	int	i;
	int connections;

	i = 0;
	connections = 0;
	while (str[i] && !(str[i] == '\n' && str[i + 1] == '\n'))
	{
		if (str[i] == '#')
		{
			if (str[i + 1] == '#')
				connections++;
			if (i > 0 && str[i - 1] == '#')
				connections++;
			if (i < 15 && str[i + 5] == '#')
				connections++;
			if (i > 4 && str[i - 5] == '#')
				connections++;
		}
		i++;
	}
	return (connections);
}

static int		is_valid_struct(char *str, int i, int j, int k)
{
	while (str[i])
	{
		if (str[i] == '#')
			j++;
		if ((str[i] == '.' || str[i] == '#') && i < 4 && j <= 4)
			i++;
		else if (i == 4 && str[i] == '\n' && k < 5)
		{
			k++;
			if (!(str[i + 1]) && j == 4 && k == 4)
				return (1);
			else if (str[i + 1] == '\n' && j == 4)
			{
				str += 6;
				j = 0;
				k = 0;
			}
			else
				str += 5;
			i = 0;
		}
		else
			return (0);
	}
	return (0);
}

int				validate(char *fs)
{
	int		num;
	int		valid;

	if (!(is_valid_struct(fs, 0, 0, 0)))
		return (0);
	num = get_num_tets(fs);
	if (num < 1 || num > 26)
		return (0);
	while (num--)
	{
		valid = is_valid_tet(fs);
		if (valid != 6 && valid != 8)
			return (0);
		if (num)
			fs += 21;
	}
	return (1);
}

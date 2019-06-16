/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 00:39:21 by aderby            #+#    #+#             */
/*   Updated: 2017/06/22 15:33:01 by bpierce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			print_grid(t_grid *grid)
{
	int		i;
	int		j;
	char	*tmp;

	i = -1;
	j = 0;
	tmp = grid->content;
	while (j < grid->size)
	{
		while (++i < grid->size)
			ft_putchar(tmp[i]);
		ft_putchar('\n');
		tmp += i;
		i = -1;
		j++;
	}
}

static	int		get_size(int nb)
{
	int size;

	size = 2;
	while (size * size < nb)
		size++;
	return (size);
}

t_grid			*main_2(t_grid *grid, int *int_array)
{
	int size;

	while (!recursive_solver(grid, int_array, 0))
	{
		size = grid->size + 1;
		free_grid(grid);
		grid = create_grid(size);
	}
	return (grid);
}

int				main(int ac, char **av)
{
	int		*int_array;
	t_grid	*grid;
	char	*fs;

	if (ac != 2)
	{
		ft_putstr("Usage: Takes a single file as input.\n");
		return (0);
	}
	fs = read_file(av[1]);
	if (!validate(fs))
	{
		ft_putstr("error\n");
		return (0);
	}
	int_array = get_int_array(fs);
	grid = create_grid(get_size((get_num_tets(fs) * 4)));
	print_grid(main_2(grid, int_array));
	free_everything(grid, int_array, fs);
	return (1);
}

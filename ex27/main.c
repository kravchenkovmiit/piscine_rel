/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 22:12:27 by hvalenci          #+#    #+#             */
/*   Updated: 2019/09/05 22:25:08 by hvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_print_file(char *file_name)
{
	int		fd;
	char	buf[1];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (1);
	while (read(fd, buf, 1))
		write(1, buf, 1);
	if (close(fd) == -1)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc == 2)
		ft_print_file(argv[1]);
	else
		write(2, "Too many arguments.\n", 20);
	return (0);
}

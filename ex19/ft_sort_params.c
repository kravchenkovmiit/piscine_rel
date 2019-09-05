/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 18:36:44 by hvalenci          #+#    #+#             */
/*   Updated: 2019/09/05 20:31:09 by hvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	res = s1[i] - s2[i] - 0;
	return (res);
}

void	swap(char **av, int i)
{
	char *t;

	t = av[i - 1];
	av[i - 1] = av[i];
	av[i] = t;
}

void	sort(int ac, char **av)
{
	int i;
	int flag;

	i = 2;
	flag = 1;
	while (ac > i)
	{
		if (ft_strcmp(av[i - 1], av[i]) > 0)
		{
			flag = 1;
			swap(av, i);
		}
		i++;
		if (flag == 1)
		{
			flag = 0;
			i = 2;
		}
	}
}

void	print_params(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	while (ac > i)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		if (ac > 2)
			sort(ac, av);
		print_params(ac, av);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvalenci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 21:15:52 by hvalenci          #+#    #+#             */
/*   Updated: 2019/09/05 21:31:11 by hvalenci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	len;
	unsigned int	i;
	int				*arr;

	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	len = (max - min);
	arr = (int*)malloc(sizeof(int) * len);
	if (arr == NULL)
		return (arr);
	i = 0;
	while (i < len)
	{
		*(arr + i) = min + i;
		i++;
	}
	return (arr);
}

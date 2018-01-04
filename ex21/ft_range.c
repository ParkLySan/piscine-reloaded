/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:43:41 by litoulza          #+#    #+#             */
/*   Updated: 2017/11/10 14:43:50 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*str;
	int		*tmp;

	if (min >= max)
		return (0);
	str = (int*)malloc(sizeof(*str) * (max - min + 1));
	tmp = str;
	while (max > min)
	{
		*str = min;
		str++;
		min++;
	}
	*str = 0;
	return (tmp);
}

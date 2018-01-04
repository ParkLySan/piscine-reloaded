/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:42:16 by litoulza          #+#    #+#             */
/*   Updated: 2017/11/10 14:42:55 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;
	char	*tmp;

	i = 0;
	while (src[i])
		i++;
	str = (char*)malloc(sizeof(*str) * (i + 1));
	tmp = str;
	while (i >= 0)
	{
		*str = *src;
		str++;
		src++;
		i--;
	}
	*str = '\0';
	return (tmp);
}

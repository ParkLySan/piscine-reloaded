/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:48:59 by litoulza          #+#    #+#             */
/*   Updated: 2017/11/10 14:49:20 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int sum;

	sum = 0;
	while (*tab)
	{
		if (f(*tab) == 1)
			sum++;
		tab++;
	}
	return (sum);
}

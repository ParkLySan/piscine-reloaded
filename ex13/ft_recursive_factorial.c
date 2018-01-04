/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:13:34 by litoulza          #+#    #+#             */
/*   Updated: 2017/11/13 12:06:30 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	else if ((nb > 1) && (nb <= 16))
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}

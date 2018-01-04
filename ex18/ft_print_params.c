/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:39:46 by litoulza          #+#    #+#             */
/*   Updated: 2017/11/10 14:40:35 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

int		main(int argv, char **argc)
{
	int	indx;

	indx = 0;
	while (argv-- > 1)
		ft_putstr(argc[++indx]);
	return (0);
}

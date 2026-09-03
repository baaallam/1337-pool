/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 21:43:40 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/08/21 13:39:49 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
		write(1, ", ", 2);
}

void	ft_loop(char a, char b, char c)
{
	char	d;

	d = '0';
	while (d <= '9')
	{
		if (a < c || (a == c && b < d))
			ft_print(a, b, c, d);
		d++;
	}
}

void	ft_second_loop(char a, char b)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		ft_loop(a, b, c);
		c++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			ft_second_loop(a, b);
			b++;
		}
		a++;
	}
}

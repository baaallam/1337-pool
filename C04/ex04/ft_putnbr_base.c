/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 15:57:56 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/08/25 00:10:54 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	checker(char *base)
{
	int	i;
	int	j;
	int	le;

	le = len(base);
	if (le < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == 32 || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int			le;
	long		n;

	if (!checker(base))
		return ;
	le = len(base);
	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= le)
		ft_putnbr_base(n / le, base);
	write(1, &base[n % le], 1);
}

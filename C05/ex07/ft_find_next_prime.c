/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 23:48:29 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/08/31 23:53:43 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	if (nb < 2)
	{
		return (0);
	}
	div = 2;
	while (div * div <= nb)
	{
		if (nb % div == 0)
		{
			return (0);
		}
		div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
	{
		return (2);
	}
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

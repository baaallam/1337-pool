/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 18:31:11 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/08/25 18:48:07 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (n < argc)
	{
		while (argv[n][i] != '\0')
		{
			write(1, &argv[n][i], 1);
			i++;
		}
		write(1, "\n", 1);
		n++;
		i = 0;
	}
	return (0);
}

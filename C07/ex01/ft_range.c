/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 22:19:34 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/09/03 18:38:14 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*t;
	int	i;
	int	len;

	if (min >= max)
		return (NULL);
	len = max - min;
	t = malloc(sizeof(int) * len);
	if (!t)
		return (NULL);
	i = 0;
	while (i < len)
	{
		t[i] = min;
		i++;
		min++;
	}
	return (t);
}

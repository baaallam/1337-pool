/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 15:15:34 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/08/22 21:28:52 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alnum(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && new_word)
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z' && !new_word)
			str[i] += 32;
		if (ft_is_alnum(str[i]))
			new_word = 0;
		else
			new_word = 1;
		i++;
	}
	return (str);
}

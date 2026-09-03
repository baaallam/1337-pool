/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaaalla <kbaaalla@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 19:29:47 by kbaaalla          #+#    #+#             */
/*   Updated: 2026/08/30 23:24:28 by kbaaalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int len (char *base){
    int i = 0;
    while (base[i]!='\0')
    {
        i++;
    }
    return (i);
}
int checker(char *base , char *str){
    int i = 0;
    int j = 0;
    int le = len(base);
    int a = 0;
    if (le<2)
    {
        return (0);
    }
    while (base[i])
    {
        if (base[i]== 32 || base[i]=='+' || base[i]=='-')
        {
            return (0);
        }
        j = i + 1;
        while (base[j])
        {
            if (base[i]==base[j])
                return (0);
            j++;
        }
        i++;
    }
    while (base[a])
    {
        if(base[a]==str[i])
        {
            return (1);
        }
        a++;
    }
    return (1);
}

int     ft_atoi_base(char *str, char *base){
    int res = 0;
    int i = 0;
    int sign = 1;
    int j = 0;
    int le = len(base);
    if (!(checker(base ,str)))
    {
        return (0);
    } 
    while (base[i])
    {
        j = 0;
        while (str[j])
        {
            if (str[j]==base[i])
            {
                res = res * le + i;
                j++;
            }
            i++;  
        }
	}
     return (res*sign);
}

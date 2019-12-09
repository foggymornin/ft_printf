/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 17:04:25 by mafajat           #+#    #+#             */
/*   Updated: 2019/12/09 21:51:38 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_pint(int n)
{
    int w;
    int zero;
    char *s;
    
    s = ft_itoa(n);
    if (f.p < 0)
        w = f.width - ft_strlen(s);
    else
        w  = f.width - f.p;
    while (w-- > 0)
        ft_putchar(' ');
    zero = f.p - ft_strlen(s);
    while(zero-- > 0)
        ft_putchar('0');
    ft_putstr(s, f.p);
    return (0);
}
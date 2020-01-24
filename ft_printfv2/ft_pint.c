/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 17:04:25 by mafajat           #+#    #+#             */
/*   Updated: 2020/01/23 19:46:09 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_pint(int n)
{
    int w;
    int zero;
    char *s;
    
    if (n == 0 && f.p == 0)
        return (ft_handle_zero_i());
    s = ft_itoa(n);
    w = 0;
    f.type = 'i';
    if (f.p <= ft_strlen(s))
        w = f.width - ft_strlen(s);
    else
        w  = f.width - f.p;
    zero = f.p - ft_strlen(s);
    if (*s == '-' && f.z == '0' && f.p == -1)
        ft_putchar(*s++);
    while (!(*s == '-' && zero > 0 && w == 1) && w-- > 0)
    {
        if (f.z == '0')
            ft_putchar('0');
        else 
            ft_putchar(' ');
    }
    if (*s == '-' && zero++ > 0)
        ft_putchar(*s++);
    while(zero-- > 0)
      ft_putchar('0');
    ft_putstr(s);
   // free(s);
    return (0);
}
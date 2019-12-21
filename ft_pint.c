/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 17:04:25 by mafajat           #+#    #+#             */
/*   Updated: 2019/12/21 20:29:52 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_pint(int n)
{
    int w;
    int zero;
    char *s;
    
    s = ft_itoa(n);
    f.type = 'i';
    if (f.p <= ft_strlen(s))
        w = f.width - ft_strlen(s);
    else if (f.p > ft_strlen(s))
        w  = f.width - f.p;
    while (w-- > 0)
    {
        if (f.z == '0')
            ft_putchar('0');
        else 
            ft_putchar(' ');
    }
    //zero = f.p - ft_strlen(s);
    //while(zero-- > 0)
      //  ft_putchar('0');
    ft_putstr(s);
    return (0);
}
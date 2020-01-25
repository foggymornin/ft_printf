/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_zero_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:49:01 by mafajat           #+#    #+#             */
/*   Updated: 2020/01/20 17:56:06 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_handle_zero_i(void)
{
    while (f.width-- > 0)
    {
        ft_putchar(' ');
    }
    return (0); 
}
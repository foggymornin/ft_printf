/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:16:03 by mafajat           #+#    #+#             */
/*   Updated: 2019/11/22 17:17:29 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H 
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int     ft_pstring(char *str);
void	ft_putchar(char c);
char    ft_checkf(const char *str);
void	ft_putstr(char *str);
int     ft_pint(int n);
char	*ft_itoa(int z);
#endif
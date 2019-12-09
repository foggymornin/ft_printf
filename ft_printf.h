/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:16:03 by mafajat           #+#    #+#             */
/*   Updated: 2019/12/09 20:59:02 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H 
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_flags
{
    int width;
    int p;
    char r;
}               t_flags;

t_flags f;
size_t		ft_strlen(const char *s);
int		ft_atoi(const char *str);
int     ft_pstring(char *str);
void	ft_putchar(char c);
char    ft_checkf(const char *str);
void	ft_putstr(char *str, int n);
int     ft_pint(int n);
char	*ft_itoa(int z);
int	    ft_skip_flags(const char *s, int i);
void	ft_conv(va_list ar, const char *s);
void	storeflags(va_list ar, const char *s);
void    ft_reinitialize(void);
#endif
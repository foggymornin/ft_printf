/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:49:26 by mafajat           #+#    #+#             */
/*   Updated: 2019/11/22 17:38:18 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *s, ...)
{
	int i;
	va_list ar;
	
	i = 0;
	va_start(ar, s);
	while (s[i])
	{
		while(s[i] != '%' && s[i])
			ft_putchar(s[i++]);
		if (s[++i] == 's')
			ft_pstring(va_arg(ar, char *));
		if (s[i] == 'c')
			ft_putchar(va_arg(ar, int));
		else if (s[i] == 'd')
			ft_pint(va_arg(ar, int));
		i++;
	}
	return (0);
}
int		main()
{
	char s[] = "your ego should always be tamed";
	ft_printf("hedllo : %s\n%c\n%d\n%d", s, 'c', 5555, 8888);
	//printf("\n");
	//printf("first string : %k", s);
}

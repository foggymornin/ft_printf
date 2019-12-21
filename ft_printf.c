/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:49:26 by mafajat           #+#    #+#             */
/*   Updated: 2019/12/21 20:35:48 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *s, ...)
{

	int		i;
	va_list	ar;
	i = 0;
	va_start(ar, s);
	while (s[i])
	{
		ft_reinitialize();
		while (s[i] != '%' && s[i])
			ft_putchar(s[i++]);
		storeflags(ar, s + i);
		i = ft_skip_flags(s, i);
		ft_conv(ar, s + i);
		i++;
	}
	return (0);
}
int main()
{
	char s[] = "hello";
		ft_printf("%0.10s | \n", s);
		printf("%.10s | \n", s);

	//ft_printf("%0.10d|\n", 555);
	//printf("%06.5d|\n", 555);
}
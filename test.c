/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:02:15 by mafajat           #+#    #+#             */
/*   Updated: 2019/11/20 14:45:50 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		print(int n, ...)
{
	int		i;
	int		x;
	va_list ar;

	x = 1;
	va_start(ar, n);
	while (n--)
	{
		i = va_arg(ar, int);
		printf("%d : %d\n",x, i);
		x++;
	}	
}

int		main()
{
	print(6, 1, 2, 3, 4, 5);
	return 0;
}

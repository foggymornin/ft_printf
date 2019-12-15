/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 18:04:29 by mafajat           #+#    #+#             */
/*   Updated: 2019/12/13 15:42:38 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		count(int n)
{
	int i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n)
	{
		n = n / 16;
		i++;
	}
	return (i);
}
static void		store(char *s, int n, int i)
{
	if (n % 16 < 10)
			s[i] = (n % 16) + '0';
		else if (n % 16 == 10)
			s[i] = 'a';
		else if (n % 16 == 11)
			s[i] = 'b';	
		else if (n % 16 == 12)
			s[i] = 'c';
		else if (n % 16 == 13)
			s[i] = 'd';
		else if (n % 16 == 14)
			s[i] = 'e';
		else if (n % 16 == 15)
			s[i] = 'f';
}
char			*ft_itoa_hexa(int z)
{
	char		*s;
	int			i;
	int			x;
	int long	n;

	n = z;
	x = 0;
	i = count(n);
	if (!(s = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		s[0] = '-';
		x = 1;
	}
	s[i] = 0;
	while (--i >= x)
	{
		store(s, n, i);
		n = n / 16;
	}
	return (s);
}
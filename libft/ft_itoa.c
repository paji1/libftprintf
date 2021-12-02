/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:26:50 by tel-mouh          #+#    #+#             */
/*   Updated: 2021/11/18 07:13:22 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	lennum(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while ((unsigned int)n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*p;
	long	r;

	r = n;
	len = lennum(r);
	if (r < 0)
	{
		len++;
		r = -1 * r;
	}
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	p[len] = 0;
	while (len > 0)
	{
		p[len - 1] = r % 10 + '0';
		r /= 10;
		len--;
	}
	if (n < 0)
		p[0] = '-';
	return (p);
}

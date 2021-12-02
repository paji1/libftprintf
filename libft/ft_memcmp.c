/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:16:13 by tel-mouh          #+#    #+#             */
/*   Updated: 2021/11/18 07:22:26 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*q;
	unsigned char	*p;

	q = (unsigned char *)s1;
	p = (unsigned char *)s2;
	if (!n)
		return (0);
	while (*p == *q && n - 1)
	{
		p++;
		q++;
		n--;
	}
	return ((unsigned char)*q - (unsigned char)*p);
}
